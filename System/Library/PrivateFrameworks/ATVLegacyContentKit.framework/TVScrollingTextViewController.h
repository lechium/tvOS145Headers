/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol TVScrollingTextViewControllerDelegate;
@class _UIRepeatingPressGestureRecognizer, NSString, NSArray, UITextView, UILabel;

@interface TVScrollingTextViewController : UIViewController <UIGestureRecognizerDelegate> {

	_UIRepeatingPressGestureRecognizer* _downButtonRecognizer;
	_UIRepeatingPressGestureRecognizer* _upButtonRecognizer;
	id<TVScrollingTextViewControllerDelegate> _delegate;
	NSString* _text;
	NSArray* _buttons;
	unsigned long long _selectedButtonIndex;
	UITextView* _textView;
	UILabel* _titleLabel;

}

@property (assign,nonatomic) unsigned long long selectedButtonIndex;                                 //@synthesize selectedButtonIndex=_selectedButtonIndex - In the implementation block
@property (nonatomic,retain) UITextView * textView;                                                  //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) id<TVScrollingTextViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text;                                                          //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSArray * buttons;                                                        //@synthesize buttons=_buttons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<TVScrollingTextViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TVScrollingTextViewControllerDelegate>)arg1 ;
-(void)setTitle:(id)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSArray *)buttons;
-(void)setButtons:(NSArray *)arg1 ;
-(void)viewWillLayoutSubviews;
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(void)loadView;
-(unsigned long long)selectedButtonIndex;
-(void)setSelectedButtonIndex:(unsigned long long)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusedView;
-(void)_handleGestureAction:(id)arg1 ;
@end

