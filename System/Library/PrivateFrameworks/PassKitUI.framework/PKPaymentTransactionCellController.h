/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PKPaymentTransactionIconGenerator, PKContactResolver;

@interface PKPaymentTransactionCellController : NSObject {

	PKPaymentTransactionIconGenerator* _iconGenerator;
	PKContactResolver* _contactResolver;

}

@property (nonatomic,readonly) PKContactResolver * contactResolver;              //@synthesize contactResolver=_contactResolver - In the implementation block
-(PKContactResolver *)contactResolver;
-(void)_updatePrimaryLabelOnTransactionCell:(id)arg1 withPeerPaymentCounterpartHandle:(id)arg2 contact:(id)arg3 ;
-(void)_updateAvatarOnTransactionCell:(id)arg1 withTransaction:(id)arg2 contact:(id)arg3 ;
-(id)initWithContactResolver:(id)arg1 ;
-(void)configureCell:(id)arg1 forTransaction:(id)arg2 transactionSource:(id)arg3 familyMember:(id)arg4 account:(id)arg5 detailStyle:(long long)arg6 deviceName:(id)arg7 ;
@end

