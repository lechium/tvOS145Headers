/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITabBarVisualProvider.h>

@class _UIBarBackground, _UIBarBackgroundLayoutLegacy, UIView, UIScrollView, UIMotionEffect;

@interface _UITabBarVisualProviderLegacyTVOS : _UITabBarVisualProvider {

	_UIBarBackground* _backgroundView;
	_UIBarBackgroundLayoutLegacy* _backgroundViewLayout;
	UIView* _customBackgroundView;
	UIView* _accessoryView;
	UIScrollView* _itemsScrollView;
	UIView* _focusedItemHighlightView;
	UIMotionEffect* _focusedItemHighlightMotionEffect;

}
-(void)teardown;
-(void)prepare;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusedView;
-(void)_updateAccessoryView;
-(id)createViewForTabBarItem:(id)arg1 ;
-(id)_shim_compatibilityBackgroundView;
-(void)_shim_setCustomBackgroundView:(id)arg1 ;
-(double)_shim_shadowAlpha;
-(void)_shim_setShadowAlpha:(double)arg1 ;
-(void)changeAppearance;
-(void)updateArchivedSubviews:(id)arg1 ;
-(void)changeLayout;
-(void)updateBackgroundGroupName;
-(void)_updateBackground;
-(id)_shim_accessoryView;
-(void)_shim_setAccessoryView:(id)arg1 ;
-(void)changeSelectedItem:(id)arg1 fromItem:(id)arg2 ;
-(void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(BOOL)arg5 ;
-(CGSize)intrinsicContentSizeGivenSize:(CGSize)arg1 ;
-(void)_shim_updateFocusHighlightVisibility;
-(id)exchangeItem:(id)arg1 withItem:(id)arg2 ;
-(void)_shim_layoutItemsOnly;
-(void)_shim_updateTabBarItemView:(id)arg1 ;
-(BOOL)_shim_shadowHidden;
-(void)_shim_setShadowHidden:(BOOL)arg1 ;
-(void)_layoutTabBarItems;
-(void)_applyAppearanceCustomizationsToItem:(id)arg1 ;
-(CGRect)_layoutRegion;
-(void)_configureItems:(id)arg1 ;
-(CGRect)_shadowFrameForBounds:(CGRect)arg1 height:(double)arg2 ;
-(id)_focusedItemHighlightView;
-(id)_parentViewForItems;
-(BOOL)_focusedItemHighlightViewIsVisible;
-(void)_updateFocusedItemHighlightViewWithInterfaceStyle:(long long)arg1 visible:(BOOL)arg2 ;
-(void)_updateFocusedItemHighlightFrame;
-(void)_updateHighlightMotionEffect;
-(void)_setFocusedItemHightlightVisible:(BOOL)arg1 ;
@end

