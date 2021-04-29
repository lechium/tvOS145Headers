/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Stocks/Stocks-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface SCKZoneDiff : NSObject <NSCopying> {

	NSArray* _modifiedRecords;
	NSArray* _deletedRecordIDs;

}

@property (nonatomic,copy,readonly) NSArray * modifiedRecords;               //@synthesize modifiedRecords=_modifiedRecords - In the implementation block
@property (nonatomic,copy,readonly) NSArray * deletedRecordIDs;              //@synthesize deletedRecordIDs=_deletedRecordIDs - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(NSArray *)modifiedRecords;
-(NSArray *)deletedRecordIDs;
-(id)initWithModifiedRecords:(id)arg1 deletedRecordIDs:(id)arg2 ;
-(id)applyToRecords:(id)arg1 ;
-(void)applyToModifyRecordsOperation:(id)arg1 ;
-(BOOL)hasSameBaseAsDiff:(id)arg1 ;
@end
