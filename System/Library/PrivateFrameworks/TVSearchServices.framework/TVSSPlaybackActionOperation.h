/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVSearchServices.framework/TVSearchServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class TVSSPlaybackActionOperationRequest, NSArray, NSError, NSXPCConnection, NSUUID, NSString, TVSSPlaybackActionOperationResult;

@interface TVSSPlaybackActionOperation : NSOperation {

	BOOL _executing;
	BOOL _finished;
	TVSSPlaybackActionOperationRequest* _request;
	NSArray* _results;
	NSError* _error;
	NSXPCConnection* _connection;
	NSUUID* _requestID;

}

@property (copy,readonly) NSString * canonicalID; 
@property (copy,readonly) TVSSPlaybackActionOperationResult * result; 
@property (nonatomic,retain) NSXPCConnection * connection;                         //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) NSUUID * requestID;                                     //@synthesize requestID=_requestID - In the implementation block
@property (copy) NSArray * results;                                                //@synthesize results=_results - In the implementation block
@property (retain) NSError * error;                                                //@synthesize error=_error - In the implementation block
@property (readonly) TVSSPlaybackActionOperationRequest * request;                 //@synthesize request=_request - In the implementation block
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(TVSSPlaybackActionOperationRequest *)request;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(void)start;
-(NSArray *)results;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(TVSSPlaybackActionOperationResult *)result;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setResults:(NSArray *)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(NSUUID *)requestID;
-(void)setRequestID:(NSUUID *)arg1 ;
-(void)_finish;
-(NSString *)canonicalID;
-(id)initWithCanonicalID:(id)arg1 ;
@end

