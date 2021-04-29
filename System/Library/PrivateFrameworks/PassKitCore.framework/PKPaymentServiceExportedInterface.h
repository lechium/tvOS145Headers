/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKPaymentServiceExportedInterface
@required
-(void)didReceiveDeviceSharingCapabilities:(id)arg1 forHandle:(id)arg2;
-(void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
-(void)paymentDeviceDidExitField;
-(void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
-(void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateBalanceReminder:(id)arg2 forBalanceWithIdentifier:(id)arg3;
-(void)transactionSourceIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2;
-(void)passWithUniqueIdentifier:(id)arg1 didReceiveValueAddedServiceTransaction:(id)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateCategoryVisualizationWithStyle:(long long)arg2;
-(void)featureApplicationAdded:(id)arg1;
-(void)featureApplicationRemoved:(id)arg1;
-(void)featureApplicationChanged:(id)arg1;
-(void)didUpdateFamilyMembers:(id)arg1;
-(void)transactionBatch:(id)arg1 moreComing:(BOOL)arg2 readyForNextBatch:(/*^block*/id)arg3;
-(void)didRecieveCredentialInvitation:(id)arg1;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateCredential:(id)arg2;
-(void)transactionWithIdentifier:(id)arg1 didDownloadTransactionReceipt:(id)arg2;
-(void)didRecieveBannerToDisplay:(id)arg1;

@end

