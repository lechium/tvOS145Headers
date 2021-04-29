//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLPrequeliteStorage.h"

#import "CPLEngineClientCacheImplementation-Protocol.h"

@class NSString;

@interface CPLPrequeliteClientCache : CPLPrequeliteStorage <CPLEngineClientCacheImplementation>
{
}

- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x00000001000562a8
- (void)fillRelatedIdentifiersInChange:(id)arg1;	// IMP=0x0000000100056044
- (id)statusPerScopeIndex;	// IMP=0x0000000100055fe0
- (id)statusDictionary;	// IMP=0x0000000100055e60
- (id)status;	// IMP=0x0000000100055cd4
- (_Bool)_updateRelatedIdentifier:(id)arg1 forRecordWithIdentifier:(id)arg2;	// IMP=0x0000000100055be0
- (_Bool)_deleteBadRelations;	// IMP=0x0000000100055b08
- (id)_badContainerRelationsIdentifiers;	// IMP=0x00000001000559fc
- (unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x0000000100055898
- (_Bool)hasRecordWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x0000000100055734
- (id)recordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x000000010005523c
- (id)recordsWithRelatedScopedIdentifier:(id)arg1;	// IMP=0x0000000100054d64
- (_Bool)hasRecordWithScopedIdentifier:(id)arg1;	// IMP=0x0000000100054c2c
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1;	// IMP=0x0000000100054a70
- (id)recordWithScopedIdentifier:(id)arg1;	// IMP=0x0000000100054728
- (_Bool)deleteRecordWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000544d4
- (_Bool)updateRecord:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000540e0
- (_Bool)addRecord:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100053cc8
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x0000000100053a34
- (_Bool)initializeStorage;	// IMP=0x000000010005389c
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0000000100053868

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
