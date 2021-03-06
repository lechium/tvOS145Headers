/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface _PSKNNeighbor : NSObject {

	double _distance;
	NSArray* _nodeData;

}

@property (assign,nonatomic) double distance;                 //@synthesize distance=_distance - In the implementation block
@property (nonatomic,retain) NSArray * nodeData;              //@synthesize nodeData=_nodeData - In the implementation block
-(void)setDistance:(double)arg1 ;
-(double)distance;
-(id)initWithNodeData:(id)arg1 distance:(double)arg2 ;
-(NSArray *)nodeData;
-(void)setNodeData:(NSArray *)arg1 ;
@end

