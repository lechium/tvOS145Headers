/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIMotionEffectGroup, UIView;

@interface TVLGridCollectionViewCell : UICollectionViewCell {

	UIMotionEffectGroup* _motionEffectGroup;
	BOOL _pressIsAnimating;
	BOOL _unpressOnEndAnimating;
	BOOL _acceptsFocus;
	UIView* _hostedView;
	UIEdgeInsets _cellInset;

}

@property (assign,nonatomic) BOOL acceptsFocus;                   //@synthesize acceptsFocus=_acceptsFocus - In the implementation block
@property (nonatomic,retain) UIView * hostedView;                 //@synthesize hostedView=_hostedView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets cellInset;              //@synthesize cellInset=_cellInset - In the implementation block
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)setAcceptsFocus:(BOOL)arg1 ;
-(BOOL)acceptsFocus;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)_showPressState;
-(void)_clearPressState;
-(void)_attachMotionEffects;
-(void)_detachMotionEffects;
-(UIView *)hostedView;
-(void)setHostedView:(UIView *)arg1 ;
-(void)setCellInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)cellInset;
-(BOOL)_unapplyMotionEffect:(id)arg1 ;
@end

