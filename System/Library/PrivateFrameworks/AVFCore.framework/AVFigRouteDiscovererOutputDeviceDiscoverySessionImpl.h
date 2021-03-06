/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputDeviceDiscoverySessionImpl.h>

@class AVOutputDeviceDiscoverySession, AVAudioSession, AVOutputDeviceDiscoverySessionAvailableOutputDevices, AVWeakReference, NSString;

@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionImpl : NSObject <AVOutputDeviceDiscoverySessionImpl> {

	/*^block*/id _routeDiscovererCreator;
	OpaqueFigRouteDiscovererRef _discoverer;
	OpaqueAPSyncControllerRef _syncController;
	AVWeakReference* _weakObserver;
	AVOutputDeviceDiscoverySession* _parentSession;

}

@property (nonatomic,readonly) OpaqueFigRouteDiscovererRef routeDiscoverer;                                                      //@synthesize discoverer=_discoverer - In the implementation block
@property (__weak) AVOutputDeviceDiscoverySession * parentOutputDeviceDiscoverySession;                                          //@synthesize parentSession=_parentSession - In the implementation block
@property (nonatomic,retain) AVAudioSession * targetAudioSession; 
@property (nonatomic,readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices * availableOutputDevicesObject; 
@property (nonatomic,readonly) BOOL devicePresenceDetected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)devicePresenceDetected;
-(AVAudioSession *)targetAudioSession;
-(void)setTargetAudioSession:(AVAudioSession *)arg1 ;
-(void)_serverDied;
-(void)setParentOutputDeviceDiscoverySession:(AVOutputDeviceDiscoverySession *)arg1 ;
-(void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)arg1 ;
-(AVOutputDeviceDiscoverySessionAvailableOutputDevices *)availableOutputDevicesObject;
-(OpaqueFigRouteDiscovererRef)routeDiscoverer;
-(id)initWithFigRouteDiscovererCreator:(/*^block*/id)arg1 syncController:(OpaqueAPSyncControllerRef)arg2 ;
-(AVOutputDeviceDiscoverySession *)parentOutputDeviceDiscoverySession;
-(void)_availableRoutesChanged;
-(void)_availableGroupsChanged;
-(void)_routePresentChanged;
@end

