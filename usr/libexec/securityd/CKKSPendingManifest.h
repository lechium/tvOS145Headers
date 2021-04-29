//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CKKSManifest.h"

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKKSPendingManifest : CKKSManifest
{
    NSMutableArray *_committedLeafRecordIDs;	// 104 = 0x68
    _Bool _readyToCommit;	// 112 = 0x70
}

+ (_Bool)intransactionRecordChanged:(id)arg1 resync:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000001001097a4
+ (id)sqlTable;	// IMP=0x0000000100109798
- (void).cxx_destruct;	// IMP=0x0000000100109784
@property(readonly, getter=isReadyToCommmit) _Bool readyToCommit; // @synthesize readyToCommit=_readyToCommit;
@property(readonly, nonatomic) NSArray *committedLeafRecordIDs; // @synthesize committedLeafRecordIDs=_committedLeafRecordIDs;
- (id)commitToDatabaseWithError:(id *)arg1;	// IMP=0x00000001001093e4
- (_Bool)isReadyToCommit;	// IMP=0x00000001001091e8

@end
