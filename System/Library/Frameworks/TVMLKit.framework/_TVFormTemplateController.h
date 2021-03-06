/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>
#import <libobjc.A.dylib/IKAppKeyboardDelegate.h>
#import <TVMLKit/TVTextEntryControllerDelegate.h>

@class _TVTextEntryController, IKViewElement, IKTextFieldElement, IKImageElement, UIImageView, NSString;

@interface _TVFormTemplateController : _TVBgImageLoadingViewController <IKAppKeyboardDelegate, TVTextEntryControllerDelegate> {

	_TVTextEntryController* _textEntryController;
	IKViewElement* _templateElement;
	IKViewElement* _bannerElement;
	IKTextFieldElement* _textFieldElement;
	IKViewElement* _footerElement;
	IKImageElement* _bgImageElement;
	IKImageElement* _bgHeroImageElement;
	UIImageView* _backgroundImageView;

}

@property (nonatomic,readonly) UIImageView * backgroundImageView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(id)preferredFocusEnvironments;
-(void)textDidChangeForKeyboard:(id)arg1 ;
-(void)textEntryControllerDidFinish:(id)arg1 ;
-(long long)_blurEffectStyle;
-(UIImageView *)backgroundImageView;
-(void)updateWithViewElement:(id)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(void)_updateKeyboardText;
-(void)_updateViewIgnoringSparseUpdates:(BOOL)arg1 ;
-(void)_textFieldBeginEditing;
-(void)_textFieldEditingChanged;
-(void)_textFieldEndEditing;
-(void)_updateTextFieldText;
-(BOOL)_backgroundImageRequiresBlur;
@end

