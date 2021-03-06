/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HomeKitBackingStore/HMBLocalZoneQueryResultRecordColumns.h>

@class NSUUID;

@interface HMBLocalZoneQueryResultParentModelID : HMBLocalZoneQueryResultRecordColumns {

	int _parentModelIDOffset;
	NSUUID* _parentModelID;

}

@property (nonatomic,readonly) int parentModelIDOffset;              //@synthesize parentModelIDOffset=_parentModelIDOffset - In the implementation block
@property (nonatomic,readonly) NSUUID * parentModelID;               //@synthesize parentModelID=_parentModelID - In the implementation block
-(NSUUID *)parentModelID;
-(BOOL)bindPropertiesToStatement:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
-(int)parentModelIDOffset;
-(id)initWithLocalZone:(id)arg1 parentModelID:(id)arg2 ;
@end

