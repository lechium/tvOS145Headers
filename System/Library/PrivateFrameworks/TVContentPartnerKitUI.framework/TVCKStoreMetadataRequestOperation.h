/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class SSLookupResponse, NSError, SSLookupRequest, TVCKStoreMetadataRequestCompletionHandler;

@interface TVCKStoreMetadataRequestOperation : NSOperation {

	BOOL _executing;
	BOOL _finished;
	SSLookupResponse* _response;
	NSError* _error;
	SSLookupRequest* _lookupRequest;
	TVCKStoreMetadataRequestCompletionHandler* _completionHandler;

}

@property (nonatomic,retain) SSLookupRequest * lookupRequest;                                                   //@synthesize lookupRequest=_lookupRequest - In the implementation block
@property (assign,nonatomic,__weak) TVCKStoreMetadataRequestCompletionHandler * completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) SSLookupResponse * response;                                                       //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                                                                   //@synthesize error=_error - In the implementation block
-(id)init;
-(NSError *)error;
-(void)cancel;
-(void)setResponse:(SSLookupResponse *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(SSLookupResponse *)response;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(void)setCompletionHandler:(TVCKStoreMetadataRequestCompletionHandler *)arg1 ;
-(TVCKStoreMetadataRequestCompletionHandler *)completionHandler;
-(void)setLookupRequest:(SSLookupRequest *)arg1 ;
-(SSLookupRequest *)lookupRequest;
-(id)initWithLookupRequest:(id)arg1 ;
@end

