/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPeerPaymentActionViewController.h>
#import <libobjc.A.dylib/PKEnterCurrencyAmountViewDelegate.h>
#import <libobjc.A.dylib/PKNumberPadSuggestionsViewDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentActionControllerDelegate.h>
#import <libobjc.A.dylib/PKEnterCurrencyAmountPassViewDelegate.h>

@class PKNumericSuggestionsEnterValueAlgorithm, PKNumberPadSuggestionsView, UIScrollView, PKEnterCurrencyAmountPassView, NSString;

@interface PKPeerPaymentActionAddMoneyViewController : PKPeerPaymentActionViewController <PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate, PKPeerPaymentActionControllerDelegate, PKEnterCurrencyAmountPassViewDelegate> {

	PKNumericSuggestionsEnterValueAlgorithm* _suggestionGenerator;
	PKNumberPadSuggestionsView* _suggestionView;
	UIScrollView* _scrollView;
	PKEnterCurrencyAmountPassView* _amountPassView;
	BOOL _keyboardVisible;
	CGRect _keyboardFrame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)keyboardWillShow:(id)arg1 ;
-(void)setMinBalance:(id)arg1 ;
-(void)setMaxBalance:(id)arg1 ;
-(void)setMinLoadAmount:(id)arg1 ;
-(void)setMaxLoadAmount:(id)arg1 ;
-(void)setCardBalance:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)enterCurrencyAmountPassViewDidLoadPassSnapshot:(id)arg1 ;
-(id)initWithPaymentPass:(id)arg1 webService:(id)arg2 passLibraryDataProvider:(id)arg3 context:(long long)arg4 ;
-(void)updateFirstResponder;
-(void)updateAccountValues;
-(void)willDismissViewController;
-(void)peerPaymentActionController:(id)arg1 hasChangedState:(unsigned long long)arg2 ;
-(void)_showNavigationBarSpinner:(BOOL)arg1 ;
-(id)_spinnerBarButton;
-(void)keyboardWillChange:(id)arg1 ;
-(void)_updateLayoutForKeyboardAction:(/*^block*/id)arg1 ;
-(void)numberPadSuggestionsView:(id)arg1 didSelectSuggestion:(id)arg2 ;
-(BOOL)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3 ;
-(void)enterCurrencyAmountViewDidChangeAmount:(id)arg1 ;
-(BOOL)_shouldShakeCard:(id)arg1 ;
-(void)_updateCurrentAmount:(id)arg1 shouldGenerateNewSuggestions:(BOOL)arg2 ;
-(void)_updateBarButtonEnabledState;
-(void)_currentAmountDidChangeTo:(id)arg1 shouldGenerateNewSuggestions:(BOOL)arg2 ;
-(BOOL)_isCurrentAmountValid;
-(id)_addBarButton;
-(void)_addBarButtonPressed:(id)arg1 ;
@end

