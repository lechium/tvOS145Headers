/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString, VUITextLayout, VUIAnimatedLabel, _UIFloatingContentView, UIVisualEffectView;

@interface VUIMenuCollectionViewCell : UICollectionViewCell {

	BOOL _shouldAppearSelected;
	NSString* _title;
	VUITextLayout* _titleLayout;
	VUIAnimatedLabel* _titleLabel;
	_UIFloatingContentView* _floatingView;
	UIVisualEffectView* _backgroundVisualEffectView;

}

@property (nonatomic,retain) VUITextLayout * titleLayout;                                  //@synthesize titleLayout=_titleLayout - In the implementation block
@property (nonatomic,retain) VUIAnimatedLabel * titleLabel;                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) _UIFloatingContentView * floatingView;                        //@synthesize floatingView=_floatingView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundVisualEffectView;              //@synthesize backgroundVisualEffectView=_backgroundVisualEffectView - In the implementation block
@property (nonatomic,retain) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL shouldAppearSelected;                                    //@synthesize shouldAppearSelected=_shouldAppearSelected - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(VUIAnimatedLabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabel:(VUIAnimatedLabel *)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(_UIFloatingContentView *)floatingView;
-(void)setFloatingView:(_UIFloatingContentView *)arg1 ;
-(void)_updateTitleTextColor;
-(void)_updateSelectedBackgroundColor;
-(unsigned long long)_floatingViewControlState;
-(void)setShouldAppearSelected:(BOOL)arg1 ;
-(BOOL)shouldAppearSelected;
-(UIVisualEffectView *)backgroundVisualEffectView;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(VUITextLayout *)titleLayout;
-(void)setBackgroundVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)setTitleLayout:(VUITextLayout *)arg1 ;
-(void)updateFloatingViewControlState;
@end
