/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSSet;

@interface PKPaymentSendOwnershipTokensRequest : PKPaymentWebServiceRequest {

	unsigned long long _reason;
	NSSet* _passOwnershipTokens;

}

@property (assign,nonatomic) unsigned long long reason;                //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSSet * passOwnershipTokens;              //@synthesize passOwnershipTokens=_passOwnershipTokens - In the implementation block
-(unsigned long long)reason;
-(void)setReason:(unsigned long long)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 deviceMetadata:(id)arg3 appleAccountInformation:(id)arg4 ;
-(NSSet *)passOwnershipTokens;
-(void)setPassOwnershipTokens:(NSSet *)arg1 ;
@end
