//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface CSCommandControlBehaviorMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100080010
- (void).cxx_destruct;	// IMP=0x0000000100080bdc
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)notifyDidStopStream:(id)arg1;	// IMP=0x0000000100080994
- (void)notifyWillStopStream:(id)arg1;	// IMP=0x0000000100080774
- (void)notifyDidStartStreamWithContext:(id)arg1 successfully:(_Bool)arg2 option:(id)arg3;	// IMP=0x000000010008050c
- (void)notifyWillStartStreamWithContext:(id)arg1 option:(id)arg2;	// IMP=0x00000001000802b0
- (void)unregisterObserver:(id)arg1;	// IMP=0x00000001000801e0
- (void)registerObserver:(id)arg1;	// IMP=0x0000000100080110
- (id)init;	// IMP=0x000000010008007c

@end
