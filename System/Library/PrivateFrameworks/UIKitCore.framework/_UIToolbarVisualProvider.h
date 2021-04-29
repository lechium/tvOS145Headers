/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UIToolbar, NSString, UIView;

@interface _UIToolbarVisualProvider : NSObject {

	UIToolbar* _toolbar;
	NSString* _backdropGroupName;
	UIView* _customBackgroundView;
	UIView* _currentBackgroundView;

}

@property (nonatomic,readonly) UIToolbar * toolbar;                                                //@synthesize toolbar=_toolbar - In the implementation block
@property (nonatomic,retain) UIView * customBackgroundView;                                        //@synthesize customBackgroundView=_customBackgroundView - In the implementation block
@property (nonatomic,readonly) UIView * currentBackgroundView;                                     //@synthesize currentBackgroundView=_currentBackgroundView - In the implementation block
@property (nonatomic,readonly) CGRect backgroundFrame; 
@property (nonatomic,readonly) BOOL toolbarIsSmall; 
@property (assign,nonatomic) long long itemDistribution; 
@property (nonatomic,copy) NSString * backdropGroupName;                                           //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (assign,nonatomic) BOOL useModernAppearance; 
@property (nonatomic,readonly) id<_UIBarAppearanceChangeObserver> appearanceObserver; 
-(void)prepare;
-(void)layoutSubviews;
-(UIToolbar *)toolbar;
-(void)updateAppearance;
-(CGSize)defaultSizeForOrientation:(long long)arg1 ;
-(void)setCustomBackgroundView:(UIView *)arg1 ;
-(UIView *)customBackgroundView;
-(void)setItemDistribution:(long long)arg1 ;
-(long long)itemDistribution;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(id<_UIBarAppearanceChangeObserver>)appearanceObserver;
-(id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2 ;
-(void)updateArchivedSubviews:(id)arg1 ;
-(void)updateBackgroundGroupName;
-(void)setUseModernAppearance:(BOOL)arg1 ;
-(BOOL)useModernAppearance;
-(CGRect)backgroundFrame;
-(id)initWithToolbar:(id)arg1 ;
-(UIView *)currentBackgroundView;
-(void)updateBarForStyle:(long long)arg1 ;
-(void)updateItemsForNewFrame:(id)arg1 ;
-(void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(BOOL)arg3 ;
-(void)customViewChangedForButtonItem:(id)arg1 ;
-(void)positionToolbarButtonsAndResetFontScaleAdjustment:(BOOL)arg1 ;
-(BOOL)toolbarIsSmall;
-(void)updateBarBackgroundSize;
-(void)updateBarBackground;
-(void)drawBackgroundViewInRect:(CGRect)arg1 ;
@end

