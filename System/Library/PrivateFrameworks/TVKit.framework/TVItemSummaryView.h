/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/ATVUpdatable.h>

@class UILabel, UIView;

@interface TVItemSummaryView : UIView <ATVUpdatable> {

	BOOL _showTopDivider;
	BOOL _showBottomDivider;
	UILabel* _summaryLabel;
	UIView* _metadataView;
	UIView* _divider1;
	UIView* _divider2;

}

@property (nonatomic,retain) UIView * divider1;                     //@synthesize divider1=_divider1 - In the implementation block
@property (nonatomic,retain) UIView * divider2;                     //@synthesize divider2=_divider2 - In the implementation block
@property (assign,nonatomic) BOOL showTopDivider;                   //@synthesize showTopDivider=_showTopDivider - In the implementation block
@property (assign,nonatomic) BOOL showBottomDivider;                //@synthesize showBottomDivider=_showBottomDivider - In the implementation block
@property (nonatomic,readonly) UILabel * summaryLabel;              //@synthesize summaryLabel=_summaryLabel - In the implementation block
@property (nonatomic,retain) UIView * metadataView;                 //@synthesize metadataView=_metadataView - In the implementation block
-(id)initWithFeedElement:(id)arg1 ;
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1 ;
-(id)summaryFont;
-(id)summaryItalicFont;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateColors;
-(UILabel *)summaryLabel;
-(void)setMetadataView:(UIView *)arg1 ;
-(UIView *)metadataView;
-(void)setShowTopDivider:(BOOL)arg1 ;
-(void)setShowBottomDivider:(BOOL)arg1 ;
-(id)_defaultDividerColor;
-(UIView *)divider1;
-(UIView *)divider2;
-(BOOL)showTopDivider;
-(BOOL)showBottomDivider;
-(void)setDivider1:(UIView *)arg1 ;
-(void)setDivider2:(UIView *)arg1 ;
@end

