/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BWGraph, NSMutableArray, NSString, NSArray;

@interface FigCapturePipeline : NSObject {

	BWGraph* _graph;
	NSMutableArray* _nodes;
	NSString* _name;

}

@property (nonatomic,readonly) NSArray * nodes;              //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BWGraph * graph;              //@synthesize graph=_graph - In the implementation block
-(NSString *)name;
-(void)dealloc;
-(BWGraph *)graph;
-(NSArray *)nodes;
-(id)initWithGraph:(id)arg1 name:(id)arg2 ;
-(BOOL)addNode:(id)arg1 error:(id*)arg2 ;
@end
