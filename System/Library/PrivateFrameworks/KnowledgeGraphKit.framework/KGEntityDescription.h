/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface KGEntityDescription : NSObject {

	NSMutableDictionary* _classByNodeLabels;
	NSMutableDictionary* _classByEdgeLabels;
	Class _defaultNodeClass;
	Class _defaultEdgeClass;

}

@property (nonatomic,retain) Class defaultNodeClass;              //@synthesize defaultNodeClass=_defaultNodeClass - In the implementation block
@property (nonatomic,retain) Class defaultEdgeClass;              //@synthesize defaultEdgeClass=_defaultEdgeClass - In the implementation block
-(id)init;
-(void)registerNodeClass:(Class)arg1 forLabels:(id)arg2 ;
-(void)registerEdgeClass:(Class)arg1 forLabels:(id)arg2 ;
-(id)_generateAllPossibleLabelSetsForLabels:(id)arg1 labelSetsCache:(id)arg2 ;
-(Class)_selectClassFromPossibleLabels:(id)arg1 dictionary:(id)arg2 ;
-(Class)classForEdgeLabels:(id)arg1 ;
-(Class)classForNodeLabels:(id)arg1 ;
-(Class)defaultNodeClass;
-(void)setDefaultNodeClass:(Class)arg1 ;
-(Class)defaultEdgeClass;
-(void)setDefaultEdgeClass:(Class)arg1 ;
@end

