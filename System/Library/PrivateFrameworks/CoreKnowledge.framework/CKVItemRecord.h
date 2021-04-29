/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CKVDatabaseRecord.h>

@class CKVItem, NSData, CKVOriginApp, NSUUID, NSString;

@interface CKVItemRecord : NSObject <CKVDatabaseRecord> {

	CKVItem* _item;
	NSData* _itemBuffer;
	CKVOriginApp* _originApp;
	double _updateTime;
	NSUUID* _recordId;

}

@property (nonatomic,readonly) CKVItem * item;                        //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) NSData * itemBuffer;                   //@synthesize itemBuffer=_itemBuffer - In the implementation block
@property (nonatomic,readonly) CKVOriginApp * originApp;              //@synthesize originApp=_originApp - In the implementation block
@property (nonatomic,readonly) double updateTime;                     //@synthesize updateTime=_updateTime - In the implementation block
@property (nonatomic,readonly) NSUUID * recordId;                     //@synthesize recordId=_recordId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tableName;
+(id)databaseDeleteWithOriginApp:(id)arg1 itemType:(long long)arg2 ;
+(id)recordFromDatabaseValueRow:(id)arg1 ;
+(id)genSQLCreateTable;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(CKVItem *)item;
-(NSUUID *)recordId;
-(double)updateTime;
-(CKVOriginApp *)originApp;
-(id)databaseInsert;
-(id)initWithItemBuffer:(id)arg1 originApp:(id)arg2 ;
-(NSData *)itemBuffer;
-(id)initWithDatabaseValueRow:(id)arg1 ;
-(BOOL)isEqualToItemRecord:(id)arg1 ;
@end

