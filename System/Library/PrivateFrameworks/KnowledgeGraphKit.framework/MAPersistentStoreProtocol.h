/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUUID, NSURL;


@protocol MAPersistentStoreProtocol <NSObject>
@property (nonatomic,readonly) BOOL hasMarker; 
@property (nonatomic,readonly) NSUUID * graphIdentifier; 
@property (assign,nonatomic) unsigned long long graphVersion; 
@property (nonatomic,readonly) NSURL * fileURL; 
@property (nonatomic,readonly) BOOL doesCascadeEdgeDelete; 
@required
+(id)persistentStoreFileExtension;
+(BOOL)hasMarker:(id)arg1;
+(BOOL)setMarkerAtURL:(id)arg1;
+(void)deleteMarkerAtURL:(id)arg1;
+(void)deleteClosedDatabaseFilesAtBaseURL:(id)arg1;
+(BOOL)copyFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+(BOOL)migrateFromURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
+(BOOL)destroyAtURL:(id)arg1 error:(id*)arg2;
-(NSURL *)fileURL;
-(void)save:(/*^block*/id)arg1;
-(unsigned long long)graphVersion;
-(void)setGraphVersion:(unsigned long long)arg1;
-(BOOL)copyToURL:(id)arg1 error:(id*)arg2;
-(void)invalidateMemoryCaches;
-(void)closePersistentStore;
-(id)initWithFileURL:(id)arg1 options:(long long)arg2;
-(void)invalidatePersistentStores;
-(void)setMarker;
-(void)deleteMarker;
-(void)enterBatch;
-(void)leaveBatch;
-(void)enumerateModelNodesWithBlock:(/*^block*/id)arg1;
-(void)enumerateModelEdgesWithBlock:(/*^block*/id)arg1;
-(void)enumerateModelNodesForIdentifiers:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)enumerateModelEdgesForIdentifiers:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)enumerateModelNodesForDomains:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)enumerateModelEdgesForDomains:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)enumerateModelNodesForLabels:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)enumerateModelEdgesForLabels:(id)arg1 withBlock:(/*^block*/id)arg2;
-(void)enumerateModelNodesPropertiesWithBlock:(/*^block*/id)arg1;
-(void)enumerateModelEdgesPropertiesWithBlock:(/*^block*/id)arg1;
-(void)addNode:(id)arg1 requiresTesting:(BOOL)arg2;
-(void)addEdge:(id)arg1 requiresTesting:(BOOL)arg2;
-(void)removeModelNodeForIdentifier:(unsigned long long)arg1;
-(void)removeModelEdgeForIdentifier:(unsigned long long)arg1;
-(void)removeModelNodesForIdentifiers:(id)arg1;
-(void)removeModelEdgesForIdentifiers:(id)arg1;
-(void)setModelNodeProperties:(id)arg1 forIdentifier:(long long)arg2 clobberExisting:(BOOL)arg3;
-(void)setModelEdgeProperties:(id)arg1 forIdentifier:(long long)arg2 clobberExisting:(BOOL)arg3;
-(void)setModelNodePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3;
-(void)setModelEdgePropertyValue:(id)arg1 forKey:(id)arg2 andIdentifier:(long long)arg3;
-(void)setNodeWeight:(float)arg1 forIdentifier:(long long)arg2;
-(void)setEdgeWeight:(float)arg1 forIdentifier:(long long)arg2;
-(void)removeModelNodePropertiesForIdentifier:(long long)arg1;
-(void)removeModelEdgePropertiesForIdentifier:(long long)arg1;
-(void)removeModelNodesPropertiesForIdentifiers:(id)arg1;
-(void)removeModelEdgesPropertiesForIdentifiers:(id)arg1;
-(void)removeModelNodePropertyForKey:(id)arg1 andIdentifier:(long long)arg2;
-(void)removeModelEdgePropertyForKey:(id)arg1 andIdentifier:(long long)arg2;
-(BOOL)migrateToURL:(id)arg1 error:(id*)arg2;
-(BOOL)hasMarker;
-(NSUUID *)graphIdentifier;
-(BOOL)doesCascadeEdgeDelete;

@end

