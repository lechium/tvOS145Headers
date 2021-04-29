/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TVTextEntryControllerDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSString, TVImageProxy, UITapGestureRecognizer, TVTextEntryController, _TVLTextEntryContentView, TVTextEntryHeaderView, _TVLTextEntryFooterView, UITextField, UIImage;

@interface TVLTextEntryViewController : UIViewController <TVTextEntryControllerDelegate, UITextFieldDelegate> {

	BOOL _secureTextEntry;
	NSString* _initialTextFieldText;
	NSString* _titleText;
	NSString* _messageText;
	NSString* _textFieldHeaderText;
	NSString* _buttonText;
	NSString* _footnoteText;
	TVImageProxy* _headerImageProxy;
	UITapGestureRecognizer* _menuRecognizer;
	long long _keyboardType;
	/*^block*/id _buttonHandler;
	TVTextEntryController* _textEntryController;
	_TVLTextEntryContentView* _contentView;
	TVTextEntryHeaderView* _headerView;
	_TVLTextEntryFooterView* _footerView;

}

@property (nonatomic,readonly) TVTextEntryController * textEntryController;              //@synthesize textEntryController=_textEntryController - In the implementation block
@property (nonatomic,readonly) _TVLTextEntryContentView * contentView;                   //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) TVTextEntryHeaderView * headerView;                       //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) _TVLTextEntryFooterView * footerView;                     //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,copy) NSString * initialTextFieldText;                              //@synthesize initialTextFieldText=_initialTextFieldText - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                         //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * messageText;                                       //@synthesize messageText=_messageText - In the implementation block
@property (nonatomic,copy) NSString * textFieldHeaderText;                               //@synthesize textFieldHeaderText=_textFieldHeaderText - In the implementation block
@property (nonatomic,copy) NSString * buttonText;                                        //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,copy) NSString * footnoteText;                                      //@synthesize footnoteText=_footnoteText - In the implementation block
@property (nonatomic,retain) TVImageProxy * headerImageProxy;                            //@synthesize headerImageProxy=_headerImageProxy - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * menuRecognizer;                    //@synthesize menuRecognizer=_menuRecognizer - In the implementation block
@property (assign,nonatomic) long long keyboardType;                                     //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,copy) id buttonHandler;                                             //@synthesize buttonHandler=_buttonHandler - In the implementation block
@property (nonatomic,readonly) UITextField * textField; 
@property (nonatomic,readonly) UIImage * headerImage; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry;              //@synthesize secureTextEntry=_secureTextEntry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1 ;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(_TVLTextEntryContentView *)contentView;
-(void)loadView;
-(NSString *)messageText;
-(void)setMessageText:(NSString *)arg1 ;
-(UITextField *)textField;
-(void)viewDidLayoutSubviews;
-(TVTextEntryHeaderView *)headerView;
-(BOOL)isSecureTextEntry;
-(void)_setSecureTextEntry:(BOOL)arg1 ;
-(id)preferredFocusEnvironments;
-(_TVLTextEntryFooterView *)footerView;
-(UIImage *)headerImage;
-(id)_titleStringAttributes;
-(id)_messageStringAttributes;
-(void)textEntryControllerDidFinish:(id)arg1 ;
-(UITapGestureRecognizer *)menuRecognizer;
-(void)setMenuRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setFootnoteText:(NSString *)arg1 ;
-(NSString *)footnoteText;
-(void)setTextFieldHeaderText:(NSString *)arg1 ;
-(void)setInitialTextFieldText:(NSString *)arg1 ;
-(void)setButtonHandler:(id)arg1 ;
-(void)setHeaderImageProxy:(TVImageProxy *)arg1 ;
-(TVImageProxy *)headerImageProxy;
-(void)_handleButtonClick:(id)arg1 ;
-(void)_setHeaderViewTitle:(id)arg1 ;
-(void)_setHeaderViewImageProxy:(id)arg1 ;
-(void)_setHeaderViewMessage:(id)arg1 ;
-(void)_setFooterViewButtonText:(id)arg1 ;
-(void)_setFootnoteLabelText:(id)arg1 ;
-(void)_setTextFieldHeaderText:(id)arg1 ;
-(TVTextEntryController *)textEntryController;
-(id)buttonHandler;
-(NSString *)initialTextFieldText;
-(NSString *)textFieldHeaderText;
@end

