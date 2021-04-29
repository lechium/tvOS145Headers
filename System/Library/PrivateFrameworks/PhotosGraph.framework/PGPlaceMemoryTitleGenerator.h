/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGTitleGenerator.h>

@class PGGraphNode;

@interface PGPlaceMemoryTitleGenerator : PGTitleGenerator {

	PGGraphNode* _placeNode;

}

@property (nonatomic,retain) PGGraphNode * placeNode;              //@synthesize placeNode=_placeNode - In the implementation block
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)initWithMomentNodes:(id)arg1 placeNode:(id)arg2 ;
-(id)_placeTitle;
-(PGGraphNode *)placeNode;
-(void)setPlaceNode:(PGGraphNode *)arg1 ;
@end

