/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKLoadableContentViewController.h>
#import <UIKit/UITextViewDelegate.h>

@class UIScrollView, NSArray, GKTextView, UIView, GKContiguousContainerView, NSLayoutConstraint, NSString;

@interface GKBaseComposeController : GKLoadableContentViewController <UITextViewDelegate> {

	BOOL _showHeaderFieldContainer;
	UIScrollView* _backgroundView;
	NSArray* _composeHeaderFields;
	GKTextView* _messageField;
	UIView* _intendedFirstResponder;
	GKContiguousContainerView* _headerFieldContainer;
	UIView* _contentView;
	double _scrollContentInsetAdjustY;
	NSLayoutConstraint* _contentHeightConstraint;
	NSLayoutConstraint* _contentLeadingConstraint;
	NSLayoutConstraint* _messageFieldTrailingConstraint;
	CGRect _lastKnownKeyboardFrame;

}

@property (nonatomic,retain) GKContiguousContainerView * headerFieldContainer;                 //@synthesize headerFieldContainer=_headerFieldContainer - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                             //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) double scrollContentInsetAdjustY;                                 //@synthesize scrollContentInsetAdjustY=_scrollContentInsetAdjustY - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentHeightConstraint;                     //@synthesize contentHeightConstraint=_contentHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentLeadingConstraint;                    //@synthesize contentLeadingConstraint=_contentLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * messageFieldTrailingConstraint;              //@synthesize messageFieldTrailingConstraint=_messageFieldTrailingConstraint - In the implementation block
@property (assign,nonatomic) BOOL showHeaderFieldContainer;                                    //@synthesize showHeaderFieldContainer=_showHeaderFieldContainer - In the implementation block
@property (nonatomic,retain) UIScrollView * backgroundView;                                    //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) NSArray * composeHeaderFields;                                    //@synthesize composeHeaderFields=_composeHeaderFields - In the implementation block
@property (nonatomic,retain) GKTextView * messageField;                                        //@synthesize messageField=_messageField - In the implementation block
@property (assign,nonatomic) UIView * intendedFirstResponder;                                  //@synthesize intendedFirstResponder=_intendedFirstResponder - In the implementation block
@property (assign,nonatomic) CGRect lastKnownKeyboardFrame;                                    //@synthesize lastKnownKeyboardFrame=_lastKnownKeyboardFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setBackgroundView:(UIScrollView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(UIScrollView *)backgroundView;
-(UIEdgeInsets)margins;
-(GKTextView *)messageField;
-(void)setMessageField:(GKTextView *)arg1 ;
-(void)setShowHeaderFieldContainer:(BOOL)arg1 ;
-(void)setIntendedFirstResponder:(UIView *)arg1 ;
-(void)keyboardWillHideShow:(id)arg1 ;
-(GKContiguousContainerView *)headerFieldContainer;
-(void)_adjustContentInsetForShowingKeyboard:(BOOL)arg1 ;
-(void)setLastKnownKeyboardFrame:(CGRect)arg1 ;
-(BOOL)showHeaderFieldContainer;
-(void)setContentHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContentLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMessageFieldTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(UIView *)intendedFirstResponder;
-(void)messageFieldTextDidChange;
-(void)_scrollSelectedTextToVisible;
-(void)setComposeHeaderFields:(NSArray *)arg1 ;
-(BOOL)_gkWantsCustomRightBarButtonItemInViewService;
-(id)viewMetricsForContainerView:(id)arg1 ;
-(void)setMessageFieldText:(id)arg1 ;
-(NSArray *)composeHeaderFields;
-(CGRect)lastKnownKeyboardFrame;
-(void)setHeaderFieldContainer:(GKContiguousContainerView *)arg1 ;
-(double)scrollContentInsetAdjustY;
-(void)setScrollContentInsetAdjustY:(double)arg1 ;
-(NSLayoutConstraint *)contentHeightConstraint;
-(NSLayoutConstraint *)contentLeadingConstraint;
-(NSLayoutConstraint *)messageFieldTrailingConstraint;
@end

