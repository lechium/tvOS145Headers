/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIStackView.h>

@protocol PKNumberPadSuggestionsViewDelegate;
@class NSArray, UIColor;

@interface PKNumberPadSuggestionsView : UIStackView {

	NSArray* _suggestionButtons;
	id<PKNumberPadSuggestionsViewDelegate> _delegate;
	NSArray* _suggestions;
	UIColor* _buttonTextColor;
	UIColor* _buttonBackgroundColor;

}

@property (assign,nonatomic,__weak) id<PKNumberPadSuggestionsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * suggestions;                                                 //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,copy) UIColor * buttonTextColor;                                             //@synthesize buttonTextColor=_buttonTextColor - In the implementation block
@property (nonatomic,copy) UIColor * buttonBackgroundColor;                                       //@synthesize buttonBackgroundColor=_buttonBackgroundColor - In the implementation block
+(CGSize)defaultSize;
-(id<PKNumberPadSuggestionsViewDelegate>)delegate;
-(void)setDelegate:(id<PKNumberPadSuggestionsViewDelegate>)arg1 ;
-(void)setSuggestions:(NSArray *)arg1 ;
-(NSArray *)suggestions;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)buttonTextColor;
-(void)setButtonTextColor:(UIColor *)arg1 ;
-(id)initWithDefaultFrame;
-(void)setButtonBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)buttonBackgroundColor;
-(void)_selectedSuggestion:(id)arg1 ;
@end

