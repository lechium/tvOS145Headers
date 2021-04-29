/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, UIInputSwitcherTableCellBackgroundView;

@interface UIInputSwitcherTableCellSegmentView : UIView {

	BOOL _selected;
	BOOL _usesDarkTheme;
	UILabel* _label;
	UIImageView* _imageView;
	UIInputSwitcherTableCellBackgroundView* _backgroundView;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected;                                        //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL usesDarkTheme;                                                     //@synthesize usesDarkTheme=_usesDarkTheme - In the implementation block
@property (nonatomic,readonly) UILabel * label;                                                      //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                                              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UIInputSwitcherTableCellBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
+(id)_fontForBiasLabel;
-(UILabel *)label;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelected;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(BOOL)usesDarkTheme;
-(void)setUsesDarkTheme:(BOOL)arg1 ;
-(UIInputSwitcherTableCellBackgroundView *)backgroundView;
@end

