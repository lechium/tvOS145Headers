/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class TVLJavaScriptContext, NSLock, NSMutableArray, NSMutableURLRequest, NSURLSession, NSURLSessionDataTask, NSString, NSHTTPURLResponse, NSMutableData;

@interface TVLJSXMLHttpRequest : NSObject <NSURLSessionDataDelegate, NSURLSessionTaskDelegate> {

	TVLJavaScriptContext* _context;
	OpaqueJSValueRef _object;
	BOOL _isObjectProtected;
	BOOL _shouldSquashOnReadyStateEvents;
	NSLock* _onReadyStateChangeMessageQueueLock;
	NSMutableArray* _onReadyStateChangeMessageQueue;
	unsigned _readyState;
	NSMutableURLRequest* _urlRequest;
	NSURLSession* _urlSession;
	NSURLSessionDataTask* _dataTask;
	BOOL _async;
	NSString* _user;
	NSString* _password;
	NSHTTPURLResponse* _urlResponse;
	unsigned _statusCode;
	NSString* _statusText;
	NSMutableData* _receivedData;

}

@property (retain) NSURLSessionDataTask * dataTask;                 //@synthesize dataTask=_dataTask - In the implementation block
@property (assign,nonatomic) unsigned readyState;                   //@synthesize readyState=_readyState - In the implementation block
@property (retain) NSMutableURLRequest * urlRequest;                //@synthesize urlRequest=_urlRequest - In the implementation block
@property (retain) NSHTTPURLResponse * urlResponse;                 //@synthesize urlResponse=_urlResponse - In the implementation block
@property (retain) NSURLSession * urlSession;                       //@synthesize urlSession=_urlSession - In the implementation block
@property (assign,nonatomic) unsigned statusCode;                   //@synthesize statusCode=_statusCode - In the implementation block
@property (copy) NSString * statusText;                             //@synthesize statusText=_statusText - In the implementation block
@property (retain) NSMutableData * receivedData;                    //@synthesize receivedData=_receivedData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_immediateUpdateJSObjectState:(OpaqueJSContextRef)arg1 object:(OpaqueJSValueRef)arg2 readyState:(unsigned)arg3 statusCode:(unsigned)arg4 statusText:(id)arg5 shouldCallOnReadyStateChange:(BOOL)arg6 ;
+(void)registerClassInContext:(OpaqueJSContextRef)arg1 ;
-(void)dealloc;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(unsigned)statusCode;
-(NSMutableData *)receivedData;
-(void)setStatusCode:(unsigned)arg1 ;
-(NSURLSession *)urlSession;
-(void)setDataTask:(NSURLSessionDataTask *)arg1 ;
-(NSURLSessionDataTask *)dataTask;
-(unsigned)readyState;
-(void)setReceivedData:(NSMutableData *)arg1 ;
-(NSMutableURLRequest *)urlRequest;
-(void)setUrlSession:(NSURLSession *)arg1 ;
-(NSHTTPURLResponse *)urlResponse;
-(void)setUrlResponse:(NSHTTPURLResponse *)arg1 ;
-(void)setStatusText:(NSString *)arg1 ;
-(NSString *)statusText;
-(void)setReadyState:(unsigned)arg1 ;
-(id)_dequeueReadyStateChangeMessage;
-(void)setUrlRequest:(NSMutableURLRequest *)arg1 ;
-(void)_clearAllReadyStateChangeMessagesAndSquashFutureOnes;
-(void)_scheduleOnReadyStateChangeCall;
-(void)_immediateOnReadyStateChangeCall:(OpaqueJSContextRef)arg1 ;
-(void)_enqueueReadyStateChangeMessageRespectingSquash;
-(void)_unprotectJSObjectIfNecessary;
-(id)initWithContext:(OpaqueJSContextRef)arg1 jsObject:(OpaqueJSValueRef)arg2 ;
-(void)openWithMethod:(id)arg1 url:(id)arg2 async:(BOOL)arg3 user:(id)arg4 password:(id)arg5 jsContext:(OpaqueJSContextRef)arg6 ;
-(void)sendWithData:(id)arg1 jsContext:(OpaqueJSContextRef)arg2 ;
-(void)abortWithContext:(OpaqueJSContextRef)arg1 ;
-(void)_jsObjectWasFinalized;
@end

