//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CBControllerInfo, CBDevice, NSObject;
@protocol OS_dispatch_queue;

@protocol CBStackController
@property(copy, nonatomic) CDUnknownBlockType powerChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType inquiryStateChangedHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType discoverableStateChangedHandler;
@property(readonly, nonatomic) long long powerState;
@property(readonly, nonatomic) int inquiryState;
@property(readonly, nonatomic) int discoverableState;
@property(readonly, nonatomic) CBControllerInfo *controllerInfo;
- (_Bool)setLowPowerModeWithReason:(int)arg1 error:(id *)arg2;
- (_Bool)powerOff:(id *)arg1;
- (_Bool)powerOn:(id *)arg1;
- (_Bool)modifyDevice:(CBDevice *)arg1 error:(id *)arg2;
- (void)invalidate;
- (void)activate;
@end

