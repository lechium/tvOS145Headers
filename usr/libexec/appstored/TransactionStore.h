//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface TransactionStore : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    unsigned long long _handle;	// 16 = 0x10
    long long _holdTime;	// 24 = 0x18
    NSCountedSet *_transactionCount;	// 32 = 0x20
    NSMutableDictionary *_transactionStore;	// 40 = 0x28
}

+ (void)releaseKeepAliveTransaction:(id)arg1;	// IMP=0x00000001001addd8
+ (void)takeKeepAliveTransaction:(id)arg1;	// IMP=0x00000001001add6c
+ (void)holdKeepAliveTransaction:(id)arg1 whilePerformingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001001adce4
+ (id)globalStore;	// IMP=0x00000001001ad788
- (void).cxx_destruct;	// IMP=0x00000001001ae2ac
- (void)releaseKeepAliveTransaction:(id)arg1;	// IMP=0x00000001001ae0bc
- (void)takeKeepAliveTransaction:(id)arg1;	// IMP=0x00000001001aded4
- (void)holdKeepAliveTransaction:(id)arg1 whilePerformingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ade44
@property(readonly) unsigned long long transactionCount;
@property(readonly, copy) NSCountedSet *activeTransactions;
- (void)dealloc;	// IMP=0x00000001001adac0
- (id)initWithHoldTime:(double)arg1;	// IMP=0x00000001001ad814
- (id)init;	// IMP=0x00000001001ad804

@end

