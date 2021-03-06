/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@class NSOrderedSet;

@interface PLAlbumListJournalEntryPayload : PLJournalEntryPayload

@property (nonatomic,readonly) NSOrderedSet * albumUUIDs; 
@property (nonatomic,readonly) short albumListType; 
+(unsigned)payloadVersion;
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
+(id)modelProperties;
+(id)payloadClassID;
+(unsigned)minimumSnapshotPayloadVersion;
+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg1 ;
-(BOOL)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(BOOL)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3 ;
-(short)albumListType;
-(NSOrderedSet *)albumUUIDs;
-(id)insertAlbumListFromDataInManagedObjectContext:(id)arg1 ;
-(void)updateAlbumList:(id)arg1 ;
@end

