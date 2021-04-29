//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSDDataRefresh : NSObject
{
    _Bool _usingCloudKit;	// 8 = 0x8
    unsigned long long _refreshReason;	// 16 = 0x10
    double _delay;	// 24 = 0x18
}

+ (void)cacheLastRefreshforHomes:(id)arg1;	// IMP=0x000000010002d1c8
+ (void)clearLastRefreshTSForHomes;	// IMP=0x000000010002d144
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) _Bool usingCloudKit; // @synthesize usingCloudKit=_usingCloudKit;
@property(readonly, nonatomic) unsigned long long refreshReason; // @synthesize refreshReason=_refreshReason;
- (void)_handleCKShareError:(id)arg1 home:(id)arg2;	// IMP=0x000000010002fda0
- (id)_containsFatalError:(id)arg1;	// IMP=0x000000010002fc38
- (_Bool)_shouldPreformRefresh:(id)arg1;	// IMP=0x000000010002f9a0
- (void)_setupShareForParticipant:(id)arg1 home:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002f6b0
- (void)_saveMediaServiceConfigInfo:(id)arg1 record:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002f410
- (void)_updateDefaultService:(id)arg1 record:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002f00c
- (void)_shareThisRecordIfApplicable:(id)arg1 home:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002ec20
- (void)_createAndSaveAppleMusicRecord:(id)arg1 publicDBInfo:(id)arg2 home:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010002e578
- (_Bool)_shouldProceedWithExecution:(id)arg1;	// IMP=0x000000010002e4ac
- (void)_checkDataSanity:(id)arg1 publicDBInfo:(id)arg2 home:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010002db90
- (void)_initializeCKAndServiceInfoForHome:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002d678
- (void)refreshDataAfterDelay;	// IMP=0x000000010002d370
- (void)_refreshDatabases:(CDUnknownBlockType)arg1;	// IMP=0x000000010002ca7c
- (void)_deleteRecordZone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002c858
- (void)_deleteZombieRecordZonesIfAny:(CDUnknownBlockType)arg1;	// IMP=0x000000010002b858
- (void)_checkZoneAndDefaultRecordInEachHome:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002b184
- (void)_performDataRefresh:(CDUnknownBlockType)arg1;	// IMP=0x000000010002a7a0
- (void)performRefreshWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002a3f0
- (id)initWithReason:(unsigned long long)arg1 withDelay:(double)arg2;	// IMP=0x000000010002a390
- (id)initWithReason:(unsigned long long)arg1 usingCloudKit:(_Bool)arg2;	// IMP=0x000000010002a340

@end
