//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface PCSDelayedAction : NSObject
{
    _Bool _running;	// 8 = 0x8
    CDUnknownBlockType _actionOnTrigger;	// 16 = 0x10
    unsigned long long _delayInSeconds;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSOperationQueue *_operationQueue;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_waitSource;	// 48 = 0x30
    NSObject<OS_os_transaction> *_pendingTransaction;	// 56 = 0x38
    long long _noTransaction;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010000dbc4
@property _Bool running; // @synthesize running=_running;
@property long long noTransaction; // @synthesize noTransaction=_noTransaction;
@property(retain) NSObject<OS_os_transaction> *pendingTransaction; // @synthesize pendingTransaction=_pendingTransaction;
@property(retain) NSObject<OS_dispatch_source> *waitSource; // @synthesize waitSource=_waitSource;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property unsigned long long delayInSeconds; // @synthesize delayInSeconds=_delayInSeconds;
@property(copy) CDUnknownBlockType actionOnTrigger; // @synthesize actionOnTrigger=_actionOnTrigger;
- (void)trigger;	// IMP=0x000000010000da2c
- (void)setHoldTransaction:(_Bool)arg1;	// IMP=0x000000010000d994
- (void)run;	// IMP=0x000000010000d984
- (void)setAction:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d940
- (id)initWithDelay:(unsigned long long)arg1 operationQueue:(id)arg2;	// IMP=0x000000010000d574

@end

