/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKDashboardItem.h>

@class PKMerchant, PKPaymentTransaction, NSString, CNContact, PKPaymentTransactionGroup, PKInstallmentPlanProduct;

@interface PKTransactionHistoryHeaderItem : NSObject <PKDashboardItem> {

	unsigned long long _type;
	PKMerchant* _merchant;
	PKPaymentTransaction* _transaction;
	NSString* _peerPaymentCounterpartHandle;
	CNContact* _contact;
	PKPaymentTransactionGroup* _transactionGroup;
	long long _transactionType;
	PKInstallmentPlanProduct* _installmentProduct;
	unsigned long long _featureIdentifier;

}

@property (nonatomic,readonly) unsigned long long type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) PKMerchant * merchant;                                      //@synthesize merchant=_merchant - In the implementation block
@property (nonatomic,retain) PKPaymentTransaction * transaction;                         //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,copy) NSString * peerPaymentCounterpartHandle;                      //@synthesize peerPaymentCounterpartHandle=_peerPaymentCounterpartHandle - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                        //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) PKPaymentTransactionGroup * transactionGroup;               //@synthesize transactionGroup=_transactionGroup - In the implementation block
@property (assign,nonatomic) long long transactionType;                                  //@synthesize transactionType=_transactionType - In the implementation block
@property (nonatomic,retain) PKInstallmentPlanProduct * installmentProduct;              //@synthesize installmentProduct=_installmentProduct - In the implementation block
@property (assign,nonatomic) unsigned long long featureIdentifier;                       //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifier;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(PKPaymentTransaction *)transaction;
-(void)setTransactionType:(long long)arg1 ;
-(long long)transactionType;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
-(unsigned long long)featureIdentifier;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setFeatureIdentifier:(unsigned long long)arg1 ;
-(PKMerchant *)merchant;
-(void)setPeerPaymentCounterpartHandle:(NSString *)arg1 ;
-(void)setMerchant:(PKMerchant *)arg1 ;
-(NSString *)peerPaymentCounterpartHandle;
-(PKPaymentTransactionGroup *)transactionGroup;
-(void)setTransactionGroup:(PKPaymentTransactionGroup *)arg1 ;
-(PKInstallmentPlanProduct *)installmentProduct;
-(void)setInstallmentProduct:(PKInstallmentPlanProduct *)arg1 ;
@end

