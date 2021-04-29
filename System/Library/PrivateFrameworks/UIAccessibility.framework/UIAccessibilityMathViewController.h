/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@class SCRCMathExpression, UIAccessibilityMathWebView, NSDictionary, NSString;

@interface UIAccessibilityMathViewController : UIViewController <WKNavigationDelegate> {

	SCRCMathExpression* _mathExpression;
	UIAccessibilityMathWebView* _webView;
	NSDictionary* _mathDictionary;

}

@property (nonatomic,readonly) NSDictionary * mathDictionary;              //@synthesize mathDictionary=_mathDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(void)loadView;
-(id)_htmlString;
-(void)_doneButtonTapped;
-(void)_styleBarButtonItem:(id)arg1 ;
-(id)initWithMathDictionary:(id)arg1 ;
-(NSDictionary *)mathDictionary;
@end

