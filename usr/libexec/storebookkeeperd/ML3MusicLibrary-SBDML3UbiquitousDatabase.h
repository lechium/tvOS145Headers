//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3MusicLibrary.h>

@interface ML3MusicLibrary (SBDML3UbiquitousDatabase)
- (_Bool)supportsUPP;	// IMP=0x000000010000a120
- (id)uppDatabase;	// IMP=0x000000010000a0ac
- (void)SBKCommitUniversalPlaybackPositionTransaction:(id)arg1 domainVersion:(id)arg2 metadataEnumerationBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010000ba14
- (void)SBKCancelUniversalPlaybackPositionTransaction:(id)arg1;	// IMP=0x000000010000ba10
- (id)SBKBeginTransactionWithItemsToSyncEnumerationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010000b32c
- (id)SBKSQLQueryStringForItemsNeedingPush;	// IMP=0x000000010000b310
- (id)SBKQueryForTracksNeedingPushWithEntityRevisionAnchor:(unsigned long long)arg1 orderingTerms:(id)arg2;	// IMP=0x000000010000b100
@end

