//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CDResult.h"

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CDPurgeableOperationResult : CDResult
{
    NSArray *_volumes;	// 8 = 0x8
    unsigned long long _totalPurgeableBytes;	// 16 = 0x10
    NSMutableArray *_mutableResults;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100032ccc
@property(retain, nonatomic) NSMutableArray *mutableResults; // @synthesize mutableResults=_mutableResults;
@property(readonly, nonatomic) unsigned long long totalPurgeableBytes; // @synthesize totalPurgeableBytes=_totalPurgeableBytes;
@property(readonly, nonatomic) NSArray *volumes; // @synthesize volumes=_volumes;
- (void)addResult:(id)arg1;	// IMP=0x0000000100032c10
@property(readonly, nonatomic) NSArray *results;
- (id)initWithVolumes:(id)arg1;	// IMP=0x0000000100032b60

@end

