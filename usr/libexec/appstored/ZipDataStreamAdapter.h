//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AssetDataConsumer-Protocol.h"

@class NSString, ZipDataStreamStatus;
@protocol OS_dispatch_group, OS_dispatch_semaphore, SZExtractor;

@interface ZipDataStreamAdapter : NSObject <AssetDataConsumer>
{
    _Bool _dataComplete;	// 8 = 0x8
    id <SZExtractor> _extractor;	// 16 = 0x10
    _Bool _hasConsumedData;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    unsigned long long _resumptionOffset;	// 40 = 0x28
    NSObject<OS_dispatch_semaphore> *_backpressureSemaphore;	// 48 = 0x30
    NSObject<OS_dispatch_group> *_consistencyGroup;	// 56 = 0x38
    struct os_unfair_lock_s _lock;	// 64 = 0x40
    ZipDataStreamStatus *_locked_streamStatus;	// 72 = 0x48
}

+ (void)_prepareExtractor:(id)arg1 toPath:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100082034
- (void).cxx_destruct;	// IMP=0x00000001000820ec
- (void)_setStreamStatus:(id)arg1;	// IMP=0x00000001000820a0
- (id)_streamStatus;	// IMP=0x0000000100082060
@property(readonly, copy) NSString *description;
- (void)truncateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100081fd0
- (void)resetWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100081fc0
- (void)suspendWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100081eb4
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100081d94
- (void)finishWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100081c50
- (void)consumeData:(id)arg1 andWait:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010008167c
- (void)consumeData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100081668
- (void)consumeData:(id)arg1 andWaitWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100081654
- (unsigned long long)diskUsage;	// IMP=0x0000000100081590
- (id)initWithExtractor:(id)arg1 toPath:(id)arg2;	// IMP=0x0000000100081490

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

