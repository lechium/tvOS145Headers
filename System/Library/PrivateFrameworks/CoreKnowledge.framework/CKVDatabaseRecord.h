/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKVDatabaseRecord <NSObject>
@required
+(id)tableName;
+(id)databaseDeleteWithOriginApp:(id)arg1 itemType:(long long)arg2;
+(id)recordFromDatabaseValueRow:(id)arg1;
+(id)genSQLCreateTable;
-(id)recordId;
-(id)databaseInsert;

@end

