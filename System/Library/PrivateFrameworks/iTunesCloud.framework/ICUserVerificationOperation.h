/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/ICAsyncOperation.h>

@class ICUserVerificationRequest;

@interface ICUserVerificationOperation : ICAsyncOperation {

	ICUserVerificationRequest* _verificationRequest;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy,readonly) ICUserVerificationRequest * verificationRequest;              //@synthesize verificationRequest=_verificationRequest - In the implementation block
@property (nonatomic,copy) id responseHandler;                                                    //@synthesize responseHandler=_responseHandler - In the implementation block
+(id)operationWithVerificationRequest:(id)arg1 ;
-(void)execute;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(ICUserVerificationRequest *)verificationRequest;
@end
