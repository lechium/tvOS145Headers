/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKXPCServiceDelegate.h>
#import <libobjc.A.dylib/PKPaymentServiceExportedInterface.h>
#import <libobjc.A.dylib/PKTapToRadarDelegate.h>

@protocol PKPaymentServiceDelegate;
@class PKXPCService, NSMutableArray, PKFieldProperties, PKExpressTransactionState, NSString, PKPaymentWebServiceContext;

@interface PKPaymentService : NSObject <PKXPCServiceDelegate, PKPaymentServiceExportedInterface, PKTapToRadarDelegate> {

	PKXPCService* _remoteService;
	unsigned long long _interfaceType;
	AB _cachedFieldPropertiesValid;
	BOOL _hasPaymentDeviceFieldProperties;
	BOOL _forceConnectionOnResume;
	os_unfair_lock_s _pendingInvitationRequestsLock;
	NSMutableArray* _pendingInvitationRequests;
	id<PKPaymentServiceDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL hasPaymentDeviceFieldProperties; 
@property (nonatomic,__weak,readonly) PKFieldProperties * paymentDeviceFieldProperties; 
@property (nonatomic,readonly) PKExpressTransactionState * outstandingExpressTransactionState; 
@property (nonatomic,retain) NSString * defaultPaymentPassUniqueIdentifier; 
@property (nonatomic,retain) PKPaymentWebServiceContext * sharedPaymentWebServiceContext; 
@property (assign,nonatomic,__weak) id<PKPaymentServiceDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<PKPaymentServiceDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentServiceDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)_remoteObjectProxy;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)downloadAllPaymentPasses;
-(void)setDefaultPaymentPassUniqueIdentifier:(NSString *)arg1 ;
-(void)enforceUpgradedPasscodePolicyWithCompletion:(/*^block*/id)arg1 ;
-(void)featureApplicationsForProvisioningWithCompletion:(/*^block*/id)arg1 ;
-(void)performDeviceCheckInWithCompletion:(/*^block*/id)arg1 ;
-(void)familyMembersWithCompletion:(/*^block*/id)arg1 ;
-(void)storePassOwnershipToken:(id)arg1 withIdentifier:(id)arg2 ;
-(void)passOwnershipTokenWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2 ;
-(void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performProductActionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1 ;
-(void)consistencyCheck;
-(void)setSharedPaymentWebServiceContext:(PKPaymentWebServiceContext *)arg1 ;
-(void)isPassExpressWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withReferenceExpressState:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sanitizeExpressPasses;
-(void)accountAttestationAnonymizationSaltWithCompletion:(/*^block*/id)arg1 ;
-(void)setAccountAttestationAnonymizationSalt:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateMetadataOnPassWithIdentifier:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addSharingInvitationReceipts:(id)arg1 onCredentialWithIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeSharingInvitationReceiptWithIdentifiers:(id)arg1 onCredential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addSubcredential:(id)arg1 fromSharingInvitation:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)declineRelatedSharingInvitationsIfNecessary:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeSharingInvitation:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)requestBackgroundRegistrationForCredentialWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)canAcceptInvitation:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)credentialWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)subcredentialInvitationsWithCompletion:(/*^block*/id)arg1 ;
-(void)matchingInvitationOnDevice:(id)arg1 withTimeout:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)productsWithCompletion:(/*^block*/id)arg1 ;
-(void)initializeSecureElementIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(void)initializeSecureElement:(/*^block*/id)arg1 ;
-(NSString *)defaultPaymentPassUniqueIdentifier;
-(void)recomputeCategoryVisualizationMangitudesForPassUniqueID:(id)arg1 style:(long long)arg2 ;
-(BOOL)_hasInterfaceOfType:(unsigned long long)arg1 ;
-(id)_extendedRemoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)_extendedRemoteObjectProxy;
-(id)_extendedRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)remoteService:(id)arg1 didEstablishConnection:(id)arg2 ;
-(void)remoteService:(id)arg1 didInterruptConnection:(id)arg2 ;
-(void)remoteServiceDidSuspend:(id)arg1 ;
-(void)noteAccountDeleted;
-(void)didReceiveDeviceSharingCapabilities:(id)arg1 forHandle:(id)arg2 ;
-(void)sendDeviceSharingCapabilitiesRequestForHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)insertOrUpdatePaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)disbursementVoucherWithDisbursementSource:(unsigned long long)arg1 disbursementTarget:(unsigned long long)arg2 bundleIdentifier:(id)arg3 teamIdentifier:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_accessDelegate:(/*^block*/id)arg1 ;
-(void)paymentDeviceDidEnterFieldWithProperties:(id)arg1 ;
-(void)paymentDeviceDidExitField;
-(void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateBalanceReminder:(id)arg2 forBalanceWithIdentifier:(id)arg3 ;
-(void)transactionSourceIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2 ;
-(void)passWithUniqueIdentifier:(id)arg1 didReceiveValueAddedServiceTransaction:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateCategoryVisualizationWithStyle:(long long)arg2 ;
-(void)featureApplicationAdded:(id)arg1 ;
-(void)featureApplicationRemoved:(id)arg1 ;
-(void)featureApplicationChanged:(id)arg1 ;
-(void)didUpdateFamilyMembers:(id)arg1 ;
-(void)transactionBatch:(id)arg1 moreComing:(BOOL)arg2 readyForNextBatch:(/*^block*/id)arg3 ;
-(void)didRecieveCredentialInvitation:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateCredential:(id)arg2 ;
-(void)transactionWithIdentifier:(id)arg1 didDownloadTransactionReceipt:(id)arg2 ;
-(void)didRecieveBannerToDisplay:(id)arg1 ;
-(void)displayTapToRadarAlertForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_extendedSynchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3 usingSynchronousProxy:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)hasTransactionsForTransactionSourceIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)insertOrUpdatePaymentTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeMapsDataForTransactionWithIdentifier:(id)arg1 forTransactionSourceIdentifier:(id)arg2 issueReportIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 orderedByDate:(long long)arg6 limit:(long long)arg7 completion:(/*^block*/id)arg8 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)transactionCountByPeriodForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 calendar:(id)arg4 unit:(unsigned long long)arg5 includePurchaseTotal:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(void)cashbackByPeriodForTransactionSourceIdentifiers:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3 calendar:(id)arg4 calendarUnit:(unsigned long long)arg5 type:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg1 withPeerPaymentCounterpartHandles:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg1 matchingMerchant:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(/*^block*/id)arg6 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg1 withMerchantCategory:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 limit:(long long)arg7 completion:(/*^block*/id)arg8 ;
-(void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionType:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 limit:(long long)arg7 completion:(/*^block*/id)arg8 ;
-(void)approvedTransactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)pendingTransactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)transactionsWithTransactionSource:(unsigned long long)arg1 withBackingData:(unsigned long long)arg2 limit:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)transactionWithTransactionIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transactionSourceTypeForTransactionSourceIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transactionWithServiceIdentifier:(id)arg1 transactionSourceIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)transactionWithReferenceIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)installmentTransactionsForInstallmentPlanIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)installmentPlanTransactionsForTransactionSourceIdentifiers:(id)arg1 accountIdentifier:(id)arg2 withRedemptionType:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)transactionsForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)logoImageDataForTransactionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transactionsForPredicate:(id)arg1 limit:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)passUniqueIdentifierForTransactionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)passUniqueIdentifierForTransactionWithServiceIdentifier:(id)arg1 transactionSourceIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)ambiguousPassUniqueIdentifierForTransactionWithServiceIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)mapsMerchantsWithCompletion:(/*^block*/id)arg1 ;
-(id)expressPassInformationForMode:(id)arg1 ;
-(id)defaultExpressTransitPassIdentifier;
-(void)setDefaultExpressTransitPassIdentifier:(id)arg1 withCredential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)expressPassesInformationWithCardType:(long long)arg1 ;
-(void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeExpressPassesWithCardType:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)processTransitTransactionEventWithHistory:(id)arg1 transactionDate:(id)arg2 forPaymentApplication:(id)arg3 withPassUniqueIdentifier:(id)arg4 expressTransactionState:(id)arg5 ;
-(void)simulatePaymentPushTopic:(id)arg1 ;
-(void)scheduleDeviceCheckInWithStartTimeOffset:(double)arg1 ;
-(void)unscheduleDeviceCheckIn;
-(void)unscheduleDeviceUpgradeTaskActivity;
-(void)scheduleDeviceUpgradeTasksIfNecessaryWithRandomizeStartDate:(BOOL)arg1 ;
-(void)setDeviceUpgradeTasksContextBuildVersion:(id)arg1 upgradeTaskVersion:(long long)arg2 retryCount:(long long)arg3 ;
-(void)removeProductsCache;
-(void)scheduleAutomaticPresentationAvailableNotificationForPassWithUniqueIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(PKFieldProperties *)paymentDeviceFieldProperties;
-(void)_sharedPaymentWebServiceContextUsingSynchronousProxy:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateAllMapsBrandAndMerchantDataWithCompletion:(/*^block*/id)arg1 ;
-(void)requiresUpgradedPasscodeWithCompletion:(/*^block*/id)arg1 ;
-(void)registerAuxiliaryCapabilityForPassUniqueIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fetchBarcodesForPassUniqueIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)retrieveDecryptedBarcodeCredentialForPassUniqueIdentifier:(id)arg1 authorization:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)retrievePINEncryptionCertificateForPassUniqueIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)processedAuthenticationMechanism:(unsigned long long)arg1 forTransactionIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)markAuthenticationCompleteForTransactionIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)submitUserConfirmation:(BOOL)arg1 forTransactionIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)submitEncryptedPIN:(id)arg1 forTransactionIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)submitBarcodePaymentEvent:(id)arg1 forPassUniqueIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)familyMembersIgnoringCache:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)pendingFamilyMembersIgnoringCache:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)photosForFamilyMembersWithDSIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)defaultPaymentPassIngestionSpecificIdentifier:(/*^block*/id)arg1 ;
-(void)featureApplicationsForAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateFeatureApplicationsForAccountIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)featureApplicationsForAccountUserInvitationWithCompletion:(/*^block*/id)arg1 ;
-(void)featureApplicationWithReferenceIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)featureApplicationsWithCompletion:(/*^block*/id)arg1 ;
-(void)featureApplicationWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)submitApplyRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)submitDocumentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)submitTermsRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)submitDeleteRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)submitTransactionAnswerForTransaction:(id)arg1 questionType:(unsigned long long)arg2 answer:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)transactionsRequiringReviewForAccountWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)categoryVisualizationMagnitudesForPassUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDeviceCheckInContextBuildVersion:(id)arg1 outstandingAction:(long long)arg2 forRegion:(id)arg3 ;
-(void)addPlaceholderPassWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)registerCredentialsWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)revokeCredentialsWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sharingInvitationWasInvalidated:(id)arg1 withCredentialIdentifier:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)finishedKeyExchangeForCredential:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)didReceiveSharingInvitationWithIdentifier:(id)arg1 fromOriginatorIDSHandle:(id)arg2 sharingSessionIdentifier:(id)arg3 metadata:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)didReceiveSharingInvitationRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)didUpdateSharingInvitationWithIdentifier:(id)arg1 reason:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)pushProvisioningSharingIdentifiers:(/*^block*/id)arg1 ;
-(void)statusForShareableCredentials:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)provideEncryptedPushProvisioningTarget:(id)arg1 sharingInstanceIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)prepareProvisioningTarget:(id)arg1 checkFamilyCircle:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)redeemEncryptedProvisioningTarget:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)redeemProvisioningSharingIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transactionReceiptWithUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transactionReceiptForTransactionWithIdentifier:(id)arg1 updateIfNecessary:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)storeTransactionReceiptData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteTransactionReceiptWithUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendAllPassTransactions;
-(void)ambiguousTransactionWithServiceIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_existingRemoteObjectProxy;
-(id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 ;
-(id)messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 ;
-(void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3 ;
-(void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)approvedTransactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 ;
-(void)installmentPlansWithTransactionReferennceIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)messagesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)balancesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)balanceReminderThresholdForBalance:(id)arg1 pass:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setBalanceReminder:(id)arg1 forBalance:(id)arg2 pass:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)commutePlanReminderForCommputePlan:(id)arg1 pass:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setCommutePlanReminder:(id)arg1 forCommutePlan:(id)arg2 pass:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deletePaymentTransactionWithIdentifier:(id)arg1 ;
-(void)deleteAllTransactionsForTransactionSourceIdentifiers:(id)arg1 ;
-(void)deleteMessagesForPaymentPassWithUniqueIdentifier:(id)arg1 ;
-(void)archiveMessageWithIdentifier:(id)arg1 ;
-(void)insertOrUpdateValueAddedServiceTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentTransaction:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)valueAddedServiceTransactionsForPassWithUniqueIdentifier:(id)arg1 limit:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)valueAddedServiceTransactionsForPaymentTransaction:(id)arg1 limit:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)valueAddedServiceTransactionWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1 ;
-(id)defaultExpressFelicaTransitPassIdentifier;
-(void)setDefaultExpressFelicaTransitPassIdentifier:(id)arg1 withCredential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)expressPassInformationWithPassUniqueIdentifier:(id)arg1 ;
-(id)expressPassesInformationWithAutomaticSelectionTechnologyType:(long long)arg1 ;
-(id)expressPassesInformation;
-(void)simulateDefaultExpressTransitPassIdentifier:(id)arg1 forExpressMode:(id)arg2 ;
-(void)transitStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)simulatePaymentPush;
-(void)scheduleSetupReminders;
-(void)passbookUIServiceDidLaunch;
-(BOOL)displayBannerForPassWithUniqueID:(id)arg1 ;
-(id)bannerModelsToDisplay;
-(void)passbookBannerDidFinishDisplaying:(id)arg1 ;
-(void)passbookBannerDidLaunch;
-(BOOL)hasPaymentDeviceFieldProperties;
-(PKExpressTransactionState *)outstandingExpressTransactionState;
-(PKPaymentWebServiceContext *)sharedPaymentWebServiceContext;
-(void)sharedPaymentWebServiceContextWithCompletion:(/*^block*/id)arg1 ;
-(id)categoryVisualizationMagnitudesForPassUniqueID:(id)arg1 ;
@end

