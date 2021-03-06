/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableOrderedSet, NSArray;

@interface WBSMutableOrderedSet : NSObject {

	NSMutableOrderedSet* _mutableOrderedSet;
	unsigned long long _maximumCount;

}

@property (nonatomic,readonly) NSArray * array; 
-(id)init;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(NSArray *)array;
-(id)initWithMaximumCount:(unsigned long long)arg1 ;
-(void)_moveObjectAtIndexToLast:(unsigned long long)arg1 ;
-(id)objectAtIndexWithoutAffectingRecency:(unsigned long long)arg1 ;
-(void)markObjectAsRecentlyUsed:(id)arg1 ;
@end

