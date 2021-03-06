/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _UIBackgroundConfigurationInternal;
@class UIView, UIVisualEffectView, _UISystemBackgroundStrokeView, _UIGroupTableViewCellBackground_TV;

@interface _UISystemBackgroundView : UIView {

	UIView* _backgroundView;
	UIVisualEffectView* _visualEffectView;
	_UISystemBackgroundStrokeView* _strokeView;
	UIView* _shadowView;
	_UIGroupTableViewCellBackground_TV* _shadowBackgroundView;
	double _currentlyAppliedCornerRadius;
	struct {
		unsigned currentlyAppliedCornersAreContinuous : 1;
		unsigned didSetCustomViewMasking : 1;
	}  _systemBackgroundViewFlags;
	id<_UIBackgroundConfigurationInternal> _configuration;

}

@property (nonatomic,copy) id<_UIBackgroundConfigurationInternal> configuration;              //@synthesize configuration=_configuration - In the implementation block
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<_UIBackgroundConfigurationInternal>)configuration;
-(void)setConfiguration:(id<_UIBackgroundConfigurationInternal>)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)tintColorDidChange;
-(void)_updateBackgroundColor;
-(id)_encodableSubviews;
-(void)_transitionFromCustomView:(id)arg1 toCustomView:(id)arg2 ;
-(void)_transitionFromVisualEffect:(id)arg1 toVisualEffect:(id)arg2 ;
-(void)_transitionFromHadBackgroundView:(BOOL)arg1 toHasBackgroundView:(BOOL)arg2 ;
-(void)_transitionFromHadStroke:(BOOL)arg1 toHasStroke:(BOOL)arg2 ;
-(void)_transitionFromOldShadowType:(long long)arg1 toNewShadowType:(long long)arg2 ;
-(void)_updateCornerMaskingForCustomView:(BOOL)arg1 backgroundView:(BOOL)arg2 shadowView:(BOOL)arg3 visualEffectView:(BOOL)arg4 strokeView:(BOOL)arg5 ;
-(void)_layoutCustomView;
-(void)_layoutVisualEffectView;
-(void)_layoutBackgroundView;
-(void)_transitionFromHadCellReorderingShadow:(BOOL)arg1 toHasCellReorderingShadow:(BOOL)arg2 ;
-(void)_transitionFromHadTVCellShadow:(BOOL)arg1 toHasTVCellShadow:(BOOL)arg2 ;
-(id)_currentPathForBackground;
-(void)_layoutShadowView;
-(void)_updateReorderingShadowViewProperties;
-(void)_layoutShadowBackgroundView;
-(void)_layoutStrokeView;
-(void)_updateStrokeColor;
-(CGRect)frameInContainerView:(id)arg1 ;
-(id)_pathForRect:(CGRect)arg1 cornerRadius:(double)arg2 maskedCorners:(unsigned long long)arg3 continuousCorners:(BOOL)arg4 ;
-(UIEdgeInsets)effectiveInsetsInContainerView:(id)arg1 ;
-(id)_visiblePathInContainerView:(id)arg1 nullableBehavior:(BOOL)arg2 ;
-(id)currentBackgroundColor;
-(id)currentVisiblePathInContainerView:(id)arg1 ;
-(id)outlinePathInContainerView:(id)arg1 ;
@end

