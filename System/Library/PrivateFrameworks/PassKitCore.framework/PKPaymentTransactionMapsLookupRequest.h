/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class PKPaymentTransaction, PKPaymentApplication, NSObject;

@interface PKPaymentTransactionMapsLookupRequest : NSObject {

	PKPaymentTransaction* _transaction;
	PKPaymentApplication* _paymentApplication;
	NSObject*<OS_dispatch_queue> _internalQueue;
	BOOL _clearingAttempt;

}

@property (assign,getter=isClearingAttempt,nonatomic) BOOL clearingAttempt;              //@synthesize clearingAttempt=_clearingAttempt - In the implementation block
-(id)_merchantLookupRequest;
-(id)_brandFromMapItem:(id)arg1 ;
-(id)_merchantFromMapItem:(id)arg1 ;
-(id)initWithTransaction:(id)arg1 paymentApplication:(id)arg2 ;
-(void)startLookupWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isClearingAttempt;
-(void)setClearingAttempt:(BOOL)arg1 ;
@end

