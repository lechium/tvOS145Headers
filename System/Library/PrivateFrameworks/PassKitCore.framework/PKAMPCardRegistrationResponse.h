/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSURL, NSError;

@interface PKAMPCardRegistrationResponse : NSObject <NSSecureCoding> {

	NSData* _cardData;
	NSURL* _brokerURL;
	NSURL* _paymentServicesURL;
	NSError* _error;

}

@property (retain) NSData * cardData;                       //@synthesize cardData=_cardData - In the implementation block
@property (retain) NSURL * brokerURL;                       //@synthesize brokerURL=_brokerURL - In the implementation block
@property (retain) NSURL * paymentServicesURL;              //@synthesize paymentServicesURL=_paymentServicesURL - In the implementation block
@property (retain) NSError * error;                         //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSData *)cardData;
-(void)setCardData:(NSData *)arg1 ;
-(id)initWithCardData:(id)arg1 brokerURL:(id)arg2 paymentServicesURL:(id)arg3 error:(id)arg4 ;
-(NSURL *)brokerURL;
-(void)setBrokerURL:(NSURL *)arg1 ;
-(NSURL *)paymentServicesURL;
-(void)setPaymentServicesURL:(NSURL *)arg1 ;
@end

