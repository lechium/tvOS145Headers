/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIKeyInput.h>

@protocol _TVSearchBarDelegate;
@class UITextField, UIActivityIndicatorView, NSString, UITextInputPasswordRules;

@interface _TVSearchBar : UIView <UIKeyInput> {

	UITextField* _textField;
	id<_TVSearchBarDelegate> _delegate;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,retain) NSString * text; 
@property (nonatomic,readonly) UITextField * textField;                                    //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic,__weak) id<_TVSearchBarDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,readonly) BOOL hasText; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_listItemSelectedOverlayFillColor;
+(id)_listItemTextColor;
-(id<_TVSearchBarDelegate>)delegate;
-(void)setDelegate:(id<_TVSearchBarDelegate>)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)keyCommands;
-(BOOL)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UITextField *)textField;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)_submit:(id)arg1 ;
-(void)_insertSpace:(id)arg1 ;
@end

