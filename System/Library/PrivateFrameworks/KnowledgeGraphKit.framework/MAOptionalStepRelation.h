/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KnowledgeGraphKit/MARelation.h>

@class MARelation;

@interface MAOptionalStepRelation : MARelation {

	MARelation* _base;

}

@property (nonatomic,readonly) MARelation * base;              //@synthesize base=_base - In the implementation block
+(id)scanRelationWithScanner:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)inverse;
-(MARelation *)base;
-(id)visualString;
-(void)unionAdjacencyListFromSource:(id)arg1 toTargets:(id)arg2 ;
-(void)unionAdjacencyListFromSources:(id)arg1 toTargets:(id)arg2 ;
-(BOOL)unionAdjacencySetFromSourceNodeIdentifiers:(id)arg1 toTargetNodeIdentifiers:(id)arg2 graphStore:(id)arg3 error:(id*)arg4 ;
-(BOOL)unionAdjacencySetFromSourceNodeIdentifier:(unsigned long long)arg1 toTargetNodeIdentifiers:(id)arg2 graphStore:(id)arg3 error:(id*)arg4 ;
-(id)transitiveClosure;
-(id)initWithBase:(id)arg1 ;
@end

