/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAsyncOperation.h>

@class NSOperationQueue, MPModelLibraryImportChangeRequest;

@interface MPModelLibraryImportChangeRequestOperation : MPAsyncOperation {

	NSOperationQueue* _operationQueue;
	MPModelLibraryImportChangeRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPModelLibraryImportChangeRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                       //@synthesize responseHandler=_responseHandler - In the implementation block
-(MPModelLibraryImportChangeRequest *)request;
-(void)execute;
-(void)setRequest:(MPModelLibraryImportChangeRequest *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
@end
