/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CKVSQLCommandGenerator : NSObject
+(id)_produceCriterionClause:(id)arg1 tableName:(id)arg2 ;
+(id)_generateOrderByClause:(id)arg1 ;
+(id)_generateCommaSeparatedPlaceholdersString:(unsigned long long)arg1 ;
+(id)_generateCommaSeparatedValuesString:(id)arg1 ;
+(id)selectFromTableWithName:(id)arg1 criterion:(id)arg2 order:(id)arg3 ;
+(id)deleteFromTableWithName:(id)arg1 criterion:(id)arg2 ;
+(id)insertCommandStringWithTableName:(id)arg1 columnNames:(id)arg2 ;
-(id)init;
@end

