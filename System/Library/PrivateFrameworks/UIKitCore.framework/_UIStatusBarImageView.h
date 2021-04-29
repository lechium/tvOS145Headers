/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class UIImage, UIAccessibilityHUDItem, NSString;

@interface _UIStatusBarImageView : UIImageView <_UIStatusBarDisplayable> {

	BOOL _useDisabledAppearanceForAccessibilityHUD;
	long long _fontStyle;
	UIImage* _accessibilityHUDImage;
	double _iconScale;

}

@property (assign,nonatomic) double iconScale;                                                       //@synthesize iconScale=_iconScale - In the implementation block
@property (assign,nonatomic) long long fontStyle;                                                    //@synthesize fontStyle=_fontStyle - In the implementation block
@property (assign,nonatomic) BOOL useDisabledAppearanceForAccessibilityHUD;                          //@synthesize useDisabledAppearanceForAccessibilityHUD=_useDisabledAppearanceForAccessibilityHUD - In the implementation block
@property (nonatomic,retain) UIImage * accessibilityHUDImage;                                        //@synthesize accessibilityHUDImage=_accessibilityHUDImage - In the implementation block
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)fontStyle;
-(void)setFontStyle:(long long)arg1 ;
-(double)iconScale;
-(CGSize)intrinsicContentSize;
-(void)applyStyleAttributes:(id)arg1 ;
-(BOOL)prefersBaselineAlignment;
-(UIAccessibilityHUDItem *)accessibilityHUDRepresentation;
-(void)setAccessibilityHUDImage:(UIImage *)arg1 ;
-(void)setUseDisabledAppearanceForAccessibilityHUD:(BOOL)arg1 ;
-(void)setIconScale:(double)arg1 ;
-(UIImage *)accessibilityHUDImage;
-(BOOL)useDisabledAppearanceForAccessibilityHUD;
@end

