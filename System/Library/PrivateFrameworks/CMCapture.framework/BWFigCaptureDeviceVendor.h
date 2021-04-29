/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;
#import <CMCapture/CMCapture-Structs.h>
@class BWFigCaptureDevice, NSMutableArray, BWFigCaptureDeviceClient, NSObject, NSDictionary, NSMutableSet, NSMutableDictionary;

@interface BWFigCaptureDeviceVendor : NSObject {

	/*function pointer*/void* _deviceCreateFunction;
	BWFigCaptureDevice* _device;
	NSMutableArray* _controlledStreams;
	NSMutableArray* _streamsControlledByOtherClients;
	NSMutableArray* _registeredDeviceClients;
	BWFigCaptureDeviceClient* _deviceClient;
	NSMutableArray* _victimizedDeviceClients;
	NSObject*<OS_dispatch_queue> _deviceQueue;
	NSObject*<OS_dispatch_source> _deviceCloseTimer;
	int _deviceUsageCount;
	double _deviceCloseTimeoutSeconds;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSObject*<OS_os_transaction> _activeForClientAssertion;
	NSDictionary* _cameraPoseMatricesByPortType;
	NSMutableSet* _portTypesToCheckForToFAFEstimator;
	NSMutableDictionary* _tofAFEstimatorResultsByPortType;
	NSMutableSet* _portTypesToCheckForAFDriverShortStatistics;
	NSMutableDictionary* _afDriverShortStatisticsByPortType;

}

@property (readonly) int activeDeviceClientPriority; 
+(void)initialize;
+(id)sharedCaptureDeviceVendor;
+(BOOL)videoCaptureDeviceFirmwareIsLoaded;
-(void)dealloc;
-(void)takeBackDevice:(id)arg1 forClient:(int)arg2 informClientWhenDeviceAvailableAgain:(BOOL)arg3 ;
-(BOOL)activeDeviceEquals:(id)arg1 ;
-(int)registerClientWithPID:(int)arg1 clientDescription:(id)arg2 clientPriority:(int)arg3 canStealFromClientsWithSamePriority:(BOOL)arg4 deviceSharingWithOtherClientsAllowed:(BOOL)arg5 deviceAvailabilityChangedHandler:(/*^block*/id)arg6 ;
-(id)copyDeviceForClient:(int)arg1 error:(int*)arg2 ;
-(id)copyStreamForFlashlightWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(id)arg3 ;
-(int)activeDeviceClientPriority;
-(id)copyStreamWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(id)arg3 error:(int*)arg4 ;
-(id)copyStreamsWithPositions:(id)arg1 deviceTypes:(id)arg2 forDevice:(id)arg3 error:(int*)arg4 ;
-(id)cameraPoseMatrixForStreamWithPosition:(int)arg1 deviceType:(int)arg2 ;
-(void)prewarmDefaultVideoDeviceForPID:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)streamsInUseForDevice:(id)arg1 ;
-(void)invalidateVideoDevice:(id)arg1 forPID:(int)arg2 ;
-(void)unregisterCallbacksForClient:(int)arg1 ;
-(id)initWithDeviceCreateFunction:(/*function pointer*/void*)arg1 ;
-(int)_createDevice:(const char*)arg1 clientPID:(int)arg2 ;
-(void)_setupDeviceCloseTimer;
-(void)_resetDeviceCloseTimer;
-(void)_performBlockOnDeviceQueue:(/*^block*/id)arg1 ;
-(void)_performBlockOnDeviceQueueSynchronously:(/*^block*/id)arg1 ;
-(id)_registeredDeviceClientWithID:(int)arg1 ;
-(void)_relinquishControlOfStreams;
-(void)_invalidateAndReleaseDevice;
-(id)_moveDeviceClientToVictimizedList;
-(void)_dumpInventory;
-(void)_deviceAvailabilityChangedForClient:(id)arg1 available:(BOOL)arg2 postNotification:(BOOL)arg3 reason:(int)arg4 ;
-(id)_copyStreamWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(id)arg3 requestControl:(BOOL)arg4 error:(int*)arg5 ;
-(id)_copyStreamsWithPositions:(id)arg1 deviceTypes:(id)arg2 forDevice:(id)arg3 requestControl:(BOOL)arg4 error:(int*)arg5 ;
-(int)_requestControlOfStreams:(id)arg1 device:(id)arg2 ;
-(id)_popLatestVictimizedDeviceClient;
-(void)_removeDeviceClient;
-(void)_updateTofAFEstimatorResultsForStream:(id)arg1 ;
-(void)_updateAFDriverShortStatisticsForStream:(id)arg1 ;
-(void)_unregisterFromStreamNotifications:(id)arg1 ;
-(void)_removeVictimizedDeviceClientWithClientID:(int)arg1 ;
-(void)_logToFAFEstimatorResultsToCoreAnalytics;
-(void)_logAFDriverShortStatisticsToCoreAnalytics;
-(void)_handleErrorForGlobalDevice;
-(void)_registerForStreamNotifications:(id)arg1 ;
-(void)_registerForDeviceNotifications:(id)arg1 ;
-(void)_unregisterForDeviceNotifications:(id)arg1 ;
-(id)copyStreamsWithUniqueIDs:(id)arg1 forDevice:(id)arg2 error:(int*)arg3 ;
-(void)takeBackStreams:(id)arg1 device:(id)arg2 ;
-(void)shutDownSystemPressuredDevice:(id)arg1 ;
-(void)resumeSystemPressuredDevice;
-(float)structuredLightProjectorStandbyTemperatureWithError:(int*)arg1 ;
-(void)_handleStreamControlTakenByAnotherClientNotification:(OpaqueFigCaptureStreamRef)arg1 ;
-(void)_handleStreamRelinquishedByAnotherClientNotification:(OpaqueFigCaptureStreamRef)arg1 ;
-(void)_handleStreamFrameReceiveTimeoutNotification:(OpaqueFigCaptureStreamRef)arg1 ;
-(void)_handleDeviceUnrecoverableError:(int)arg1 fromDevice:(OpaqueFigCaptureDeviceRef)arg2 ;
-(void)_handleDeviceNoLongerAvailable:(OpaqueFigCaptureDeviceRef)arg1 ;
@end

