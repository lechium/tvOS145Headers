/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, PHFetchResult, PGGraph;

@interface PGSharingSuggestionInput : NSObject {

	NSArray* _assetLocalIdentifiers;
	NSArray* _momentLocalIdentifiers;
	NSArray* _momentNodes;
	PHFetchResult* _assets;
	PHFetchResult* _moments;
	PGGraph* _graph;

}

@property (nonatomic,readonly) PGGraph * graph;                      //@synthesize graph=_graph - In the implementation block
@property (nonatomic,readonly) NSArray * momentNodes; 
@property (nonatomic,readonly) PHFetchResult * assets; 
@property (nonatomic,readonly) PHFetchResult * moments; 
-(id)description;
-(PGGraph *)graph;
-(PHFetchResult *)assets;
-(PHFetchResult *)moments;
-(NSArray *)momentNodes;
-(id)initWithAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 andGraph:(id)arg3 ;
-(id)initWithMomentNodes:(id)arg1 ;
@end

