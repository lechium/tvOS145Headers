//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DownloadsExternalTransaction.h"

@interface DownloadsTransaction : DownloadsExternalTransaction
{
}

+ (double)orderKeyIncrement;	// IMP=0x0000000100006c94
+ (unsigned int)orderingBucketSize;	// IMP=0x0000000100006c88
- (void)_setPolicy:(id)arg1 forDownloadWithID:(long long)arg2;	// IMP=0x000000010000b758
- (_Bool)_resetDownload:(id)arg1 withValues:(const id *)arg2 isUserIntiated:(_Bool)arg3;	// IMP=0x000000010000b148
- (double)_orderKeyAdjacentToOrderKey:(double)arg1 comparisonType:(long long)arg2;	// IMP=0x000000010000ae28
- (id)_newTransactionForDownload:(id)arg1 inDatabase:(id)arg2;	// IMP=0x000000010000acb8
- (_Bool)_moveDownloadWithID:(long long)arg1 relativeToDownloadWithID:(long long)arg2 comparisonType:(long long)arg3;	// IMP=0x000000010000ab04
- (id)_copyEffectiveBundleIDForDownload:(id)arg1;	// IMP=0x000000010000aa24
- (id)_addEffectiveClientWithBundleID:(id)arg1 database:(id)arg2;	// IMP=0x000000010000a750
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2 ofDownloadID:(long long)arg3;	// IMP=0x000000010000a6a8
- (_Bool)updateDownloadEntityWithIdentifier:(long long)arg1 withDownload:(id)arg2;	// IMP=0x000000010000a450
- (_Bool)unblockDownloadsWithClientIdentifiers:(id)arg1;	// IMP=0x000000010000a12c
- (_Bool)retryDownloadsWithIdentifiers:(id)arg1;	// IMP=0x0000000100009f98
- (_Bool)retryDownloadWithIdentifier:(long long)arg1;	// IMP=0x0000000100009f00
- (_Bool)restartDownloadsWithIdentifiers:(id)arg1;	// IMP=0x0000000100009cec
- (_Bool)resetDownloadsWithIdentifiers:(id)arg1 isUserInitiated:(_Bool)arg2;	// IMP=0x0000000100009a68
- (_Bool)resetDownloadsWithIdentifiers:(id)arg1;	// IMP=0x0000000100009a58
- (_Bool)resetDownloadsMatchingPredicate:(id)arg1 isUserInitiated:(_Bool)arg2;	// IMP=0x00000001000096f8
- (_Bool)resetDownloadsMatchingPredicate:(id)arg1;	// IMP=0x00000001000096e8
- (void)reconcileSoftwareDownloads:(id)arg1 fromITunesStore:(_Bool)arg2;	// IMP=0x0000000100008fd4
- (_Bool)prioritizeDownloadsWithKind:(id)arg1 clientID:(id)arg2;	// IMP=0x0000000100008990
- (_Bool)prioritizeDownloadWithID:(long long)arg1 aboveDownloadWithID:(long long)arg2 error:(id *)arg3;	// IMP=0x000000010000868c
- (_Bool)pauseDownloadsWithIdentifiers:(id)arg1;	// IMP=0x00000001000083a4
- (_Bool)moveDownloadWithID:(long long)arg1 beforeDownloadWithID:(long long)arg2;	// IMP=0x0000000100008394
- (_Bool)moveDownloadWithID:(long long)arg1 afterDownloadWithID:(long long)arg2;	// IMP=0x0000000100008384
- (id)insertDownloads:(id)arg1 beforeDownloadWithID:(long long)arg2;	// IMP=0x0000000100008214
- (id)insertDownloads:(id)arg1 afterDownloadWithID:(long long)arg2;	// IMP=0x00000001000080a8
- (id)importDownloads:(id)arg1 initialOrderKey:(double)arg2 orderKeyIncrement:(double)arg3;	// IMP=0x00000001000076b0
- (_Bool)finishDownloadsWithIdentifiers:(id)arg1 finalPhase:(id)arg2;	// IMP=0x0000000100007524
- (_Bool)finishDownloadWithID:(long long)arg1 finalPhase:(id)arg2 updatePipeline:(_Bool)arg3;	// IMP=0x0000000100007238
- (_Bool)finishDownloadWithID:(long long)arg1 finalPhase:(id)arg2;	// IMP=0x0000000100007228
- (_Bool)deletePersistentDownloadManagerWithID:(long long)arg1;	// IMP=0x0000000100006ef4
- (_Bool)deletePersistentDownloadManagerWithClientID:(id)arg1 persistenceID:(id)arg2;	// IMP=0x0000000100006dd0
- (id)changeset;	// IMP=0x0000000100006da4
- (id)addDownloads:(id)arg1;	// IMP=0x0000000100006ca0

@end

