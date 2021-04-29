/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLGenericAlbumJournalEntryPayload.h>

@interface PLFetchingAlbumJournalEntryPayload : PLGenericAlbumJournalEntryPayload
+(unsigned)payloadVersion;
+(id)nonPersistedModelPropertiesDescription;
+(id)modelProperties;
+(id)payloadClassID;
+(unsigned)minimumSnapshotPayloadVersion;
+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg1 ;
-(id)insertAlbumFromDataInManagedObjectContext:(id)arg1 ;
-(void)migrateMergedPayloadWithUpdatePayloads:(id)arg1 ;
-(void)_fixHasLocationSmartAlbum;
@end

