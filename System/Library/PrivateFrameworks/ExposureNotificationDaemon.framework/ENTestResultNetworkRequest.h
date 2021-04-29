/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSURLSession, NSURLSessionTask, NSURL, NSString, NSError, NSDictionary;

@interface ENTestResultNetworkRequest : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSURLSession* _URLSession;
	NSURLSessionTask* _URLSessionTask;
	/*^block*/id _completionHandler;
	NSURL* _requestURL;
	NSString* _APIKey;
	unsigned long long _paddedRequestSize;
	NSError* _error;

}

@property (nonatomic,copy,readonly) NSURL * requestURL;                                   //@synthesize requestURL=_requestURL - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * requestHeaders; 
@property (nonatomic,copy) NSString * APIKey;                                             //@synthesize APIKey=_APIKey - In the implementation block
@property (assign,nonatomic) unsigned long long paddedRequestSize;                        //@synthesize paddedRequestSize=_paddedRequestSize - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                                      //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * additionalRequestHeaders; 
@property (nonatomic,copy,readonly) NSDictionary * bodyJSON; 
-(void)invalidate;
-(NSError *)error;
-(void)_completeWithError:(id)arg1 ;
-(NSURL *)requestURL;
-(NSDictionary *)requestHeaders;
-(void)resumeWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)APIKey;
-(void)setAPIKey:(NSString *)arg1 ;
-(id)initWithRequestURL:(id)arg1 URLSession:(id)arg2 queue:(id)arg3 ;
-(void)setPaddedRequestSize:(unsigned long long)arg1 ;
-(id)errorForUnsuccessfulResponse:(id)arg1 body:(id)arg2 ;
-(NSDictionary *)bodyJSON;
-(id)handleResponse:(id)arg1 body:(id)arg2 ;
-(unsigned long long)paddedRequestSize;
-(id)_createURLRequestWithError:(id*)arg1 ;
-(void)_performURLRequest:(id)arg1 ;
-(id)_dictionaryFromData:(id)arg1 response:(id)arg2 error:(id*)arg3 ;
-(id)_errorForURLRequestError:(id)arg1 ;
-(id)getPaddedBodyJSONAndReturnError:(id*)arg1 ;
-(NSDictionary *)additionalRequestHeaders;
-(void)handleURLResponse:(id)arg1 data:(id)arg2 error:(id)arg3 ;
@end

