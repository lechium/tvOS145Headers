//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineWriteTransactionBlocker.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface CPLPrequeliteWriteTransactionBlocker : CPLEngineWriteTransactionBlocker
{
    NSObject<OS_dispatch_queue> *_bypassQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_blockedQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000366bc
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *blockedQueue; // @synthesize blockedQueue=_blockedQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *bypassQueue; // @synthesize bypassQueue=_bypassQueue;
- (id)initWithBypassQueue:(id)arg1 blockedQueue:(id)arg2;	// IMP=0x00000001000364bc

@end

