/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKActivityEventTransaction.h>

@class PKPaymentTransaction;

@interface PKActivityEventPeerPaymentTransaction : PKActivityEventTransaction {

	PKPaymentTransaction* _relatedTopUpFundingSourceWithdrawlTransaction;
	PKPaymentTransaction* _relatedTopUpPeerPaymentAccountDepositTransaction;

}

@property (nonatomic,readonly) PKPaymentTransaction * relatedTopUpFundingSourceWithdrawlTransaction;                 //@synthesize relatedTopUpFundingSourceWithdrawlTransaction=_relatedTopUpFundingSourceWithdrawlTransaction - In the implementation block
@property (nonatomic,readonly) PKPaymentTransaction * relatedTopUpPeerPaymentAccountDepositTransaction;              //@synthesize relatedTopUpPeerPaymentAccountDepositTransaction=_relatedTopUpPeerPaymentAccountDepositTransaction - In the implementation block
-(unsigned long long)hash;
-(id)eventType;
-(BOOL)isEqualToActivityEvent:(id)arg1 ;
-(id)initWithTransaction:(id)arg1 relatedTopUpWithdrawlTransaction:(id)arg2 relatedTopUpDepositTransaction:(id)arg3 unread:(BOOL)arg4 ;
-(PKPaymentTransaction *)relatedTopUpFundingSourceWithdrawlTransaction;
-(PKPaymentTransaction *)relatedTopUpPeerPaymentAccountDepositTransaction;
@end

