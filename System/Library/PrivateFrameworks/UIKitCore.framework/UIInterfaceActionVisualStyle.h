/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIInterfaceActionConcreteVisualStyleImplInternal.h>
#import <UIKit/UIInterfaceActionConcreteVisualStyleImpl.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UIInterfaceActionConcreteVisualStyleImpl;
@class UIInterfaceActionGroupViewState, UIInterfaceActionConcreteVisualStyle, UIInterfaceActionOverrideVisualStyle, NSString;

@interface UIInterfaceActionVisualStyle : NSObject <UIInterfaceActionConcreteVisualStyleImplInternal, UIInterfaceActionConcreteVisualStyleImpl, NSCopying> {

	UIInterfaceActionGroupViewState* _groupViewState;
	UIInterfaceActionConcreteVisualStyle*<UIInterfaceActionConcreteVisualStyleImpl> _concreteVisualStyle;
	/*^block*/id _fontForViewStateBlock;
	UIInterfaceActionOverrideVisualStyle* _visualStyleOverride;

}

@property (nonatomic,retain) UIInterfaceActionConcreteVisualStyle*<UIInterfaceActionConcreteVisualStyleImpl> concreteVisualStyle;              //@synthesize concreteVisualStyle=_concreteVisualStyle - In the implementation block
@property (nonatomic,copy) id fontForViewStateBlock;                                                                                           //@synthesize fontForViewStateBlock=_fontForViewStateBlock - In the implementation block
@property (nonatomic,retain) UIInterfaceActionOverrideVisualStyle * visualStyleOverride;                                                       //@synthesize visualStyleOverride=_visualStyleOverride - In the implementation block
@property (nonatomic,readonly) UIInterfaceActionGroupViewState * groupViewState;                                                               //@synthesize groupViewState=_groupViewState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)idiomSpecificStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(UIEdgeInsets)contentMargin;
-(id)actionTitleLabelColorForViewState:(id)arg1 ;
-(id)defaultScreen;
-(double)contentCornerRadius;
-(double)horizontalImageContentSpacing;
-(double)verticalImageContentSpacing;
-(id)actionTitleLabelFontForViewState:(id)arg1 ;
-(id)newActionBackgroundViewForViewState:(id)arg1 ;
-(id)newGroupBackgroundViewWithGroupViewState:(id)arg1 ;
-(double)actionSectionSpacing;
-(UIEdgeInsets)actionSequenceEdgeInsets;
-(CGSize)minimumActionContentSize;
-(CGSize)maximumActionGroupContentSize;
-(BOOL)selectByPressGestureRequired;
-(id)actionViewStateForAttachingToActionRepresentationView:(id)arg1 ;
-(id)newActionSeparatorViewForGroupViewState:(id)arg1 ;
-(id)newSectionSeparatorViewForGroupViewState:(id)arg1 ;
-(id)actionClassificationLabelFontForViewState:(id)arg1 ;
-(id)actionClassificationLabelColorForViewState:(id)arg1 ;
-(id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2 ;
-(void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3 ;
-(id)actionPropertiesAffectingLabelStyling;
-(void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3 ;
-(id)actionPropertiesAffectingImageViewStyling;
-(void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2 ;
-(id)actionPropertiesAffectingActionRepresentationViewStyling;
-(void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2 ;
-(id)actionGroupPropertiesAffectingActionsScrollViewStyling;
-(void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2 ;
-(void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2 ;
-(id)initWithConcreteVisualStyle:(id)arg1 ;
-(double)actionTitleLabelMinimumScaleFactor;
-(UIInterfaceActionGroupViewState *)groupViewState;
-(UIInterfaceActionConcreteVisualStyle*<UIInterfaceActionConcreteVisualStyleImpl>)concreteVisualStyle;
-(void)setConcreteVisualStyle:(UIInterfaceActionConcreteVisualStyle*<UIInterfaceActionConcreteVisualStyleImpl>)arg1 ;
-(id)_styleForVisualProperties;
-(id)fontForViewStateBlock;
-(id)_base_actionPropertiesAffectingLabelStyling;
-(void)_base_configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3 ;
-(id)_base_actionPropertiesAffectingImageViewStyling;
-(void)_base_configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3 ;
-(id)copyWithGroupViewState:(id)arg1 ;
-(void)setVisualStyleOverride:(UIInterfaceActionOverrideVisualStyle *)arg1 ;
-(void)setFontForViewStateBlock:(id)arg1 ;
-(UIInterfaceActionOverrideVisualStyle *)visualStyleOverride;
-(id)defaultConcreteActionTitleLabelRegularFont;
-(id)defaultConcreteActionTitleLabelPreferredFont;
@end

