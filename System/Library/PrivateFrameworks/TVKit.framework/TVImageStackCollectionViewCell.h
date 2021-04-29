/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIMotionEffectGroup, _UIStackedImageContainerView, TVImageStackView, NSString, UIView, UILabel, UIColor, UIFont, _UIStackedImageConfiguration;

@interface TVImageStackCollectionViewCell : UICollectionViewCell {

	BOOL _layoutIsDrawingFocused;
	UIMotionEffectGroup* _motionEffectGroup;
	BOOL _pressIsAnimating;
	BOOL _preventUnpress;
	double _titleHeight;
	double _titleWidthForAccessory;
	BOOL _unpressIsAnimating;
	BOOL _unpressOnEndAnimating;
	BOOL _alwaysDisplaysTitle;
	BOOL _showsPersistentFocus;
	BOOL _centeredImageStackWithoutResize;
	BOOL _holdsPress;
	_UIStackedImageContainerView* _layeredImageView;
	TVImageStackView* _imageStackView;
	NSString* _title;
	double _titleSpacing;
	long long _selectionStyle;
	UIView* _titleAccessoryView;
	UILabel* _titleLabel;
	UIColor* _textColor;
	UIFont* _titleFont;
	UIColor* _highlightedTextColor;
	UIColor* _unhighlightedTextColor;
	CGPoint _focusDirection;

}

@property (assign,nonatomic) BOOL showsPersistentFocus;                                                                                                             //@synthesize showsPersistentFocus=_showsPersistentFocus - In the implementation block
@property (assign,setter=_setCenteredImageStackWithoutResize:,getter=_centeredImageStackWithoutResize,nonatomic) BOOL centeredImageStackWithoutResize;              //@synthesize centeredImageStackWithoutResize=_centeredImageStackWithoutResize - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                                                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (getter=_textColor,nonatomic,readonly) UIColor * textColor;                                                                                               //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                                                                                                    //@synthesize titleFont=_titleFont - In the implementation block
@property (nonatomic,retain) UIColor * highlightedTextColor;                                                                                                        //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (nonatomic,retain) UIColor * unhighlightedTextColor;                                                                                                      //@synthesize unhighlightedTextColor=_unhighlightedTextColor - In the implementation block
@property (getter=_isPressed,nonatomic,readonly) BOOL pressed; 
@property (getter=_isPressStateAnimating,nonatomic,readonly) BOOL pressStateAnimating; 
@property (getter=_imageConfiguration,nonatomic,readonly) _UIStackedImageConfiguration * imageConfiguration; 
@property (assign,setter=_setFocusDirection:,getter=_focusDirection,nonatomic) CGPoint focusDirection;                                                              //@synthesize focusDirection=_focusDirection - In the implementation block
@property (getter=_imageViewCenter,nonatomic,readonly) CGPoint imageViewCenter; 
@property (assign,setter=_setHoldsPress:,getter=_holdsPress,nonatomic) BOOL holdsPress;                                                                             //@synthesize holdsPress=_holdsPress - In the implementation block
@property (nonatomic,retain) _UIStackedImageContainerView * layeredImageView;                                                                                       //@synthesize layeredImageView=_layeredImageView - In the implementation block
@property (nonatomic,retain) TVImageStackView * imageStackView;                                                                                                     //@synthesize imageStackView=_imageStackView - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                                                                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) double titleSpacing;                                                                                                                   //@synthesize titleSpacing=_titleSpacing - In the implementation block
@property (assign,nonatomic) long long selectionStyle;                                                                                                              //@synthesize selectionStyle=_selectionStyle - In the implementation block
@property (nonatomic,retain) UIView * titleAccessoryView;                                                                                                           //@synthesize titleAccessoryView=_titleAccessoryView - In the implementation block
@property (assign,nonatomic) BOOL alwaysDisplaysTitle;                                                                                                              //@synthesize alwaysDisplaysTitle=_alwaysDisplaysTitle - In the implementation block
@property (nonatomic,readonly) BOOL allowsMotionEffects; 
+(CGSize)_scaledSizeForSize:(CGSize)arg1 sizeIncreaseOffset:(double)arg2 ;
+(id)_titleHeightCache;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)prepareForReuse;
-(id)_textColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(long long)selectionStyle;
-(void)setSelectionStyle:(long long)arg1 ;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UIColor *)highlightedTextColor;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
-(id)_imageConfiguration;
-(id)layeredImageContainerLayer;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)_showPressState;
-(CGPoint)_focusDirection;
-(void)_attachMotionEffects;
-(void)_detachMotionEffects;
-(void)_setCenteredImageStackWithoutResize:(BOOL)arg1 ;
-(void)setImageStackView:(TVImageStackView *)arg1 ;
-(TVImageStackView *)imageStackView;
-(BOOL)_unapplyMotionEffect:(id)arg1 ;
-(_UIStackedImageContainerView *)layeredImageView;
-(void)setLayeredImageView:(_UIStackedImageContainerView *)arg1 ;
-(void)_setFocusDirection:(CGPoint)arg1 ;
-(void)setShowsPersistentFocus:(BOOL)arg1 ;
-(void)setTitleSpacing:(double)arg1 ;
-(BOOL)alwaysDisplaysTitle;
-(double)_maxTitleWidthWithFocus:(BOOL)arg1 ;
-(Class)_labelClass;
-(void)_updateTitleTextColorForFocus:(BOOL)arg1 ;
-(void)_updateTitleShadowForFocus:(BOOL)arg1 ;
-(void)_layoutSubviewsAnimated:(BOOL)arg1 focused:(BOOL)arg2 focusUpdateContext:(id)arg3 focusAnimationCoordinator:(id)arg4 ;
-(void)clearPressState;
-(void)setAlwaysDisplaysTitle:(BOOL)arg1 ;
-(void)setTitleAccessoryView:(UIView *)arg1 ;
-(void)clearPressStateWithDuration:(double)arg1 ;
-(BOOL)_holdsPress;
-(BOOL)_isPressed;
-(BOOL)_centeredImageStackWithoutResize;
-(void)_updateTitleLayers;
-(void)_updateTitleHeightCache;
-(void)_updateTitleWidthForAccessory;
-(void)_updateTitleLayerAlphas;
-(void)_ensureTitle;
-(BOOL)allowsMotionEffects;
-(void)_updateTitleWidthAndHeight;
-(id)_textColorForFocus:(BOOL)arg1 ;
-(BOOL)_isPressStateAnimating;
-(void)setUnhighlightedTextColor:(UIColor *)arg1 ;
-(double)_scaleForImageViewState;
-(void)_setHoldsPress:(BOOL)arg1 ;
-(id)_highlightFilterChain:(BOOL)arg1 ;
-(CGPoint)_imageViewCenter;
-(double)titleSpacing;
-(UIView *)titleAccessoryView;
-(BOOL)showsPersistentFocus;
-(UIColor *)unhighlightedTextColor;
@end

