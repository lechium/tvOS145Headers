//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "InstallAttributionDatabaseSession.h"

#import "SQLiteDatabaseTransaction-Protocol.h"

@class NSString, SQLiteConnection;

@interface InstallAttributionDatabaseTransaction : InstallAttributionDatabaseSession <SQLiteDatabaseTransaction>
{
}

- (id)predicateMatchingSourceAppAdamID:(id)arg1 fidelityType:(id)arg2;	// IMP=0x00000001001ad1c8
- (id)startEndTimeWindow;	// IMP=0x00000001001ad070
- (id)lowFidelityImpressionsCap;	// IMP=0x00000001001acf18
- (void)_blowAwayAllLoFiParamsFrom:(id)arg1;	// IMP=0x00000001001acdb0
- (void)pruneLowFidelityImpressionsFromSourceApp:(id)arg1;	// IMP=0x00000001001acb58
- (_Bool)removeEarliestInstallAttributionParamsFromSourceApp:(id)arg1;	// IMP=0x00000001001ac808
- (_Bool)canFinalizeImpression:(id)arg1 error:(id *)arg2;	// IMP=0x00000001001abbbc
- (_Bool)updatePingbackWithConversionValue:(id)arg1 timestamp:(id)arg2 forApp:(id)arg3 withError:(id *)arg4;	// IMP=0x00000001001ab7a0
- (_Bool)incrementPingbackRetryCountForApp:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001001ab644
- (_Bool)removeUnregisteredInstallAttributionPingbacksBeforeDate:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001001ab42c
- (_Bool)setInstallAttributionPingbackRegisteredForApp:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001001ab254
- (_Bool)removeInstallAttributionPingbackForApp:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001001ab174
- (_Bool)addInstallAttributionPingback:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001001aac3c
- (_Bool)removeInstallAttributionParamsBeforeDate:(id)arg1 isLowFidelity:(_Bool)arg2 withError:(id *)arg3;	// IMP=0x00000001001aa9e4
- (_Bool)removeInstallAttributionParamsForApp:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001001aa904
- (_Bool)addInstallAttributionParams:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001001aa538
- (_Bool)purgeImpressionsWithProcessName:(id)arg1;	// IMP=0x00000001001aa470
- (_Bool)removeInstallAttributionImpressionsBeforeDate:(id)arg1;	// IMP=0x00000001001aa354
- (_Bool)removeImpressionForSourceAppAdamID:(id)arg1 forAppAdamID:(id)arg2;	// IMP=0x00000001001aa168
- (_Bool)finalizeInstallAttributionImpression:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001001a9a7c
- (_Bool)addInstallAttributionImpression:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001001a96e4

// Remaining properties
@property(readonly) SQLiteConnection *connection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
