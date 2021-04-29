/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDevicePreferenceDataSource.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue, HMDLightProfileDataSource;
@class NSString, NSUUID, NSObject, HMDLightProfile, HMFTimer, NSNotificationCenter;

@interface HMDNaturalLightingCurveWriter : HMFObject <HMFMessageReceiver, HMFLogging, HMDDevicePreferenceDataSource, HMFTimerDelegate> {

	BOOL _currentDevicePrimaryResident;
	NSString* _logIdentifier;
	NSUUID* _UUID;
	NSObject*<OS_dispatch_queue> _workQueue;
	/*^block*/id _timerFactory;
	HMDLightProfile* _lightProfile;
	HMFTimer* _periodicCharacteristicWriteTimer;
	double _naturalLightingCurveUpdateInterval;
	double _naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold;
	id<HMDLightProfileDataSource> _dataSource;
	NSNotificationCenter* _notificationCenter;

}

@property (readonly) NSUUID * UUID;                                                                  //@synthesize UUID=_UUID - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                         //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSString * logIdentifier;                                                       //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (readonly) id timerFactory;                                                                //@synthesize timerFactory=_timerFactory - In the implementation block
@property (__weak) HMDLightProfile * lightProfile;                                                   //@synthesize lightProfile=_lightProfile - In the implementation block
@property (retain) HMFTimer * periodicCharacteristicWriteTimer;                                      //@synthesize periodicCharacteristicWriteTimer=_periodicCharacteristicWriteTimer - In the implementation block
@property (readonly) double naturalLightingCurveUpdateInterval;                                      //@synthesize naturalLightingCurveUpdateInterval=_naturalLightingCurveUpdateInterval - In the implementation block
@property (readonly) double naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold;              //@synthesize naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold=_naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold - In the implementation block
@property (readonly) id<HMDLightProfileDataSource> dataSource;                                       //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) NSNotificationCenter * notificationCenter;                                      //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;                 //@synthesize currentDevicePrimaryResident=_currentDevicePrimaryResident - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)UUID;
-(id<HMDLightProfileDataSource>)dataSource;
-(NSNotificationCenter *)notificationCenter;
-(NSString *)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(id)timerFactory;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMDLightProfile *)lightProfile;
-(void)setLightProfile:(HMDLightProfile *)arg1 ;
-(BOOL)supportsDeviceWithCapabilities:(id)arg1 ;
-(BOOL)isCurrentDevicePrimaryResident;
-(void)handlePrimaryResidentUpdateNotification:(id)arg1 ;
-(double)naturalLightingCurveUpdateInterval;
-(double)naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold;
-(id)initWithUUID:(id)arg1 workQueue:(id)arg2 logIdentifier:(id)arg3 ;
-(void)configureWithLightProfile:(id)arg1 ;
-(void)handleActiveTransitionContextUpdated:(id)arg1 ;
-(void)synchronizeCurveWithActiveTransitionContext:(id)arg1 ;
-(id)initWithUUID:(id)arg1 workQueue:(id)arg2 logIdentifier:(id)arg3 dataSource:(id)arg4 notificationCenter:(id)arg5 timerFactory:(/*^block*/id)arg6 ;
-(void)setCurrentDevicePrimaryResident:(BOOL)arg1 ;
-(void)handleCurrentDevicePrimaryResidentChangedWithReason:(id)arg1 ;
-(void)setPeriodicCharacteristicWriteTimer:(HMFTimer *)arg1 ;
-(void)writeForNaturalLightingEnabledWithReason:(id)arg1 ;
-(HMFTimer *)periodicCharacteristicWriteTimer;
-(void)writeWithNaturalLightingEnabled:(BOOL)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
