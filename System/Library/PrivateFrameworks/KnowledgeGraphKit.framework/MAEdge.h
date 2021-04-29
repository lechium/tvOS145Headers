/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeGraphKit/KnowledgeGraphKit-Structs.h>
#import <libobjc.A.dylib/KGEdge.h>
#import <libobjc.A.dylib/MAElement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MANode, MAGraphReference, NSArray, NSDictionary, NSString, MABaseGraph;

@interface MAEdge : NSObject <KGEdge, MAElement, NSCopying> {

	MANode* _strongSourceNode;
	MANode* _strongTargetNode;
	MANode* _weakSourceNode;
	MANode* _weakTargetNode;
	unsigned _identifier;
	MAGraphReference* _graphReference;

}

@property (nonatomic,readonly) id<KGNode> targetNode; 
@property (nonatomic,readonly) id<KGNode> sourceNode; 
@property (nonatomic,readonly) unsigned long long identifier; 
@property (nonatomic,readonly) float weight; 
@property (nonatomic,copy,readonly) NSArray * labels; 
@property (nonatomic,copy,readonly) NSDictionary * properties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MAGraphReference * graphReference;              //@synthesize graphReference=_graphReference - In the implementation block
@property (assign,nonatomic) unsigned identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) float weight; 
@property (nonatomic,__weak,readonly) MANode * sourceNode; 
@property (nonatomic,__weak,readonly) MANode * targetNode; 
@property (nonatomic,__weak,readonly) MABaseGraph * graph; 
@property (nonatomic,copy,readonly) NSString * label; 
@property (nonatomic,readonly) unsigned short domain; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(unsigned long long)identifier;
-(NSDictionary *)properties;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(void)removePropertyForKey:(id)arg1 ;
-(id)shortDescription;
-(void)setProperties:(NSDictionary *)arg1 ;
-(BOOL)isUnique;
-(unsigned long long)propertiesCount;
-(MABaseGraph *)graph;
-(NSArray *)labels;
-(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
-(void)removeAllProperties;
-(void)setPropertyValue:(id)arg1 forKey:(id)arg2 ;
-(id<KGNode>)targetNode;
-(id)propertyKeys;
-(BOOL)hasProperties;
-(id<KGNode>)sourceNode;
-(id)propertyForKey:(id)arg1 kindOfClass:(Class)arg2 ;
-(BOOL)hasProperties:(id)arg1 ;
-(BOOL)isIdentifiedByProperties:(id)arg1 ;
-(id)visualString;
-(id)propertyDictionary;
-(id)oppositeNode:(id)arg1 ;
-(id)visualStringWithName:(id)arg1 andPropertyKeys:(id)arg2 ;
-(void)setLocalProperties:(id)arg1 ;
-(unsigned long long)memoryFootprint:(id)arg1 ;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(void)setGraphReference:(MAGraphReference *)arg1 ;
-(void)updatePersistedWeight:(float)arg1 ;
-(id)visualStringWithName:(id)arg1 ;
-(MAGraphReference *)graphReference;
-(id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 sourceNode:(id)arg5 targetNode:(id)arg6 ;
-(id)oppositeNodeFromNode:(id)arg1 ;
-(BOOL)isSameEdgeAsEdge:(id)arg1 ;
-(BOOL)hasEqualPropertiesToEdge:(id)arg1 ;
-(BOOL)isEqualToEdge:(id)arg1 ;
-(id)commonNode:(id)arg1 ;
-(BOOL)isLoop;
-(BOOL)conformsToEdgeSchema:(id)arg1 ;
@end

