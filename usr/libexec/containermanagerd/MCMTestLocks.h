//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface MCMTestLocks : NSObject
{
    long long _lockCount[8];	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_lockQueue[8];	// 72 = 0x48
    NSObject<OS_dispatch_semaphore> *_lockSemaphore[8];	// 136 = 0x88
    _Bool _enabled;	// 200 = 0xc8
    NSObject<OS_dispatch_queue> *_stateQueue;	// 208 = 0xd0
}

+ (id)sharedInstance;	// IMP=0x00000001000871e0
- (void).cxx_destruct;	// IMP=0x0000000100086a34
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)_stateQueue_releaseLock:(unsigned long long)arg1;	// IMP=0x00000001000869fc
- (void)_stateQueue_acquireLock:(unsigned long long)arg1;	// IMP=0x0000000100086938
- (void)_stateQueue_updateCountForLock:(unsigned long long)arg1 byCount:(long long)arg2;	// IMP=0x00000001000867a0
- (void)waitOnLock:(unsigned long long)arg1;	// IMP=0x000000010008639c
- (void)releaseAllLocks;	// IMP=0x0000000100086320
- (void)releaseLock:(unsigned long long)arg1;	// IMP=0x0000000100086298
- (void)acquireLock:(unsigned long long)arg1;	// IMP=0x0000000100086210
- (id)init;	// IMP=0x0000000100086118

@end

