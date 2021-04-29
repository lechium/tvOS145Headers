/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSMutableDictionary;

@interface TVStyleSheetRegistry : NSObject {

	NSMutableArray* _rootNodes;
	NSMutableDictionary* _nodesByTemplateName;

}

@property (nonatomic,retain) NSMutableArray * rootNodes;                             //@synthesize rootNodes=_rootNodes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * nodesByTemplateName;              //@synthesize nodesByTemplateName=_nodesByTemplateName - In the implementation block
+(id)_urlForStyleSheetName:(id)arg1 ;
-(id)init;
-(void)_createDefaultRootNodes;
-(void)commitStyleSheets;
-(void)_commitTemplateTreeNode:(id)arg1 withParentStyleSheetURLs:(id)arg2 ;
-(NSMutableArray *)rootNodes;
-(void)registerStyleSheetURLs:(id)arg1 forTemplateName:(id)arg2 basedOnTemplateName:(id)arg3 ;
-(void)setRootNodes:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)nodesByTemplateName;
-(void)setNodesByTemplateName:(NSMutableDictionary *)arg1 ;
@end

