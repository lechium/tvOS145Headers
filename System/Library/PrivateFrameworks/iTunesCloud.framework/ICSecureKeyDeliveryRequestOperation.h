/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/ICAsyncOperation.h>

@class ICSecureKeyDeliveryRequest;

@interface ICSecureKeyDeliveryRequestOperation : ICAsyncOperation {

	ICSecureKeyDeliveryRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) ICSecureKeyDeliveryRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                //@synthesize responseHandler=_responseHandler - In the implementation block
-(ICSecureKeyDeliveryRequest *)request;
-(void)execute;
-(void)setRequest:(ICSecureKeyDeliveryRequest *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(id)_createDefaultProtocolRequestBodyUsingPlaybackContextData:(id)arg1 ;
-(id)_createAudioProtocolRequestBodyUsingPlaybackContextData:(id)arg1 ;
-(void)_createServerPlaybackContextUsingCertificateData:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
