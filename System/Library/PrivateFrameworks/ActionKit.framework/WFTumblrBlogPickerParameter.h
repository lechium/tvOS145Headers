/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFTumblrAccessResource;

@interface WFTumblrBlogPickerParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	WFTumblrAccessResource* _tumblrAccessResource;

}

@property (nonatomic,readonly) NSArray * possibleStates;                                 //@synthesize possibleStates=_possibleStates - In the implementation block
@property (nonatomic,retain) WFTumblrAccessResource * tumblrAccessResource;              //@synthesize tumblrAccessResource=_tumblrAccessResource - In the implementation block
+(void)initialize;
+(id)referencedActionResourceClasses;
-(BOOL)isHidden;
-(id)defaultSerializedRepresentation;
-(Class)singleStateClass;
-(void)possibleStatesDidChange;
-(NSArray *)possibleStates;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(void)setActionResources:(id)arg1 ;
-(void)setTumblrAccessResource:(WFTumblrAccessResource *)arg1 ;
-(void)updateBlogs;
-(WFTumblrAccessResource *)tumblrAccessResource;
@end
