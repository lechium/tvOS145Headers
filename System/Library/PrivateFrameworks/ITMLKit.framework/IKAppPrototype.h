/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableIndexSet, IKAppPrototypeIdentifier, IKDOMPrototype, NSDictionary, NSIndexSet;

@interface IKAppPrototype : NSObject {

	NSMutableIndexSet* _usageIndexes;
	IKAppPrototypeIdentifier* _identifier;
	IKDOMPrototype* _prototype;
	NSDictionary* _groupingValues;

}

@property (nonatomic,readonly) IKAppPrototypeIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,__weak,readonly) IKDOMPrototype * prototype;                  //@synthesize prototype=_prototype - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * groupingValues;                 //@synthesize groupingValues=_groupingValues - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * usageIndexes; 
-(IKAppPrototypeIdentifier *)identifier;
-(IKDOMPrototype *)prototype;
-(id)dsepm_viewElement;
-(void)dsepm_setViewElement:(id)arg1 ;
-(NSDictionary *)groupingValues;
-(NSIndexSet *)usageIndexes;
-(void)updateUsageIndexesWithChangeSet:(id)arg1 ;
-(id)initWithPrototype:(id)arg1 dataItem:(id)arg2 ;
-(void)addUsageForIndex:(long long)arg1 ;
-(void)removeUsageForIndex:(long long)arg1 ;
-(id)_sparseObjectFromObject:(id)arg1 usingPropertyPaths:(id)arg2 ;
@end

