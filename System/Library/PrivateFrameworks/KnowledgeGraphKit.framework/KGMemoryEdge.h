/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, KGMemoryNode, NSDictionary;

@interface KGMemoryEdge : NSObject {

	float _weight;
	unsigned long long _identifier;
	NSArray* _labels;
	KGMemoryNode* _targetNode;
	KGMemoryNode* _sourceNode;
	NSDictionary* _properties;

}

@property (nonatomic,readonly) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) float weight;                                 //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) NSArray * labels;                           //@synthesize labels=_labels - In the implementation block
@property (nonatomic,readonly) KGMemoryNode * targetNode;                  //@synthesize targetNode=_targetNode - In the implementation block
@property (nonatomic,readonly) KGMemoryNode * sourceNode;                  //@synthesize sourceNode=_sourceNode - In the implementation block
@property (nonatomic,retain) NSDictionary * properties;                    //@synthesize properties=_properties - In the implementation block
-(unsigned long long)identifier;
-(NSDictionary *)properties;
-(float)weight;
-(void)setWeight:(float)arg1 ;
-(void)setProperties:(NSDictionary *)arg1 ;
-(NSArray *)labels;
-(KGMemoryNode *)targetNode;
-(KGMemoryNode *)sourceNode;
-(id)initWithIdentifier:(unsigned long long)arg1 labels:(id)arg2 weight:(float)arg3 properties:(id)arg4 sourceNode:(id)arg5 targetNode:(id)arg6 ;
-(id)oppositeNodeFromNode:(id)arg1 ;
@end
