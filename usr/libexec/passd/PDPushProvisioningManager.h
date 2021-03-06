//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, PDAssertionManager, PDCardFileManager, PDDatabaseManager, PDFamilyCircleManager, PDPaymentWebServiceCoordinator, PDUserNotificationManager, PKSecureElement;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface PDPushProvisioningManager : NSObject
{
    PDAssertionManager *_assertionManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_replyQueue;	// 24 = 0x18
    NSMutableSet *_availableSharingMetaData;	// 32 = 0x20
    _Bool _isUpdatingPushProvisioningSharingIdentifier;	// 40 = 0x28
    NSObject<OS_os_transaction> *_updatingPushProvisioningSharingIdentifierTransaction;	// 48 = 0x30
    NSMutableArray *_pendingPushProvisioningSharingIdentifierUpdateBlocks;	// 56 = 0x38
    PDDatabaseManager *_databaseManager;	// 64 = 0x40
    PDCardFileManager *_cardFileManager;	// 72 = 0x48
    PDPaymentWebServiceCoordinator *_webServiceCoordinator;	// 80 = 0x50
    PKSecureElement *_secureElement;	// 88 = 0x58
    PDUserNotificationManager *_userNotificationManager;	// 96 = 0x60
    PDFamilyCircleManager *_familyCircleManager;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000010008e3b4
@property(retain, nonatomic) PDFamilyCircleManager *familyCircleManager; // @synthesize familyCircleManager=_familyCircleManager;
@property(retain, nonatomic) PDUserNotificationManager *userNotificationManager; // @synthesize userNotificationManager=_userNotificationManager;
@property(retain, nonatomic) PKSecureElement *secureElement; // @synthesize secureElement=_secureElement;
@property(retain, nonatomic) PDPaymentWebServiceCoordinator *webServiceCoordinator; // @synthesize webServiceCoordinator=_webServiceCoordinator;
@property(retain, nonatomic) PDCardFileManager *cardFileManager; // @synthesize cardFileManager=_cardFileManager;
@property(retain, nonatomic) PDDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
- (id)_encryptProvisioningTarget:(id)arg1 devSigned:(_Bool)arg2 certificateChain:(id)arg3 error:(id *)arg4;	// IMP=0x000000010008e0b0
- (void)redeemProvisioningSharingIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010008d6c8
- (void)redeemEncryptedProvisioningTarget:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010008d048
- (void)prepareProvisioningTarget:(id)arg1 checkFamilyCircle:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010008c0b8
- (void)_redeemPushProvisioningSharingMetadata:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010008b76c
- (void)_queue_provisionAvailablePushProvisioningSharingIdentifiersWithCompletions:(id)arg1;	// IMP=0x000000010008ae10
- (void)_queue_performProvisioningForNextProvisioningSharingIdentifierWithExistingTransaction:(id)arg1;	// IMP=0x000000010008ad44
- (void)provisionAvailablePushProvisioningSharingIdentifiersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010008ac10
- (void)_queue_insertOrUpdatePushProvisioningSharingMetadata:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010008aab8
- (void)pushProvisioningNoncesWithCredentialCount:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010008a5e4
- (void)provideEncryptedPushProvisioningTarget:(id)arg1 sharingInstanceIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010008a418
- (void)statusForShareableCredentials:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100089ae8
- (void)pushProvisioningSharingIdentifiers:(CDUnknownBlockType)arg1;	// IMP=0x0000000100089928
- (void)isPushProvisioningSupportedForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100089488
- (id)initWithDataBaseManager:(id)arg1 cardFileManager:(id)arg2 userNoticationManager:(id)arg3 paymentWebServiceCoordinator:(id)arg4 familyCircleManager:(id)arg5 secureElement:(id)arg6 assertionManager:(id)arg7;	// IMP=0x0000000100089248

@end

