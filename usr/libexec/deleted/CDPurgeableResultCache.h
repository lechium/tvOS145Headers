//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CDPurgeableResultCache-Protocol.h"

@class CDRecentInfo, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CDPurgeableResultCache : NSObject <CDPurgeableResultCache>
{
    _Bool _empty;	// 8 = 0x8
    CDRecentInfo *_recentPurgeableResults;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    CDUnknownBlockType _updatedBlock;	// 40 = 0x28
}

+ (id)sharedPurgeableResultsCache;	// IMP=0x00000001000284cc
+ (id)defaultPath;	// IMP=0x0000000100028434
+ (id)pathForVersion:(unsigned long long)arg1;	// IMP=0x00000001000283a4
+ (unsigned long long)currentVersion;	// IMP=0x000000010002839c
- (void).cxx_destruct;	// IMP=0x000000010002b9a8
@property(copy, nonatomic) CDUnknownBlockType updatedBlock; // @synthesize updatedBlock=_updatedBlock;
@property(readonly, nonatomic) _Bool empty; // @synthesize empty=_empty;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) CDRecentInfo *recentPurgeableResults; // @synthesize recentPurgeableResults=_recentPurgeableResults;
- (void)invalidateAll;	// IMP=0x000000010002b744
- (void)invalidateRecentResultsForVolume:(id)arg1;	// IMP=0x000000010002b61c
- (id)copyInvalidServicesForVolume:(id)arg1 atUrgency:(id)arg2;	// IMP=0x000000010002b3d4
- (void)log;	// IMP=0x000000010002b314
- (id)diagnosticsForVolume:(id)arg1 atUrgency:(int)arg2;	// IMP=0x000000010002b30c
- (void)updateDiagnostics:(id)arg1 onVolume:(id)arg2 atUrgency:(int)arg3;	// IMP=0x000000010002b308
@property(readonly, nonatomic) _Bool hasInvalids;
- (_Bool)isEmpty;	// IMP=0x000000010002b0c0
- (void)prune;	// IMP=0x000000010002b0b0
- (void)prunePreserving:(id)arg1;	// IMP=0x000000010002af44
- (void)removeServiceInfo:(id)arg1;	// IMP=0x000000010002add8
- (void)setUpdateNotificationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010002ad14
- (void)updateRecentStateforVolume:(id)arg1;	// IMP=0x000000010002ab58
- (void)updateRecentInfoForServiceID:(id)arg1 volume:(id)arg2 info:(id)arg3;	// IMP=0x0000000100029e68
- (id)recentPurgeableTotals:(int)arg1;	// IMP=0x0000000100029e58
- (id)_recentPurgeableTotals:(int)arg1 validateResults:(_Bool)arg2;	// IMP=0x0000000100029938
- (long long)recentStateForVolume:(id)arg1;	// IMP=0x000000010002979c
- (id)recentInfoForVolumes:(id)arg1 atUrgency:(int)arg2;	// IMP=0x0000000100029788
- (id)recentInfoForVolumes:(id)arg1 atUrgency:(int)arg2 validateResults:(_Bool)arg3 targetVolume:(id)arg4;	// IMP=0x00000001000292c4
- (id)recentInfoForVolume:(id)arg1 atUrgency:(int)arg2;	// IMP=0x00000001000292b4
- (id)recentInfoForVolume:(id)arg1 atUrgency:(int)arg2 validateResults:(_Bool)arg3;	// IMP=0x00000001000290f8
- (void)save:(CDUnknownBlockType)arg1;	// IMP=0x0000000100028dac
- (id)initWithPath:(id)arg1;	// IMP=0x000000010002857c

@end
