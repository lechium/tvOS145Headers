/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGPotentialMemory.h>

@protocol PGGraphMeaningfulEvent;
@interface PGPotentialMeaningfulEventMemory : PGPotentialMemory {

	id<PGGraphMeaningfulEvent> _meaningfulEvent;
	unsigned long long _meaning;

}

@property (readonly) id<PGGraphMeaningfulEvent> meaningfulEvent;              //@synthesize meaningfulEvent=_meaningfulEvent - In the implementation block
@property (readonly) unsigned long long meaning;                              //@synthesize meaning=_meaning - In the implementation block
-(id<PGGraphMeaningfulEvent>)meaningfulEvent;
-(unsigned long long)meaning;
-(id)initWithCategory:(unsigned long long)arg1 meaningfulEvent:(id)arg2 meaning:(unsigned long long)arg3 controller:(id)arg4 ;
@end

