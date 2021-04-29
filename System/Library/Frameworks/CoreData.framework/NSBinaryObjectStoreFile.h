/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSMutableDictionary;

@interface NSBinaryObjectStoreFile : NSObject {

	int _databaseVersion;
	NSDictionary* _fullMetadata;
	unsigned long long _primaryKeyGeneration;
	NSMutableDictionary* _mapData;
	NSDictionary* _storeOptions;

}
-(void)dealloc;
-(BOOL)readMetadataFromFile:(id)arg1 securely:(BOOL)arg2 error:(id*)arg3 ;
-(id)fullMetadata;
-(void)setFullMetadata:(id)arg1 ;
-(BOOL)writeMetadataToFile:(id)arg1 error:(id*)arg2 ;
-(void)setDatabaseVersion:(int)arg1 ;
-(void)setPrimaryKeyGeneration:(unsigned long long)arg1 ;
-(void)setMapData:(id)arg1 ;
-(BOOL)_writeMetadataData:(id)arg1 andMapDataData:(id)arg2 toFile:(id)arg3 error:(id*)arg4 ;
-(int)databaseVersion;
-(unsigned long long)primaryKeyGeneration;
-(id)mapData;
-(BOOL)readFromFile:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeToFile:(id)arg1 error:(id*)arg2 ;
@end

