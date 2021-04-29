/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIScrollView, UIView, NSString, UITextView, UILabel, UIProgressView;

@interface PKProvisioningProgressView : UIView {

	UIScrollView* _scrollView;
	BOOL _showingCheckmark;
	UIView* _headerView;
	NSString* _primaryText;
	UITextView* _primaryLabel;
	UILabel* _secondaryLabel;
	UIProgressView* _progressView;
	UILabel* _progressLabel;

}

@property (nonatomic,retain) UIView * headerView;                                          //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NSString * primaryText;                                       //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,readonly) UITextView * primaryLabel;                                  //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,readonly) UILabel * secondaryLabel;                                   //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,readonly) UIProgressView * progressView;                              //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,readonly) UILabel * progressLabel;                                    //@synthesize progressLabel=_progressLabel - In the implementation block
@property (assign,getter=isShowingCheckmark,nonatomic) BOOL showingCheckmark;              //@synthesize showingCheckmark=_showingCheckmark - In the implementation block
-(id)init;
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIView *)headerView;
-(void)tintColorDidChange;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(UITextView *)primaryLabel;
-(UILabel *)secondaryLabel;
-(void)createViews;
-(UIProgressView *)progressView;
-(UILabel *)progressLabel;
-(void)setShowingCheckmark:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGSize)_layoutWithBounds:(CGRect)arg1 applyLayout:(BOOL)arg2 ;
-(void)_updateCheckmarkColor;
-(void)setShowingCheckmark:(BOOL)arg1 ;
-(BOOL)isShowingCheckmark;
@end

