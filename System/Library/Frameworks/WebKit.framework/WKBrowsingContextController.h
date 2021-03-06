/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WebKit/WebKit-Structs.h>
@class WKBrowsingContextHandle, _WKRemoteObjectRegistry, NSString, WKBackForwardList, NSURL, NSArray;

@interface WKBrowsingContextController : NSObject {

	WeakObjCPtr<id<WKBrowsingContextHistoryDelegate>> _historyDelegate;
	RefPtr<WebKit::WebPageProxy, WTF::RawPtrTraits<WebKit::WebPageProxy>, WTF::DefaultRefDerefTraits<WebKit::WebPageProxy>>* _page;
	unique_ptr<WebKit::PageLoadStateObserver, std::__1::default_delete<WebKit::PageLoadStateObserver>>* _pageLoadStateObserver;
	WeakObjCPtr<id<WKBrowsingContextLoadDelegate>> _loadDelegate;
	WeakObjCPtr<id<WKBrowsingContextPolicyDelegate>> _policyDelegate;

}

@property (readonly) OpaqueWKPageRef _pageRef; 
@property (readonly) BOOL hasOnlySecureContent; 
@property (assign) unsigned long long paginationMode; 
@property (assign) BOOL paginationBehavesLikeColumns; 
@property (assign) double pageLength; 
@property (assign) double gapBetweenPages; 
@property (assign) BOOL paginationLineGridEnabled; 
@property (readonly) unsigned long long pageCount; 
@property (nonatomic,readonly) WKBrowsingContextHandle * handle; 
@property (nonatomic,readonly) _WKRemoteObjectRegistry * _remoteObjectRegistry; 
@property (nonatomic,readonly) int processIdentifier; 
@property (__weak) id<WKBrowsingContextLoadDelegate> loadDelegate; 
@property (__weak) id<WKBrowsingContextPolicyDelegate> policyDelegate; 
@property (__weak) id<WKBrowsingContextHistoryDelegate> historyDelegate; 
@property (copy) NSString * applicationNameForUserAgent; 
@property (copy) NSString * customUserAgent; 
@property (readonly) BOOL canGoForward; 
@property (readonly) BOOL canGoBack; 
@property (readonly) WKBackForwardList * backForwardList; 
@property (getter=isLoading,readonly) BOOL loading; 
@property (readonly) NSURL * activeURL; 
@property (readonly) NSURL * provisionalURL; 
@property (readonly) NSURL * committedURL; 
@property (readonly) NSURL * unreachableURL; 
@property (readonly) double estimatedProgress; 
@property (readonly) NSString * title; 
@property (readonly) NSArray * certificateChain; 
@property (assign) double textZoom; 
@property (assign) double pageZoom; 
+(void)registerSchemeForCustomProtocol:(id)arg1 ;
+(void)unregisterSchemeForCustomProtocol:(id)arg1 ;
+(id)customSchemes;
+(id)_browsingContextControllerForPageRef:(OpaqueWKPageRef)arg1 ;
-(void)dealloc;
-(WKBrowsingContextHandle *)handle;
-(void)stopLoading;
-(int)processIdentifier;
-(NSString *)title;
-(void)reload;
-(BOOL)isLoading;
-(unsigned long long)pageCount;
-(void)goBack;
-(void)goForward;
-(id<WKBrowsingContextHistoryDelegate>)historyDelegate;
-(id<WKBrowsingContextPolicyDelegate>)policyDelegate;
-(NSURL *)unreachableURL;
-(NSURL *)provisionalURL;
-(void)loadRequest:(id)arg1 ;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(void)loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3 ;
-(void)reloadFromOrigin;
-(void)setApplicationNameForUserAgent:(NSString *)arg1 ;
-(void)setPolicyDelegate:(id<WKBrowsingContextPolicyDelegate>)arg1 ;
-(WKBackForwardList *)backForwardList;
-(NSString *)applicationNameForUserAgent;
-(void)setCustomUserAgent:(NSString *)arg1 ;
-(NSString *)customUserAgent;
-(double)estimatedProgress;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(void)setHistoryDelegate:(id<WKBrowsingContextHistoryDelegate>)arg1 ;
-(_WKRemoteObjectRegistry *)_remoteObjectRegistry;
-(BOOL)hasOnlySecureContent;
-(BOOL)_webProcessIsResponsive;
-(void)loadRequest:(id)arg1 userData:(id)arg2 ;
-(void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2 userData:(id)arg3 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 userData:(id)arg3 ;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 userData:(id)arg5 ;
-(void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2 ;
-(void)goToBackForwardListItem:(id)arg1 ;
-(NSURL *)activeURL;
-(NSURL *)committedURL;
-(NSArray *)certificateChain;
-(double)textZoom;
-(void)setTextZoom:(double)arg1 ;
-(double)pageZoom;
-(void)setPageZoom:(double)arg1 ;
-(id<WKBrowsingContextLoadDelegate>)loadDelegate;
-(void)setLoadDelegate:(id<WKBrowsingContextLoadDelegate>)arg1 ;
-(id)_initWithPageRef:(OpaqueWKPageRef)arg1 ;
-(OpaqueWKPageRef)_pageRef;
-(void)setPaginationMode:(unsigned long long)arg1 ;
-(unsigned long long)paginationMode;
-(void)setPaginationBehavesLikeColumns:(BOOL)arg1 ;
-(BOOL)paginationBehavesLikeColumns;
-(void)setPageLength:(double)arg1 ;
-(double)pageLength;
-(void)setGapBetweenPages:(double)arg1 ;
-(double)gapBetweenPages;
-(void)setPaginationLineGridEnabled:(BOOL)arg1 ;
-(BOOL)paginationLineGridEnabled;
@end

