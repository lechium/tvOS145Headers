/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIContentViewComponentDescribing.h>
#import <UIKit/UIContentView.h>

@class UIListContentConfiguration, _UIListContentImageView, UILabel, UILayoutGuide, NSLayoutRect, NSString;

@interface UIListContentView : UIView <_UIContentViewComponentDescribing, UIContentView> {

	UIListContentConfiguration* _animatingFromConfiguration;
	UIListContentConfiguration* _animatingToConfiguration;
	double _preferredMaxLayoutWidth;
	UIListContentConfiguration* _configuration;
	_UIListContentImageView* _imageView;
	UILabel* _textLabel;
	UILabel* _secondaryTextLabel;
	/*^block*/id _primaryTextFrameDidChangeHandler;
	UILayoutGuide* _textLayoutGuide;
	UILayoutGuide* _secondaryTextLayoutGuide;
	UILayoutGuide* _imageLayoutGuide;

}

@property (getter=_imageView,nonatomic,readonly) _UIListContentImageView * imageView;                                      //@synthesize imageView=_imageView - In the implementation block
@property (getter=_textLabel,nonatomic,readonly) UILabel * textLabel;                                                      //@synthesize textLabel=_textLabel - In the implementation block
@property (getter=_secondaryTextLabel,nonatomic,readonly) UILabel * secondaryTextLabel;                                    //@synthesize secondaryTextLabel=_secondaryTextLabel - In the implementation block
@property (nonatomic,copy) UIListContentConfiguration * configuration;                                                     //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * textLayoutGuide;                                                            //@synthesize textLayoutGuide=_textLayoutGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * secondaryTextLayoutGuide;                                                   //@synthesize secondaryTextLayoutGuide=_secondaryTextLayoutGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * imageLayoutGuide;                                                           //@synthesize imageLayoutGuide=_imageLayoutGuide - In the implementation block
@property (nonatomic,readonly) NSLayoutRect * _primaryTextLayoutRect; 
@property (nonatomic,readonly) CGRect _primaryTextLayoutFrame; 
@property (setter=_setPrimaryTextFrameDidChangeHandler:,nonatomic,copy) id _primaryTextFrameDidChangeHandler;              //@synthesize primaryTextFrameDidChangeHandler=_primaryTextFrameDidChangeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIListContentConfiguration *)configuration;
-(void)setConfiguration:(UIListContentConfiguration *)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)_imageView;
-(id)_textLabel;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)_applyConfiguration:(id)arg1 ;
-(void)_configurationAnimationUpdatedWithPosition:(long long)arg1 ;
-(void)_configurationAnimationCompleted;
-(void)_layoutMarginsDidChangeFromOldMargins:(UIEdgeInsets)arg1 ;
-(id)_encodableSubviews;
-(void)_setMultilineContextWidth:(double)arg1 ;
-(double)_multilineContextWidth;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(double)_preferredMaxLayoutWidth;
-(CGRect)_primaryTextLayoutFrame;
-(void)_processPrimaryTextLayoutFrameChangeWithOldFrame:(CGRect)arg1 ;
-(NSLayoutRect *)_primaryTextLayoutRect;
-(id)_primaryTextFrameDidChangeHandler;
-(void)_setPrimaryTextFrameDidChangeHandler:(/*^block*/id)arg1 ;
-(CGSize)_intrinsicSizeForLabel:(id)arg1 inAvailableSpace:(CGSize)arg2 outRequiresMultipleLines:(out BOOL*)arg3 ;
-(id)_secondaryTextLabel;
-(UIListContentViewLayoutInfo)_computeLayoutInfoForAvailableSpace:(CGSize)arg1 ;
-(UILayoutGuide *)textLayoutGuide;
-(UILayoutGuide *)secondaryTextLayoutGuide;
-(UILayoutGuide *)imageLayoutGuide;
@end

