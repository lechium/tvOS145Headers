/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSURL;

@interface PKPaymentRevokeSharedCredentialResponse : PKPaymentWebServiceResponse {

	NSURL* _passURL;

}

@property (nonatomic,readonly) NSURL * passURL;              //@synthesize passURL=_passURL - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSURL *)passURL;
@end
