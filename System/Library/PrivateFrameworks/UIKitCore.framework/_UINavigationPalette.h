/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIView, UINavigationController;


@protocol _UINavigationPalette <NSObject>
@property (setter=_setBackgroundView:,nonatomic,retain) UIView * _backgroundView; 
@property (assign,setter=_setPaletteOverridesPinningBar:,nonatomic) BOOL _paletteOverridesPinningBar; 
@property (nonatomic,readonly) UINavigationController * navController; 
@property (nonatomic,readonly) unsigned long long boundaryEdge; 
@property (assign,getter=isPinned,nonatomic) BOOL pinned; 
@property (assign,nonatomic) BOOL pinningBarShadowWasHidden; 
@property (assign,nonatomic) BOOL pinningBarShadowIsHidden; 
@property (assign,nonatomic) BOOL paletteShadowIsHidden; 
@property (assign,getter=isVisibleWhenPinningBarIsHidden,nonatomic) BOOL visibleWhenPinningBarIsHidden; 
@property (assign,nonatomic) UIEdgeInsets preferredContentInsets; 
@required
-(BOOL)isPinned;
-(void)setPinned:(BOOL)arg1;
-(UIView *)_backgroundView;
-(void)setPinningBarShadowIsHidden:(BOOL)arg1;
-(void)_setBackgroundView:(id)arg1;
-(void)setFrame:(CGRect)arg1 isAnimating:(BOOL)arg2;
-(UINavigationController *)navController;
-(BOOL)_paletteOverridesPinningBar;
-(BOOL)paletteShadowIsHidden;
-(void)_setTopConstraintConstant:(double)arg1;
-(void)_setLeftConstraintConstant:(double)arg1;
-(BOOL)isAttached;
-(BOOL)paletteIsHidden;
-(void)_setPaletteOverridesPinningBar:(BOOL)arg1;
-(unsigned long long)boundaryEdge;
-(BOOL)pinningBarShadowWasHidden;
-(void)setPinningBarShadowWasHidden:(BOOL)arg1;
-(BOOL)pinningBarShadowIsHidden;
-(void)setPaletteShadowIsHidden:(BOOL)arg1;
-(BOOL)isVisibleWhenPinningBarIsHidden;
-(void)setVisibleWhenPinningBarIsHidden:(BOOL)arg1;
-(UIEdgeInsets)preferredContentInsets;
-(void)setPreferredContentInsets:(UIEdgeInsets)arg1;

@end

