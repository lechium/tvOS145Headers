/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HomeKitBackingStore/HMBSQLStatement.h>

@class NSDictionary;

@interface HMBSQLQueryStatement : HMBSQLStatement {

	NSDictionary* _arguments;

}

@property (nonatomic,readonly) NSDictionary * arguments;              //@synthesize arguments=_arguments - In the implementation block
-(NSDictionary *)arguments;
-(id)initWithContext:(id)arg1 statement:(id)arg2 ;
-(id)initWithContext:(id)arg1 statement:(sqlite3_stmtRef)arg2 queryPlans:(id)arg3 arguments:(id)arg4 ;
@end

