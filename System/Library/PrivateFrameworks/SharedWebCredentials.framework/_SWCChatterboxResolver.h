/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURLComponents, NSURLSessionDataTask, NSURLSession, NSURL;

@interface _SWCChatterboxResolver : NSObject {

	NSURLComponents* _URLComponents;
	NSURLSessionDataTask* _task;
	NSURLSession* _session;
	/*^block*/id _completionHandler;

}

@property (copy,readonly) NSURL * originalURL; 
+(id)new;
+(id)_session;
+(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
+(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)_queue;
+(BOOL)_looksLikeChatterboxURLComponents:(id)arg1 ;
+(void)_invokeCompletionHandlerForTask:(id)arg1 result:(id)arg2 error:(id)arg3 ;
+(BOOL)_looksLikeAppleErrorPageURLResponse:(id)arg1 ;
+(id)_resolverForTask:(id)arg1 ;
+(void)_setResolver:(id)arg1 forTask:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)originalURL;
-(void)resolveWithCompletionHandler:(/*^block*/id)arg1 ;
@end

