/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <SiriUI/_SiriUIContentPlatterScrollViewDelegate.h>
#import <SiriUI/SiriUIDarkening.h>

@protocol SiriUIContentPlatterViewDelegate;
@class NSArray, SiriUIPanDismissalGestureRecognizer, _SiriUIContentPlatterScrollView, SiriUIContentPlatterDarkenMaskView, UIView, NSString;

@interface SiriUIContentPlatterView : UIView <UIScrollViewDelegate, _SiriUIContentPlatterScrollViewDelegate, SiriUIDarkening> {

	BOOL _platterNeedsLayout;
	BOOL _shouldAllowDismissalWhileScrollable;
	id<SiriUIContentPlatterViewDelegate> _delegate;
	NSArray* _contentViews;
	SiriUIPanDismissalGestureRecognizer* _dismissalGestureRecognizer;
	_SiriUIContentPlatterScrollView* _scrollView;
	SiriUIContentPlatterDarkenMaskView* _darkenMaskView;
	double _currentContentOffset;
	UIView* _platterView;
	UIEdgeInsets _contentInsets;

}

@property (getter=_scrollView,nonatomic,retain) _SiriUIContentPlatterScrollView * scrollView;                                                                                  //@synthesize scrollView=_scrollView - In the implementation block
@property (getter=_darkenMaskView,nonatomic,retain) SiriUIContentPlatterDarkenMaskView * darkenMaskView;                                                                       //@synthesize darkenMaskView=_darkenMaskView - In the implementation block
@property (assign,setter=_setPlatterNeedsLayout:,getter=_platterNeedsLayout,nonatomic) BOOL platterNeedsLayout;                                                                //@synthesize platterNeedsLayout=_platterNeedsLayout - In the implementation block
@property (assign,setter=_setShouldAllowDismissalWhileScrollable:,getter=_shouldAllowDismissalWhenScrollable,nonatomic) BOOL shouldAllowDismissalWhileScrollable;              //@synthesize shouldAllowDismissalWhileScrollable=_shouldAllowDismissalWhileScrollable - In the implementation block
@property (assign,setter=_setCurrentContentOffset:,getter=_currentContentOffset,nonatomic) double currentContentOffset;                                                        //@synthesize currentContentOffset=_currentContentOffset - In the implementation block
@property (nonatomic,retain) UIView * platterView;                                                                                                                             //@synthesize platterView=_platterView - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIContentPlatterViewDelegate> delegate;                                                                                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * contentViews;                                                                                                                           //@synthesize contentViews=_contentViews - In the implementation block
@property (assign,getter=isScrollEnabled,nonatomic) BOOL scrollEnabled; 
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                                                                                                       //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) SiriUIPanDismissalGestureRecognizer * dismissalGestureRecognizer;                                                                                 //@synthesize dismissalGestureRecognizer=_dismissalGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double darkenIntensity; 
-(id<SiriUIContentPlatterViewDelegate>)delegate;
-(void)setDelegate:(id<SiriUIContentPlatterViewDelegate>)arg1 ;
-(void)setNeedsLayout;
-(UIEdgeInsets)contentInsets;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_scrollView;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(UIView *)platterView;
-(void)setPlatterView:(UIView *)arg1 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(BOOL)isScrollEnabled;
-(void)setScrollView:(_SiriUIContentPlatterScrollView *)arg1 ;
-(void)setContentViews:(NSArray *)arg1 ;
-(BOOL)shouldAllowSimultaneousGestureRecognizersForScrollView:(id)arg1 ;
-(id)_darkenMaskView;
-(void)_setPlatterNeedsLayout:(BOOL)arg1 ;
-(BOOL)_platterNeedsLayout;
-(void)_updateContentFullyScrolled;
-(NSArray *)contentViews;
-(double)darkenIntensity;
-(double)_currentContentOffset;
-(SiriUIPanDismissalGestureRecognizer *)dismissalGestureRecognizer;
-(void)_setShouldAllowDismissalWhileScrollable:(BOOL)arg1 ;
-(void)_setCurrentContentOffset:(double)arg1 ;
-(BOOL)_shouldAllowDismissalWhenScrollable;
-(void)setDarkenIntensity:(double)arg1 ;
-(void)setDismissalGestureRecognizer:(SiriUIPanDismissalGestureRecognizer *)arg1 ;
-(id)contentPlatterScrollView;
-(void)setDarkenMaskView:(SiriUIContentPlatterDarkenMaskView *)arg1 ;
@end

