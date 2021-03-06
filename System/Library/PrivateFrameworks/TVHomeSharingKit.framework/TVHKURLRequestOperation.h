/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKAsynchronousOperation.h>

@class NSURLRequest, NSData, NSURLResponse, NSError, NSURLSession, NSURLSessionDataTask;

@interface TVHKURLRequestOperation : TVHKAsynchronousOperation {

	NSURLRequest* _request;
	NSData* _data;
	NSURLResponse* _response;
	NSError* _error;
	NSURLSession* _session;
	NSURLSessionDataTask* _task;
	unsigned long long _taskStartTime;

}

@property (nonatomic,retain) NSURLRequest * request;                                      //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) NSError * error;                                               //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSData * data;                                                 //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSURLResponse * response;                                      //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) NSURLSession * session;                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSURLSessionDataTask * task;                                   //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) unsigned long long taskStartTime;                            //@synthesize taskStartTime=_taskStartTime - In the implementation block
@property (nonatomic,readonly) unsigned long long elapsedTimeInMilliseconds; 
+(id)new;
-(id)init;
-(NSData *)data;
-(NSError *)error;
-(NSURLRequest *)request;
-(void)cancel;
-(NSURLSession *)session;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSURLResponse *)response;
-(void)setData:(NSData *)arg1 ;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(NSURLSessionDataTask *)task;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(void)executionDidBegin;
-(id)initWithRequest:(id)arg1 session:(id)arg2 ;
-(unsigned long long)taskStartTime;
-(void)_handleResponse:(id)arg1 responseData:(id)arg2 error:(id)arg3 ;
-(void)setTaskStartTime:(unsigned long long)arg1 ;
-(unsigned long long)elapsedTimeInMilliseconds;
@end

