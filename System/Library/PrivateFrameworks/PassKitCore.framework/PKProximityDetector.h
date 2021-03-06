/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_dispatch_queue;
@class SFDeviceDiscovery, NSObject, NSUUID;

@interface PKProximityDetector : NSObject {

	SFDeviceDiscovery* _nearbyInfoDiscovery;
	BOOL _advertisingDeviceNearby;
	NSObject*<OS_dispatch_source> _timer;
	NSObject*<OS_dispatch_queue> _timerQueue;
	NSObject*<OS_dispatch_queue> _discoveryQueue;
	unsigned _powerAssertionIdentifier;
	BOOL _isDetecting;
	NSUUID* _advertisingDeviceUUID;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) NSUUID * advertisingDeviceUUID;              //@synthesize advertisingDeviceUUID=_advertisingDeviceUUID - In the implementation block
@property (nonatomic,copy) id handler;                                      //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) BOOL isDetecting;                            //@synthesize isDetecting=_isDetecting - In the implementation block
-(void)dealloc;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(void)endDetecting;
-(void)_createPowerAssertion;
-(/*^block*/id)_createDeviceFoundBlockWithName:(id)arg1 ;
-(/*^block*/id)_createDeviceLostBlockWithName:(id)arg1 ;
-(/*^block*/id)_createDiscoveryActivationBlockWithName:(id)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(NSUUID *)advertisingDeviceUUID;
-(void)_queue_endDetecting;
-(void)_endPowerAssertion;
-(id)initWithAdvertisingDeviceUUID:(id)arg1 ;
-(void)startDetectingWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isDetecting;
@end

