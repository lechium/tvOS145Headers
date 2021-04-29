/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGTitleGenerator.h>

@class NSSet;

@interface PGMeaningfulEventAggregationMemoryTitleGenerator : PGTitleGenerator {

	unsigned long long _meaning;
	NSSet* _features;
	NSSet* _meaningfulEvents;

}

@property (nonatomic,readonly) unsigned long long meaning;              //@synthesize meaning=_meaning - In the implementation block
@property (nonatomic,readonly) NSSet * features;                        //@synthesize features=_features - In the implementation block
@property (nonatomic,readonly) NSSet * meaningfulEvents;                //@synthesize meaningfulEvents=_meaningfulEvents - In the implementation block
+(id)_momentNodesFromMeaningfulEvents:(id)arg1 ;
-(id)_subtitle;
-(NSSet *)features;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(unsigned long long)meaning;
-(id)_meaningLabelForTitle;
-(id)initWithMeaning:(unsigned long long)arg1 features:(id)arg2 meaningfulEvents:(id)arg3 ;
-(id)_meaningLabelForNotReliableTitle;
-(NSSet *)meaningfulEvents;
@end

