/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSEditingPane.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSString;

@interface PSLegalMessagePane : PSEditingPane <UIWebViewDelegate> {

	UIWebView* _webView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)markupString;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(BOOL)shouldInsetContent;
-(void)layoutInsetContent:(CGRect)arg1 ;
-(void)viewDidBecomeVisible;
-(BOOL)handlesDoneButton;
-(id)scrollViewToBeInsetted;
-(id)htmlFileLocation;
@end
