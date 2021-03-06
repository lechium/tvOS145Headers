/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssetCacheServices.framework/AssetCacheServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssetCacheServices/ACSURLSessionTask.h>

@class NSURLRequest, NSError;

@interface ACSURLSessionDownloadTask : ACSURLSessionTask {

	/*^block*/id __clientLocationCompletionHandler;
	NSURLRequest* __resumedOriginalRequest;
	NSError* __deferredLinkError;

}

@property (copy) id _clientLocationCompletionHandler;                   //@synthesize _clientLocationCompletionHandler=__clientLocationCompletionHandler - In the implementation block
@property (retain) NSURLRequest * _resumedOriginalRequest;              //@synthesize _resumedOriginalRequest=__resumedOriginalRequest - In the implementation block
@property (retain) NSError * _deferredLinkError;                        //@synthesize _deferredLinkError=__deferredLinkError - In the implementation block
@property (copy,readonly) NSURLRequest * originalRequest; 
-(NSURLRequest *)originalRequest;
-(void)cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(id)initWithNSURLDownloadTaskCreator:(/*^block*/id)arg1 initialRequest:(id)arg2 forSession:(id)arg3 ;
-(void)set_resumedOriginalRequest:(NSURLRequest *)arg1 ;
-(BOOL)_isUpload;
-(NSError *)_deferredLinkError;
-(void)set_deferredLinkError:(NSError *)arg1 ;
-(NSURLRequest *)_resumedOriginalRequest;
-(id)_clientLocationCompletionHandler;
-(void)set_clientLocationCompletionHandler:(id)arg1 ;
@end

