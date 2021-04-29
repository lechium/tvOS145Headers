//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSObject;
@protocol OS_dispatch_queue;

@protocol CBStackDeviceMonitor
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property(nonatomic) unsigned long long discoveryFlags;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler;
- (void)invalidate;
- (void)activate;
@end
