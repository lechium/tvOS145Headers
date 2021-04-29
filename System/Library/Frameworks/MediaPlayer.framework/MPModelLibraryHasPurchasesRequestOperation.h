/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryHasPurchasesRequest;

@interface MPModelLibraryHasPurchasesRequestOperation : MPAsyncOperation {

	MPModelLibraryHasPurchasesRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPModelLibraryHasPurchasesRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                       //@synthesize responseHandler=_responseHandler - In the implementation block
-(MPModelLibraryHasPurchasesRequest *)request;
-(void)execute;
-(void)setRequest:(MPModelLibraryHasPurchasesRequest *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
@end
