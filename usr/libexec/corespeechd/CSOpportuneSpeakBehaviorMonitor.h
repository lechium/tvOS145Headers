//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface CSOpportuneSpeakBehaviorMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001000ae21c
- (void).cxx_destruct;	// IMP=0x00000001000aedf8
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)notifyDidStopStream:(id)arg1;	// IMP=0x00000001000aebc4
- (void)notifyWillStopStream:(id)arg1;	// IMP=0x00000001000ae9b8
- (void)notifyDidStartStreamWithContext:(id)arg1 audioProviderUUID:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4;	// IMP=0x00000001000ae730
- (void)notifyWillStartStreamWithContext:(id)arg1 audioProviderUUID:(id)arg2 option:(id)arg3;	// IMP=0x00000001000ae4bc
- (void)unregisterObserver:(id)arg1;	// IMP=0x00000001000ae3ec
- (void)registerObserver:(id)arg1;	// IMP=0x00000001000ae31c
- (id)init;	// IMP=0x00000001000ae288

@end

