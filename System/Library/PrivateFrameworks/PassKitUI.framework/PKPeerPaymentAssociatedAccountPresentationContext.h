/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PKFamilyMember, PKPaymentTransaction;

@interface PKPeerPaymentAssociatedAccountPresentationContext : NSObject {

	PKFamilyMember* _member;
	PKPaymentTransaction* _transaction;
	long long _setupType;

}

@property (nonatomic,retain) PKFamilyMember * member;                         //@synthesize member=_member - In the implementation block
@property (nonatomic,retain) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic) long long setupType;                             //@synthesize setupType=_setupType - In the implementation block
-(id)description;
-(PKFamilyMember *)member;
-(PKPaymentTransaction *)transaction;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(long long)setupType;
-(void)setSetupType:(long long)arg1 ;
-(id)initWithFAFamilyMember:(id)arg1 options:(id)arg2 ;
-(id)initWithPKFamilyMember:(id)arg1 options:(id)arg2 ;
-(id)initWithPKFamilyMember:(id)arg1 transaction:(id)arg2 ;
-(id)initWithPKFamilyMember:(id)arg1 setupType:(long long)arg2 ;
-(void)setMember:(PKFamilyMember *)arg1 ;
@end
