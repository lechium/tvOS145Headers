/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFAccountAccessResource;

@interface WFWunderlistListPickerParameter : WFEnumerationParameter {

	BOOL _hasLoadedLists;
	NSArray* _possibleStates;
	WFAccountAccessResource* _accessResource;

}

@property (assign,nonatomic) BOOL hasLoadedLists;                                          //@synthesize hasLoadedLists=_hasLoadedLists - In the implementation block
@property (assign,nonatomic,__weak) WFAccountAccessResource * accessResource;              //@synthesize accessResource=_accessResource - In the implementation block
-(void)dealloc;
-(id)lists;
-(void)setLists:(id)arg1 ;
-(id)defaultSerializedRepresentation;
-(id)possibleStates;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(void)fetchListsIfNeeded;
-(void)loadListsFromCache;
-(id)listNamed:(id)arg1 ;
-(void)setAccessResource:(WFAccountAccessResource *)arg1 ;
-(WFAccountAccessResource *)accessResource;
-(BOOL)hasLoadedLists;
-(void)setHasLoadedLists:(BOOL)arg1 ;
@end

