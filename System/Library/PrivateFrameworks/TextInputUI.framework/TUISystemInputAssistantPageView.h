/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputUI/TextInputUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol TUISystemInputAssistantPageViewDelegate;
@class UIView, TUIPredictionCellButton, UIScrollView, NSString;

@interface TUISystemInputAssistantPageView : UIView <UIScrollViewDelegate> {

	unsigned long long _currentChevronStyle;
	BOOL _secondaryViewInitialized;
	BOOL _layoutIsDirty;
	BOOL _hidesExpandButton;
	BOOL _secondaryViewVisible;
	UIView* _primaryView;
	UIView* _secondaryView;
	TUIPredictionCellButton* _expandButton;
	id<TUISystemInputAssistantPageViewDelegate> _pageViewDelegate;
	UIView* _clipView;
	UIView* _primaryContainerView;
	UIScrollView* _scrollView;

}

@property (nonatomic,retain) UIView * clipView;                                                                //@synthesize clipView=_clipView - In the implementation block
@property (nonatomic,retain) UIView * primaryContainerView;                                                    //@synthesize primaryContainerView=_primaryContainerView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                        //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIView * primaryView;                                                             //@synthesize primaryView=_primaryView - In the implementation block
@property (nonatomic,retain) UIView * secondaryView;                                                           //@synthesize secondaryView=_secondaryView - In the implementation block
@property (assign,nonatomic) BOOL hidesExpandButton;                                                           //@synthesize hidesExpandButton=_hidesExpandButton - In the implementation block
@property (nonatomic,readonly) TUIPredictionCellButton * expandButton;                                         //@synthesize expandButton=_expandButton - In the implementation block
@property (assign,nonatomic,__weak) id<TUISystemInputAssistantPageViewDelegate> pageViewDelegate;              //@synthesize pageViewDelegate=_pageViewDelegate - In the implementation block
@property (assign,nonatomic) BOOL secondaryViewVisible;                                                        //@synthesize secondaryViewVisible=_secondaryViewVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFrame:(CGRect)arg1 ;
-(void)setNeedsLayout;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)_contentSize;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)didMoveToWindow;
-(TUIPredictionCellButton *)expandButton;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(void)setPrimaryView:(UIView *)arg1 ;
-(void)setSecondaryView:(UIView *)arg1 ;
-(void)setHidesExpandButton:(BOOL)arg1 ;
-(void)updateScrollEnabled;
-(BOOL)_expandButtonVisible;
-(unsigned long long)_expandChevronImageStyleForRenderConfig:(id)arg1 ;
-(void)_updateExpandButtonChevronImage;
-(id)imageSymbolConfigurationForAssistantItem;
-(id)_createExpandButtonIfNecessary;
-(void)setSecondaryViewVisible:(BOOL)arg1 ;
-(void)setSecondaryViewVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSecondaryViewVisible:(BOOL)arg1 withAnimationType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSecondaryViewVisible:(BOOL)arg1 force:(BOOL)arg2 withAnimationType:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_checkOldBounds:(CGRect)arg1 forContentOffsetChangeWithNewBounds:(CGRect)arg2 ;
-(UIView *)primaryView;
-(UIView *)secondaryView;
-(BOOL)hidesExpandButton;
-(id<TUISystemInputAssistantPageViewDelegate>)pageViewDelegate;
-(void)setPageViewDelegate:(id<TUISystemInputAssistantPageViewDelegate>)arg1 ;
-(BOOL)secondaryViewVisible;
-(UIView *)clipView;
-(void)setClipView:(UIView *)arg1 ;
-(UIView *)primaryContainerView;
-(void)setPrimaryContainerView:(UIView *)arg1 ;
@end

