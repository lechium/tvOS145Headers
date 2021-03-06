/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/_WKInspectorExtensionHost.h>

@class WKWebView, NSString;

@interface _WKInspector : NSObject <WKObject, _WKInspectorExtensionHost> {

	ObjectStorage<WebKit::WebInspectorProxy> _inspector;
	unique_ptr<WebKit::InspectorDelegate, std::__1::default_delete<WebKit::InspectorDelegate>>* _delegate;

}

@property (assign,nonatomic,__weak) id<_WKInspectorDelegate> delegate; 
@property (nonatomic,readonly) WKWebView * webView; 
@property (nonatomic,readonly) BOOL isConnected; 
@property (nonatomic,readonly) BOOL isVisible; 
@property (nonatomic,readonly) BOOL isFront; 
@property (nonatomic,readonly) BOOL isProfilingPage; 
@property (nonatomic,readonly) BOOL isElementSelectionActive; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_WKInspectorDelegate>)delegate;
-(void)close;
-(void)setDelegate:(id<_WKInspectorDelegate>)arg1 ;
-(void)connect;
-(BOOL)isConnected;
-(BOOL)isVisible;
-(void)detach;
-(WKWebView *)webView;
-(void)showConsole;
-(void)attach;
-(Object*)_apiObject;
-(void)_setDiagnosticLoggingDelegate:(id)arg1 ;
-(id)inspectorWebView;
-(void)registerExtensionWithID:(id)arg1 displayName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)unregisterExtension:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isFront;
-(BOOL)isProfilingPage;
-(BOOL)isElementSelectionActive;
-(void)show;
-(void)hide;
-(void)showResources;
-(void)showMainResourceForFrame:(id)arg1 ;
-(void)togglePageProfiling;
-(void)toggleElementSelection;
-(void)printErrorToConsole:(id)arg1 ;
-(void)_browserExtensionsEnabled:(id)arg1 ;
-(void)_browserExtensionsDisabled:(id)arg1 ;
-(void)_openURLExternallyForTesting:(id)arg1 useFrontendAPI:(BOOL)arg2 ;
@end

