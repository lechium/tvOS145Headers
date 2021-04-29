/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveSupport/_PASSqliteRowIdCursor.h>

@class NSIndexSet, NSMutableIndexSet;

@interface _PASSqliteRowIdIndexSetCursor : _PASSqliteRowIdCursor {

	unsigned long long _currentIndex;
	NSIndexSet* _indexSet;
	NSMutableIndexSet* _mutableIndexSet;
	BOOL _isDescending;

}

@property (nonatomic,readonly) NSMutableIndexSet * mutableIndexSet; 
+(id)planningInfoForRowIdConstraint:(int)arg1 ;
+(BOOL)canOrderByRowId:(BOOL)arg1 ;
+(double)costFactorForRandomAccess;
-(id)init;
-(void)stepIndexedRow;
-(void)applyRowIdConstraint:(int)arg1 withArgument:(id)arg2 ;
-(void)applyRowIdSort:(BOOL)arg1 ;
-(void)finalizeConstraints;
-(unsigned long long)currentIndexedRowId;
-(NSMutableIndexSet *)mutableIndexSet;
-(void)setIndexSet:(id)arg1 ;
-(void)matchNoRows;
-(void)matchOneRow:(unsigned long long)arg1 ;
@end

