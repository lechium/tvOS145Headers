/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMUDirectedGraph.h>

@class VMUClassInfoMap;

@interface VMUObjectGraph : VMUDirectedGraph {

	VMUObjectGraphEdge* _referenceTable;
	unsigned _referenceTableCapacity;
	VMUObjectGraphEdgeLarge* _referenceTableLarge;
	unsigned _referenceTableLargeCount;
	unsigned _referenceTableLargeCapacity;
	VMUBlockNode* _internalizedNodes;
	unsigned _internalizedCount;
	id* _classInfos;
	VMUClassInfoMap* _knownClassInfos;
	unsigned _classInfosCount;
	/*^block*/id _nodeProvider;
	VMUObjectGraph* _referenceGraph;
	unsigned _referenceGraphNodeNamespaceSize;
	unsigned _referenceGraphEdgeNamespaceSize;
	int _referencingCount;

}

@property (nonatomic,retain) VMUClassInfoMap * indexedClassInfos;              //@synthesize knownClassInfos=_knownClassInfos - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(unsigned)enumerateObjectsWithBlock:(/*^block*/id)arg1 ;
-(unsigned)nodeForAddress:(unsigned long long)arg1 ;
-(unsigned)addEdgeFromNode:(unsigned)arg1 sourceOffset:(unsigned long long)arg2 withScanType:(unsigned)arg3 toNode:(unsigned)arg4 destinationOffset:(unsigned long long)arg5 ;
-(SCD_Struct_VM2)nodeDetails:(unsigned)arg1 ;
-(unsigned)enumerateMarkedObjects:(void*)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned)enumerateReferencesWithBlock:(/*^block*/id)arg1 ;
-(void)stronglyConnectedComponentSearch:(unsigned)arg1 withRecorder:(/*^block*/id)arg2 ;
-(BOOL)isRootNode:(unsigned)arg1 ;
-(BOOL)isGroupNode:(unsigned)arg1 ;
-(unsigned)enumerateReferencesOfNode:(unsigned)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithNodesNoCopy:(VMUBlockNode*)arg1 nodeCount:(unsigned)arg2 ;
-(void)setIndexedClassInfos:(VMUClassInfoMap *)arg1 ;
-(id)initWithArchived:(id)arg1 version:(long long)arg2 options:(unsigned long long)arg3 diskLogs:(id)arg4 error:(id*)arg5 ;
-(void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)internalizeNodes;
-(VMUClassInfoMap *)indexedClassInfos;
-(void)_renameWithNodeMap:(unsigned*)arg1 nodeNamespace:(unsigned)arg2 edgeMap:(unsigned*)arg3 edgeNamespace:(unsigned)arg4 ;
-(void)_refineTypesWithOverlay:(id)arg1 ;
-(SCD_Struct_VM3)_rawReferenceInfoWithName:(unsigned)arg1 ;
-(unsigned)scanTypeOfReferenceWithName:(unsigned)arg1 ;
-(SCD_Struct_VM3)referenceInfoWithName:(unsigned)arg1 ;
-(unsigned)addEdgeFromNode:(unsigned)arg1 toNode:(unsigned)arg2 ;
-(void)_modifyDerivativeGraphCount:(int)arg1 ;
-(void*)_compareWithGraph:(id)arg1 andMarkOnMatch:(BOOL)arg2 ;
-(id)initWithNodeCount:(unsigned)arg1 nodeProvider:(/*^block*/id)arg2 ;
-(unsigned)enumerateObjectsOfGroupNode:(unsigned)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned)nodeReferencedFromSourceNode:(unsigned)arg1 byIvarWithName:(id)arg2 ;
-(unsigned)enumerateObjectsContainedInCollection:(unsigned)arg1 withBlock:(/*^block*/id)arg2 ;
-(void*)createMapForMinusGraph:(id)arg1 ;
-(void*)createMapForIntersectGraph:(id)arg1 ;
-(id)subgraphWithShortestPathsFromNode:(unsigned)arg1 toNodes:(void*)arg2 ;
-(id)subgraphWithUniquePathsFromNode:(unsigned)arg1 toNodes:(void*)arg2 ;
@end

