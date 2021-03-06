/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKAsynchronousOperation.h>

@class TVHKMediaLibraryRequest, TVHKMediaLibraryResponse, NSError, TVHKMediaLibraryRequestSession, TVHKAsynchronousWorkToken;

@interface TVHKMediaLibraryRequestOperation : TVHKAsynchronousOperation {

	TVHKMediaLibraryRequest* _request;
	TVHKMediaLibraryResponse* _response;
	NSError* _error;
	TVHKMediaLibraryRequestSession* _requestSession;
	TVHKAsynchronousWorkToken* _requestToken;

}

@property (nonatomic,readonly) TVHKMediaLibraryRequestSession * requestSession;              //@synthesize requestSession=_requestSession - In the implementation block
@property (nonatomic,retain) TVHKAsynchronousWorkToken * requestToken;                       //@synthesize requestToken=_requestToken - In the implementation block
@property (nonatomic,retain) TVHKMediaLibraryResponse * response;                            //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) NSError * error;                                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) TVHKMediaLibraryRequest * request;                            //@synthesize request=_request - In the implementation block
+(id)new;
-(id)init;
-(NSError *)error;
-(TVHKMediaLibraryRequest *)request;
-(void)cancel;
-(void)setResponse:(TVHKMediaLibraryResponse *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(TVHKMediaLibraryResponse *)response;
-(TVHKAsynchronousWorkToken *)requestToken;
-(void)setRequestToken:(TVHKAsynchronousWorkToken *)arg1 ;
-(void)_handleResponse:(id)arg1 ;
-(void)executionDidBegin;
-(TVHKMediaLibraryRequestSession *)requestSession;
-(id)initWithRequest:(id)arg1 requestSession:(id)arg2 ;
-(void)_handleResponse:(id)arg1 error:(id)arg2 ;
@end

