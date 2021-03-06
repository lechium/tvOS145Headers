/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, CKVSQLCommandCriterion;

@interface CKVDatabaseCommandBuilder : NSObject {

	NSString* _tableName;
	CKVSQLCommandCriterion* _criterion;

}

@property (nonatomic,readonly) NSString * tableName;                            //@synthesize tableName=_tableName - In the implementation block
@property (nonatomic,readonly) CKVSQLCommandCriterion * criterion;              //@synthesize criterion=_criterion - In the implementation block
-(id)init;
-(NSString *)tableName;
-(CKVSQLCommandCriterion *)criterion;
-(id)initWithTableName:(id)arg1 ;
-(void)setCommandCriterion:(id)arg1 ;
@end

