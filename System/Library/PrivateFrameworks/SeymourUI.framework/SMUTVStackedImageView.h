/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SeymourUI/SeymourUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, _UIStackedImageContainerLayer, _UIStackedImageConfiguration, _SMUTVStackedImageNamedLayerStack, UIMotionEffectGroup, NSLayoutConstraint, UILayoutGuide, NSShadow, UIView;

@interface SMUTVStackedImageView : UIView {

	UIImage* _staticImage;
	_UIStackedImageContainerLayer* _imageStackLayer;
	_UIStackedImageConfiguration* _imageStackConfig;
	_SMUTVStackedImageNamedLayerStack* _uiLayerStack;
	UIMotionEffectGroup* _motionEffectGroup;
	NSLayoutConstraint* _widthConstraint;
	NSLayoutConstraint* _heightConstraint;
	double _layerSelectionDuration;
	double _layerUnselectionDuration;
	double _shadowSelectionDuration;
	double _shadowUnselectionDuration;
	double _repositionUnselectionDuration;
	BOOL _overlayComposited;
	UILayoutGuide* _focusLayoutGuide;
	long long _state;
	NSShadow* _shadow;
	UIView* _overlayView;
	UIView* _unmaskedOverlayView;

}

@property (nonatomic,readonly) UILayoutGuide * focusLayoutGuide;                             //@synthesize focusLayoutGuide=_focusLayoutGuide - In the implementation block
@property (nonatomic,readonly) long long state;                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * placeholderImage; 
@property (assign,nonatomic) BOOL flatImageContainsCornerRadius; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double focusSizeIncrease; 
@property (nonatomic,copy) NSShadow * shadow;                                                //@synthesize shadow=_shadow - In the implementation block
@property (assign,nonatomic) BOOL allowsNonOpaqueShadow; 
@property (nonatomic,readonly) unsigned long long primaryControlState; 
@property (assign,getter=isOverlayComposited,nonatomic) BOOL overlayComposited;              //@synthesize overlayComposited=_overlayComposited - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                           //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIView * unmaskedOverlayView;                                   //@synthesize unmaskedOverlayView=_unmaskedOverlayView - In the implementation block
@property (assign,nonatomic) CGPoint focusDirection; 
@property (assign,getter=isPressed,nonatomic) BOOL pressed; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (nonatomic,readonly) unsigned long long controlState; 
-(void)dealloc;
-(long long)state;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelected;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(double)cornerRadius;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(NSShadow *)shadow;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 ;
-(void)setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setControlState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setAllowsNonOpaqueShadow:(BOOL)arg1 ;
-(unsigned long long)controlState;
-(BOOL)isPressed;
-(void)setShadow:(NSShadow *)arg1 ;
-(void)setFocusSizeIncrease:(double)arg1 ;
-(double)focusSizeIncrease;
-(void)setFlatImageContainsCornerRadius:(BOOL)arg1 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(CGPoint)focusDirection;
-(void)setFocusDirection:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(BOOL)flatImageContainsCornerRadius;
-(void)_updateStackedImageConfiguration;
-(void)_loadImage;
-(BOOL)allowsNonOpaqueShadow;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setUnmaskedOverlayView:(UIView *)arg1 ;
-(unsigned long long)primaryControlState;
-(UIView *)unmaskedOverlayView;
-(void)_attachMotionEffects;
-(void)_detachMotionEffects;
-(void)_updateLayerStack:(id)arg1 withImage:(CGImageRef)arg2 size:(CGSize)arg3 ;
-(void)_commitLayerStack:(id)arg1 ;
-(void)setOverlayComposited:(BOOL)arg1 ;
-(BOOL)isOverlayComposited;
-(CGSize)_scaledSize;
-(void)_updateMotionEffectsForState:(unsigned long long)arg1 ;
-(void)_updateFocusLayoutGuideForControlState:(unsigned long long)arg1 ;
-(UILayoutGuide *)focusLayoutGuide;
@end
