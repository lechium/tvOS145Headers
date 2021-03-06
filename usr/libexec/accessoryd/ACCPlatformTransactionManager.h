//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ACCPlatformTransactionManager : NSObject
{
    NSMutableDictionary *_transactions;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_transactionsLock;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_timerQueue;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_timerSource;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x00000001000f7a70
- (void).cxx_destruct;	// IMP=0x00000001000f7b5c
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue; // @synthesize timerQueue=_timerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transactionsLock; // @synthesize transactionsLock=_transactionsLock;
@property(retain, nonatomic) NSMutableDictionary *transactions; // @synthesize transactions=_transactions;
- (void)removeTransactionForConnectionUUID:(id)arg1;	// IMP=0x00000001000f75c8
- (void)addTransactionForConnectionUUID:(id)arg1;	// IMP=0x00000001000f714c
- (void)dealloc;	// IMP=0x00000001000f7100
- (id)init;	// IMP=0x00000001000f6cd8

@end

