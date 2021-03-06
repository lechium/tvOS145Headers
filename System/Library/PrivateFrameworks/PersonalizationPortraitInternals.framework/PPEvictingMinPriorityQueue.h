/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@interface PPEvictingMinPriorityQueue : NSObject {

	unsigned long long _capacity;
	priority_queue<PPScoredItem *, std::__1::vector<PPScoredItem *, std::__1::allocator<PPScoredItem *>>, PPScoredItemCompareGreater>=vector<PPScoredItem *, std::__1::allocator<PPScoredItem *>>=@@compressed_pair<PPScoredItem *__strong *, std::__1::allocator<PPScoredItem *>>=@}}PPScoredItemCompareGreater}Ref _queue;

}

@property (nonatomic,readonly) double count; 
-(id)init;
-(void)dealloc;
-(double)count;
-(void)addObject:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)popItem;
-(id)extractSortedMutableArray;
@end

