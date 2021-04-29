//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CPLCloudKitZoneIdentification.h"

@interface CPLCloudKitLibraryZoneIdentification : CPLCloudKitZoneIdentification
{
}

+ (_Bool)supportsCloudKitScope:(id)arg1 engineScope:(id)arg2;	// IMP=0x00000001000c1c18
+ (long long)scopeTypeForCloudKitScope:(id)arg1 proposedScopeType:(long long)arg2 fetchedRecords:(id)arg3;	// IMP=0x00000001000c1ac0
+ (long long)_scopeTypeForCloudKitScope:(id)arg1;	// IMP=0x00000001000c1ab8
+ (id)recordNamesForScopeInfo;	// IMP=0x00000001000c1aac
+ (id)defaultZoneIDForMainScope;	// IMP=0x00000001000c1a20
+ (id)mainScopeZoneIDFromZoneIDs:(id)arg1;	// IMP=0x00000001000c18c0
+ (_Bool)isZoneIDForLibrary:(id)arg1;	// IMP=0x00000001000c1758
+ (_Bool)isZoneIDForMainScopeIdentifier:(id)arg1;	// IMP=0x00000001000c1730
+ (id)_validLibraryPrefixes;	// IMP=0x00000001000c1724
+ (long long)_zoneIndexFromZoneID:(id)arg1;	// IMP=0x00000001000c164c
- (_Bool)supportsZoneCreation;	// IMP=0x00000001000c2140
- (_Bool)supportsZoneDelete;	// IMP=0x00000001000c2138
- (id)updatedScopeChangeFromScopeChange:(id)arg1 withCKRecord:(id)arg2;	// IMP=0x00000001000c1f94
- (id)scopeChangeFromCKRecords:(id)arg1;	// IMP=0x00000001000c1e3c
- (id)_libraryStateFromCKRecord:(id)arg1;	// IMP=0x00000001000c1c98
- (id)libraryInfoRecordName;	// IMP=0x00000001000c1c8c

@end

