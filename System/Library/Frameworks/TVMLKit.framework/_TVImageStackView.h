/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <TVMLKit/TVAuxiliaryViewSelecting.h>

@class _UIStackedImageContainerLayer, _UIStackedImageConfiguration, _TVImageStack, _TVUINamedLayerStack, UIView, NSArray, NSString;

@interface _TVImageStackView : UIView <TVAuxiliaryViewSelecting> {

	_UIStackedImageContainerLayer* _imageStackLayer;
	_UIStackedImageConfiguration* _imageStackConfig;
	_TVImageStack* _imageStack;
	CGSize _imageStackSize;
	_TVUINamedLayerStack* _uiLayerStack;
	double _layerSelectionDuration;
	double _layerUnselectionDuration;
	double _shadowSelectionDuration;
	double _shadowUnselectionDuration;
	double _repositionUnselectionDuration;
	BOOL _layerStackRetainsImageStack;
	BOOL _imageLoaded;
	UIView* _overlayView;
	UIView* _unmaskedOverlayView;

}

@property (assign,getter=isImageLoaded,nonatomic) BOOL imageLoaded;                                                                                      //@synthesize imageLoaded=_imageLoaded - In the implementation block
@property (assign,setter=_setLayerStackRetainsImageStack:,getter=_layerStackRetainsImageStack,nonatomic) BOOL _layerStackRetainsImageStack;              //@synthesize layerStackRetainsImageStack=_layerStackRetainsImageStack - In the implementation block
@property (nonatomic,retain) _TVImageStack * imageStack; 
@property (nonatomic,retain) id placeholderImage; 
@property (assign,nonatomic) double maxParallaxImageDepth; 
@property (nonatomic,copy) NSArray * parallaxImageDepths; 
@property (assign,nonatomic) double perspectiveZDepth; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double rotationAmount; 
@property (assign,nonatomic) double specularHighlightHorizontalPositionSensitivity; 
@property (assign,nonatomic) double specularHighlightVerticalPosition; 
@property (assign,nonatomic) double specularHighlightVerticalPositionSensitivity; 
@property (assign,nonatomic) double radiosityAmount; 
@property (assign,getter=isBrightnessBoostEnabled,nonatomic) BOOL brightnessBoostEnabled; 
@property (assign,getter=isHueShiftEnabled,nonatomic) BOOL hueShiftEnabled; 
@property (assign,nonatomic) double layerSelectionDuration; 
@property (assign,nonatomic) double layerUnselectionDuration; 
@property (assign,nonatomic) BOOL allowsNonOpaqueShadow; 
@property (assign,nonatomic) unsigned long long controlState; 
@property (nonatomic,readonly) unsigned long long primaryControlState; 
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,getter=isPressed,nonatomic) BOOL pressed; 
@property (assign,nonatomic) CGPoint focusDirection; 
@property (assign,nonatomic) double focusSizeIncrease; 
@property (nonatomic,retain) UIView * overlayView;                                                                                                       //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIView * unmaskedOverlayView;                                                                                               //@synthesize unmaskedOverlayView=_unmaskedOverlayView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)_scaledSizeForSize:(CGSize)arg1 focusSizeIncrease:(double)arg2 selectionStyle:(long long)arg3 ;
+(id)imageStackViewWithImageStack:(id)arg1 size:(CGSize)arg2 ;
+(id)imageStackViewWithSize:(CGSize)arg1 ;
+(CGSize)_scaledSizeForSize:(CGSize)arg1 selectionStyle:(long long)arg2 ;
-(void)dealloc;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelected;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(id)placeholderImage;
-(void)setPlaceholderImage:(id)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isImageLoaded;
-(void)willMoveToWindow:(id)arg1 ;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)setPressed:(BOOL)arg1 ;
-(void)setControlState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setControlState:(unsigned long long)arg1 ;
-(long long)_selectionStyle;
-(id)_imageConfiguration;
-(void)setAllowsNonOpaqueShadow:(BOOL)arg1 ;
-(void)setRotationAmount:(double)arg1 ;
-(unsigned long long)controlState;
-(void)setSpecularHighlightVerticalPosition:(double)arg1 ;
-(void)setSpecularHighlightHorizontalPositionSensitivity:(double)arg1 ;
-(BOOL)isPressed;
-(void)setFocusSizeIncrease:(double)arg1 ;
-(double)focusSizeIncrease;
-(id)_newImageConfiguration;
-(double)rotationAmount;
-(void)_setSelectionStyle:(long long)arg1 ;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(void)animateWithAuxiliarySelectionState:(BOOL)arg1 animations:(/*^block*/id)arg2 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)_layeredImageContainerLayer;
-(CGPoint)focusDirection;
-(void)setFocusDirection:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(_TVImageStack *)imageStack;
-(void)setImageStack:(_TVImageStack *)arg1 ;
-(id)initWithImageStack:(id)arg1 size:(CGSize)arg2 ;
-(void)_updateStackedImageConfiguration;
-(void)_loadImage;
-(void)setImageLoaded:(BOOL)arg1 ;
-(BOOL)_layerStackRetainsImageStack;
-(double)specularHighlightHorizontalPositionSensitivity;
-(double)specularHighlightVerticalPosition;
-(double)specularHighlightVerticalPositionSensitivity;
-(void)setSpecularHighlightVerticalPositionSensitivity:(double)arg1 ;
-(double)layerSelectionDuration;
-(void)setLayerSelectionDuration:(double)arg1 ;
-(double)layerUnselectionDuration;
-(void)setLayerUnselectionDuration:(double)arg1 ;
-(BOOL)allowsNonOpaqueShadow;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setControlState:(unsigned long long)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(double)_idleModeFocusSizeOffset;
-(id)_imageStackContentsGravity;
-(id)_layerBelowTitles;
-(id)_flatLayer;
-(id)_shadowLayer;
-(void)_setFocusDirection:(CGPoint)arg1 duration:(double)arg2 ;
-(void)_setIdleModeFocusSizeOffset:(double)arg1 ;
-(void)_setImageStackContentsGravity:(id)arg1 ;
-(void)setImageStack:(id)arg1 withSize:(CGSize)arg2 ;
-(double)maxParallaxImageDepth;
-(void)setMaxParallaxImageDepth:(double)arg1 ;
-(NSArray *)parallaxImageDepths;
-(void)setParallaxImageDepths:(NSArray *)arg1 ;
-(double)perspectiveZDepth;
-(void)setPerspectiveZDepth:(double)arg1 ;
-(double)radiosityAmount;
-(void)setRadiosityAmount:(double)arg1 ;
-(BOOL)isBrightnessBoostEnabled;
-(void)setBrightnessBoostEnabled:(BOOL)arg1 ;
-(BOOL)isHueShiftEnabled;
-(void)setHueShiftEnabled:(BOOL)arg1 ;
-(void)setPressed:(BOOL)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)setUnmaskedOverlayView:(UIView *)arg1 ;
-(unsigned long long)primaryControlState;
-(void)_setShadowOpacity:(double)arg1 ;
-(void)_setShadowRadius:(double)arg1 ;
-(void)_setShadowVerticalOffset:(double)arg1 ;
-(void)_resetShadowSettings;
-(double)_pressedDuration;
-(double)_pressedScaleAdjustment;
-(void)_setPressedDuration:(double)arg1 ;
-(void)_setPressedScaleAdjustment:(double)arg1 ;
-(void)_setUnpressedDuration:(double)arg1 ;
-(double)_unpressedDuration;
-(void)_setLayerStackRetainsImageStack:(BOOL)arg1 ;
-(UIView *)unmaskedOverlayView;
@end

