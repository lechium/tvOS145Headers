/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MABaseGraph, NSMutableDictionary;

@interface MASubGraph : NSObject {

	MABaseGraph* _graph;
	NSMutableDictionary* _nodesByIdentifier;
	NSMutableDictionary* _nodesByLabel;
	NSMutableDictionary* _nodesByName;
	NSMutableDictionary* _edgesByIdentifier;
	NSMutableDictionary* _edgesByLabel;
	NSMutableDictionary* _edgesByName;
	NSMutableDictionary* _nodesByNameGroupByNodes;

}

@property (nonatomic,readonly) MABaseGraph * graph;              //@synthesize graph=_graph - In the implementation block
+(id)subGraphWithGraph:(id)arg1 ;
+(id)subGraphIntersectionsWithSubGraphs:(id)arg1 ;
-(id)description;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(MABaseGraph *)graph;
-(id)allNodes;
-(id)allEdges;
-(void)enumerateEdgesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateNodesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateNodesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateEdgesWithLabel:(id)arg1 domain:(unsigned short)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)nodesForLabel:(id)arg1 ;
-(id)nodesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(id)allNamedNodes;
-(id)nodesForName:(id)arg1 ;
-(unsigned long long)edgesCount;
-(id)nodeForIdentifier:(unsigned)arg1 ;
-(unsigned long long)nodesCountForLabel:(id)arg1 ;
-(unsigned long long)nodesCount;
-(id)nodesLabels;
-(id)edgeForIdentifier:(unsigned)arg1 ;
-(id)edgesForLabel:(id)arg1 ;
-(id)edgesForLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3 ;
-(unsigned long long)edgesCountForLabel:(id)arg1 ;
-(id)edgesLabels;
-(id)graphRepresentation;
-(void)mergeWithSubGraph:(id)arg1 ;
-(void)addNodes:(id)arg1 withName:(id)arg2 ;
-(void)_addNode:(id)arg1 withName:(id)arg2 ;
-(void)_addNode:(id)arg1 withName:(id)arg2 forKeyNode:(id)arg3 ;
-(id)nodesForNames:(id)arg1 ;
-(id)nodesForName:(id)arg1 fromNode:(id)arg2 ;
-(unsigned long long)nodesCountForName:(id)arg1 ;
-(unsigned long long)nodesCountForName:(id)arg1 fromNode:(id)arg2 ;
-(id)nodesNames;
-(void)enumerateNodesByNameUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateNodesWithName:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateNodesWithName:(id)arg1 fromNode:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)addEdges:(id)arg1 withName:(id)arg2 ;
-(void)_addEdge:(id)arg1 withName:(id)arg2 ;
-(id)edgesForName:(id)arg1 ;
-(unsigned long long)edgesCountForName:(id)arg1 ;
-(id)edgesNames;
-(id)allNamedEdges;
-(void)enumerateEdgesByNameUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateEdgesWithName:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

