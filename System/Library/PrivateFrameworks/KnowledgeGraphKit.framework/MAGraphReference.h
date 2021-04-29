/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MABaseGraph;

@interface MAGraphReference : NSObject {

	unsigned long long _hash;
	MABaseGraph* _graph;
	MABaseGraph* _concreteGraph;

}

@property (__weak,readonly) MABaseGraph * graph;              //@synthesize graph=_graph - In the implementation block
@property (__weak) MABaseGraph * concreteGraph;               //@synthesize concreteGraph=_concreteGraph - In the implementation block
-(unsigned long long)hash;
-(MABaseGraph *)graph;
-(id)initWithGraph:(id)arg1 ;
-(MABaseGraph *)concreteGraph;
-(void)setConcreteGraph:(MABaseGraph *)arg1 ;
@end

