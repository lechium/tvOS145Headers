/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString, NSArray, NSData;

@interface PKPeerPaymentStatusResponse : PKPeerPaymentWebServiceResponse {

	long long _status;
	NSString* _paymentIdentifier;
	NSString* _transactionIdentifier;
	NSArray* _actions;
	NSData* _amountHash;

}

@property (nonatomic,readonly) long long status;                                   //@synthesize status=_status - In the implementation block
@property (nonatomic,copy,readonly) NSString * paymentIdentifier;                  //@synthesize paymentIdentifier=_paymentIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                             //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy,readonly) NSData * amountHash;                           //@synthesize amountHash=_amountHash - In the implementation block
-(id)initWithData:(id)arg1 ;
-(long long)status;
-(NSArray *)actions;
-(NSString *)transactionIdentifier;
-(NSString *)paymentIdentifier;
-(BOOL)amountHashIsValidForAmount:(id)arg1 andCurrency:(id)arg2 ;
-(NSData *)amountHash;
@end

