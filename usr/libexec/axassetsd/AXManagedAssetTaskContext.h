//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBackgroundActivityScheduler;

@interface AXManagedAssetTaskContext : NSObject
{
    unsigned long long _environment;	// 8 = 0x8
    NSBackgroundActivityScheduler *_activityScheduler;	// 16 = 0x10
    CDUnknownBlockType _activitySchedulerCompletionHandler;	// 24 = 0x18
}

+ (id)contextWithXPCClient;	// IMP=0x00000001000062fc
+ (id)contextWithActivity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006254
- (void).cxx_destruct;	// IMP=0x0000000100006458
@property(copy, nonatomic) CDUnknownBlockType activitySchedulerCompletionHandler; // @synthesize activitySchedulerCompletionHandler=_activitySchedulerCompletionHandler;
@property(retain, nonatomic) NSBackgroundActivityScheduler *activityScheduler; // @synthesize activityScheduler=_activityScheduler;
@property(nonatomic) unsigned long long environment; // @synthesize environment=_environment;
- (void)markCompletedWithResult:(long long)arg1;	// IMP=0x00000001000063b4
@property(readonly, nonatomic) _Bool shouldDefer;
- (id)_init;	// IMP=0x0000000100006220

@end

