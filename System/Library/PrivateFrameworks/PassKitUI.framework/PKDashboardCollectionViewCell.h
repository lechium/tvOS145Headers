/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView;

@interface PKDashboardCollectionViewCell : UICollectionViewCell {

	UIView* _separatorView;
	BOOL _showsBottomSeparator;
	BOOL _bottomSeparatorVisible;
	unsigned long long _maskType;
	CGRect _previousMaskBounds;
	unsigned long long _previousMaskType;
	BOOL _customHorizontalInset;
	double _horizontalInset;
	BOOL _wantsCustomAppearance;
	BOOL _wantsDefaultHighlightBehavior;

}

@property (assign,nonatomic) BOOL wantsCustomAppearance;                      //@synthesize wantsCustomAppearance=_wantsCustomAppearance - In the implementation block
@property (assign,nonatomic) BOOL wantsDefaultHighlightBehavior;              //@synthesize wantsDefaultHighlightBehavior=_wantsDefaultHighlightBehavior - In the implementation block
@property (assign,nonatomic) unsigned long long maskType; 
@property (assign,nonatomic) BOOL showsBottomSeparator;                       //@synthesize showsBottomSeparator=_showsBottomSeparator - In the implementation block
@property (assign,nonatomic) double horizontalInset; 
+(id)defaultBackgroundColor;
+(double)defaultHorizontalInset;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)layoutSubviews;
-(double)horizontalInset;
-(void)setHorizontalInset:(double)arg1 ;
-(void)setWantsDefaultHighlightBehavior:(BOOL)arg1 ;
-(void)setWantsCustomAppearance:(BOOL)arg1 ;
-(void)setMaskType:(unsigned long long)arg1 ;
-(void)setShowsBottomSeparator:(BOOL)arg1 ;
-(void)updateMask;
-(double)_bottomSeparatorAlpha;
-(unsigned long long)maskType;
-(void)setBottomSeparatorVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)wantsCustomAppearance;
-(BOOL)wantsDefaultHighlightBehavior;
-(BOOL)showsBottomSeparator;
@end

