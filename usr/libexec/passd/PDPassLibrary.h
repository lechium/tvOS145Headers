//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PDXPCService.h>

#import "PDPassLibraryExtendedExportedInterface-Protocol.h"
#import "PDRemoteInterfacePresenterObserver-Protocol.h"

@class NSMutableArray, NSString, PDAccountManager, PDAppletSubcredentialManager, PDCardFileManager, PDDatabaseManager, PDDefaultPassManager, PDExpressPassManager, PDExpressTransitUpgradeController, PDPaymentWebServiceCoordinator, PDPushProvisioningManager, PDRelevantPassProvider, PDRemoteInterfacePresenter, PDSpotlightIndexer, PDUserNotificationManager, PDWebServicesCoordinator, PKEntitlementWhitelist, PKIDSManager, PKSecureElement, PKUsageNotificationServer;
@protocol PDPassLibraryDelegate;

@interface PDPassLibrary : PDXPCService <PDRemoteInterfacePresenterObserver, PDPassLibraryExtendedExportedInterface>
{
    PKEntitlementWhitelist *_whitelist;	// 8 = 0x8
    NSMutableArray *_userNotifications;	// 16 = 0x10
    PKSecureElement *_secureElement;	// 24 = 0x18
    PDPaymentWebServiceCoordinator *_paymentWebServicesCoordinator;	// 32 = 0x20
    PDWebServicesCoordinator *_webServicesCoordinator;	// 40 = 0x28
    PDCardFileManager *_cardFileManager;	// 48 = 0x30
    PDDatabaseManager *_databaseManager;	// 56 = 0x38
    PDExpressPassManager *_expressPassManager;	// 64 = 0x40
    PDUserNotificationManager *_userNotificationManager;	// 72 = 0x48
    PDRelevantPassProvider *_relevantPassProvider;	// 80 = 0x50
    PKUsageNotificationServer *_usageNotificationServer;	// 88 = 0x58
    PDRemoteInterfacePresenter *_remoteInterfacePresenter;	// 96 = 0x60
    PKIDSManager *_idsManager;	// 104 = 0x68
    PDSpotlightIndexer *_spotlightIndexer;	// 112 = 0x70
    PDExpressTransitUpgradeController *_expressUpgradeController;	// 120 = 0x78
    PDAccountManager *_accountManager;	// 128 = 0x80
    PDAppletSubcredentialManager *_subcredentialManager;	// 136 = 0x88
    PDPushProvisioningManager *_pushProvisioningManager;	// 144 = 0x90
    PDDefaultPassManager *_defaultPassManager;	// 152 = 0x98
    id <PDPassLibraryDelegate> _delegate;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0000000100045690
@property(nonatomic) __weak id <PDPassLibraryDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PDDefaultPassManager *defaultPassManager; // @synthesize defaultPassManager=_defaultPassManager;
@property(retain, nonatomic) PDPushProvisioningManager *pushProvisioningManager; // @synthesize pushProvisioningManager=_pushProvisioningManager;
@property(retain, nonatomic) PDAppletSubcredentialManager *subcredentialManager; // @synthesize subcredentialManager=_subcredentialManager;
@property(retain, nonatomic) PDAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(retain, nonatomic) PDExpressTransitUpgradeController *expressUpgradeController; // @synthesize expressUpgradeController=_expressUpgradeController;
@property(retain, nonatomic) PDSpotlightIndexer *spotlightIndexer; // @synthesize spotlightIndexer=_spotlightIndexer;
@property(retain, nonatomic) PKIDSManager *idsManager; // @synthesize idsManager=_idsManager;
@property(retain, nonatomic) PDRemoteInterfacePresenter *remoteInterfacePresenter; // @synthesize remoteInterfacePresenter=_remoteInterfacePresenter;
@property(retain, nonatomic) PKUsageNotificationServer *usageNotificationServer; // @synthesize usageNotificationServer=_usageNotificationServer;
@property(retain, nonatomic) PDRelevantPassProvider *relevantPassProvider; // @synthesize relevantPassProvider=_relevantPassProvider;
@property(retain, nonatomic) PDUserNotificationManager *userNotificationManager; // @synthesize userNotificationManager=_userNotificationManager;
@property(retain, nonatomic) PDExpressPassManager *expressPassManager; // @synthesize expressPassManager=_expressPassManager;
@property(retain, nonatomic) PDDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
@property(retain, nonatomic) PDCardFileManager *cardFileManager; // @synthesize cardFileManager=_cardFileManager;
@property(retain, nonatomic) PDWebServicesCoordinator *webServicesCoordinator; // @synthesize webServicesCoordinator=_webServicesCoordinator;
@property(retain, nonatomic) PDPaymentWebServiceCoordinator *paymentWebServicesCoordinator; // @synthesize paymentWebServicesCoordinator=_paymentWebServicesCoordinator;
@property(retain, nonatomic) PKSecureElement *secureElement; // @synthesize secureElement=_secureElement;
- (void)spotlightStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004526c
- (void)spotlightResetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100045038
- (void)spotlightReindexContentWithIdentifiers:(id)arg1 acknowledgement:(CDUnknownBlockType)arg2;	// IMP=0x0000000100044ea4
- (void)spotlightReindexAllContentWithAcknowledgement:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044d40
- (void)forceImmediateRevocationCheck;	// IMP=0x0000000100044c64
- (void)removeAllScheduledActivities;	// IMP=0x0000000100044ab4
- (void)pendingUserNotificationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044994
- (void)issueWalletUserNotificationWithTitle:(id)arg1 message:(id)arg2 forPassUniqueIdentifier:(id)arg3 customActionRoute:(id)arg4;	// IMP=0x00000001000447cc
- (void)shuffleGroups:(int)arg1;	// IMP=0x00000001000446cc
- (void)noteAccountDeletedWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000444ac
- (void)noteAccountChangedWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044320
- (void)introduceDatabaseIntegrityProblem;	// IMP=0x000000010004423c
- (void)getDiffForPassUpdateUserNotificationWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000440c4
- (_Bool)_writePass:(id)arg1 withSettings:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000100044010
- (_Bool)_writePass:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100043ff0
- (void)_addPasses:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100043ae8
- (void)_getPassWithUniqueID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000439f8
- (_Bool)_entitledForPassTypeID:(id)arg1 teamID:(id)arg2 associatedPassTypeIdentifiers:(id)arg3 associatedApplicationIdentifiers:(id)arg4 forActions:(unsigned long long)arg5;	// IMP=0x0000000100043678
- (_Bool)_entitledForPassType:(unsigned long long)arg1 uniqueIdentifier:(id)arg2 actions:(unsigned long long)arg3;	// IMP=0x000000010004351c
- (_Bool)_entitledForUniqueID:(id)arg1 forActions:(unsigned long long)arg2;	// IMP=0x0000000100043504
- (_Bool)_entitledForObject:(id)arg1 forActions:(unsigned long long)arg2;	// IMP=0x0000000100043384
- (id)_entitlementFilteredPasses:(id)arg1;	// IMP=0x0000000100043258
- (void)_sanitizePasses:(id)arg1;	// IMP=0x0000000100043130
- (id)_sanitizePassIfNeeded:(id)arg1;	// IMP=0x00000001000430c0
- (void)contactlessInterfaceDidDismissFromSource:(long long)arg1;	// IMP=0x0000000100043028
- (void)contactlessInterfaceDidPresentFromSource:(long long)arg1;	// IMP=0x0000000100042f90
- (void)supportsSearchForPassUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100042da8
- (void)pushProvisioningNoncesWithCredentialCount:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100042c74
- (void)supportsDisbursements:(CDUnknownBlockType)arg1;	// IMP=0x0000000100042a20
- (void)canAddCarKeyWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004281c
- (void)canShareShareableSecureElementPassWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000426c4
- (void)canAddSecureElementPassWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000422fc
- (void)setBackupMetadata:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100041ea4
- (void)backupMetadataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100041ad4
- (void)signData:(id)arg1 forPassUniqueID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100041268
- (void)migrateDataWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100041128
- (void)fetchCurrentRelevantPassInfo:(CDUnknownBlockType)arg1;	// IMP=0x0000000100041118
- (void)fetchHasCandidatePasses:(CDUnknownBlockType)arg1;	// IMP=0x0000000100040fc4
- (void)recomputeRelevantPassesWithSearchMode:(long long)arg1;	// IMP=0x0000000100040fc0
- (void)personalizePassWithUniqueIdentifier:(id)arg1 contact:(id)arg2 personalizationToken:(id)arg3 requiredPersonalizationFields:(unsigned long long)arg4 personalizationSource:(unsigned long long)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100040db8
- (void)updateObjectWithUniqueIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100040c78
- (void)resetApplePayWithDiagnosticReason:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100040ae8
- (void)removePassesOfType:(unsigned long long)arg1 withDiagnosticReason:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010004097c
- (void)removePassesWithUniqueIDs:(id)arg1 diagnosticReason:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100040694
- (void)removePassWithUniqueID:(id)arg1 diagnosticReason:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000404c0
- (void)addPassesWithData:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003fcf4
- (void)noteObjectSharedWithUniqueID:(id)arg1;	// IMP=0x000000010003fbac
- (void)rescheduleCommutePlanRenewalReminderForPassWithUniqueID:(id)arg1;	// IMP=0x000000010003fa48
- (void)updateSettings:(unsigned long long)arg1 forObjectWithUniqueID:(id)arg2;	// IMP=0x000000010003f91c
- (void)usingSynchronousProxy:(_Bool)arg1 getImageSetContainerForUniqueID:(id)arg2 type:(long long)arg3 withDisplayProfile:(id)arg4 suffix:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x000000010003f708
- (void)getImageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 suffix:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000010003f5cc
- (void)usingSynchronousProxy:(_Bool)arg1 getCachedImageSetContainerForUniqueID:(id)arg2 type:(long long)arg3 withDisplayProfile:(id)arg4 displayTraits:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x000000010003f3b8
- (void)usingSynchronousProxy:(_Bool)arg1 getContentForUniqueID:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010003f240
- (void)getContentForUniqueID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003f228
- (void)replacePassWithPassData:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003f01c
- (void)getManifestHashAndSettingsForPassTypeID:(id)arg1 serialNumber:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010003ed04
- (void)getRouteRelevantPassesForLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003e148
- (void)getPassWithPassTypeID:(id)arg1 serialNumber:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010003e06c
- (void)usingSynchronousProxy:(_Bool)arg1 passLocalizedStringForKey:(id)arg2 uniqueID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010003def8
- (void)getDataForBundleResources:(id)arg1 objectUniqueIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010003ddc4
- (void)getDataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 objectUniqueIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000010003dc74
- (void)getArchivedObjectWithUniqueID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003db60
- (void)isPassbookVisibleWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003daf8
- (void)isRemovingPassesOfType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003da58
- (void)passWithDPANIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003d93c
- (void)passWithFPANIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003d85c
- (void)postUpgradedPassNotificationForMarket:(id)arg1 passUniqueID:(id)arg2;	// IMP=0x000000010003d58c
- (void)checkForTransitNotification;	// IMP=0x000000010003d480
- (void)_transitTopUpMessage:(id)arg1 passes:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003cbc4
- (void)_transitDCIMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003b988
- (void)transitMessageForRouteInfo:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003b3c0
- (void)supportedTransitPartnersForDigitalIssuance:(CDUnknownBlockType)arg1;	// IMP=0x000000010003abc4
- (void)sortedTransitPassesForAppletDataFormat:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003a298
- (void)expressTransitPassWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010003a028
- (void)peerPaymentPassUniqueIDWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100039f24
- (void)defaultPaymentPassWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100039d5c
- (void)countPassesOfType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100039bdc
- (void)canAddPassesOfType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000399dc
- (void)hasPassesOfType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003996c
- (id)_filteredPasses:(id)arg1 forApplicationIdentifier:(id)arg2;	// IMP=0x00000001000397f8
- (id)_filteredPasses:(id)arg1 forWebDomain:(id)arg2;	// IMP=0x0000000100039684
- (void)enabledValueAddedServicePassesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000394f0
- (void)getMetadataForFieldWithProperties:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100039324
- (void)getPassesWithUniqueIdentifiers:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000390a4
- (void)hasInAppPrivateLabelPaymentPassesForWebDomain:(id)arg1 issuerCountryCodes:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100038ef8
- (void)hasInAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 issuerCountryCodes:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100038d4c
- (void)inAppPrivateLabelPaymentPassesForWebDomain:(id)arg1 issuerCountryCodes:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100038bac
- (void)inAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 issuerCountryCodes:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000389d0
- (id)_inAppPrivateLabelPaymentPassesForWebDomain:(id)arg1 issuerCountryCodes:(id)arg2 paymentApplicationStates:(id)arg3;	// IMP=0x0000000100038840
- (id)_inAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 issuerCountryCodes:(id)arg2 paymentApplicationStates:(id)arg3;	// IMP=0x00000001000385a4
- (void)_paymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2 issuerCountryCodes:(id)arg3 webPayment:(_Bool)arg4 paymentApplicationStates:(id)arg5 withHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100038064
- (void)_passesWithSupportedNetworks:(id)arg1 merchantCapabilities:(unsigned long long)arg2 webDomain:(id)arg3 issuerCountryCodes:(id)arg4 paymentApplicationStates:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100037e24
- (_Bool)_hasPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2 paymentApplicationStates:(id)arg3;	// IMP=0x0000000100037d10
- (void)_hasPassesWithSupportedNetworks:(id)arg1 merchantCapabilities:(unsigned long long)arg2 webDomain:(id)arg3 issuerCountryCodes:(id)arg4 paymentApplicationStates:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00000001000379e8
- (void)hasPassesWithSupportedNetworks:(id)arg1 merchantCapabilities:(unsigned long long)arg2 webDomain:(id)arg3 issuerCountryCodes:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001000379cc
- (void)hasInAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2 issuerCountryCodes:(id)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000376c4
- (void)inAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2 issuerCountryCodes:(id)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100037484
- (void)getPassWithUniqueID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000373b0
- (void)notifyPassUsedWithIdentifier:(id)arg1 fromSource:(long long)arg2;	// IMP=0x0000000100037330
- (void)sendUserEditedCatalog:(id)arg1;	// IMP=0x00000001000371f4
- (void)usingSynchronousProxy:(_Bool)arg1 getPaymentPassesPendingActivationWithHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100036f80
- (void)usingSynchronousProxy:(_Bool)arg1 getPassesAndCatalogOfPassTypes:(unsigned long long)arg2 limitResults:(_Bool)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100036ca4
- (void)getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 limitResults:(_Bool)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100036c88
- (void)isPaymentPassActivationAvailableWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100036c3c
- (void)canPresentPaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100035f84
- (void)presentContactlessInterfaceForPassWithUniqueIdentifier:(id)arg1 fromSource:(long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100035d94
- (void)presentContactlessInterfaceForDefaultPassFromSource:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100035d28
- (void)openDigitalIssuanceUIForIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100035c9c
- (void)paymentPassWithAssociatedAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000359d0
- (void)presentPaymentSetupRequest:(id)arg1 orientation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100035820
- (void)paymentSetupFeaturesForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000352a4
- (_Bool)_isConfigurationValid:(id)arg1;	// IMP=0x0000000100035134
- (void)openPaymentUIWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100034d90
- (void)openWalletUIWithRelevantPass:(id)arg1;	// IMP=0x0000000100034b90
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forPassWithUniqueID:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100034a94
- (void)canAddFelicaPassWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100034a44
- (void)usingSynchronousProxy:(_Bool)arg1 getPassForProvisioningCredentialHash:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100034810
- (void)usingSynchronousProxy:(_Bool)arg1 getPassesOfStyles:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100034600
- (void)getPassesOfType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003452c
- (void)getPassesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100034460
- (void)sendCatalogChanged:(id)arg1;	// IMP=0x00000001000343e0
- (void)sendPassRemoved:(id)arg1 catalog:(id)arg2;	// IMP=0x00000001000342c0
- (void)sendPassUpdated:(id)arg1 catalog:(id)arg2;	// IMP=0x0000000100034140
- (void)sendPassAdded:(id)arg1 catalog:(id)arg2;	// IMP=0x0000000100033fc0
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100033f84
- (id)remoteObjectProxy;	// IMP=0x0000000100033f48
- (void)clearConnectionReference;	// IMP=0x0000000100033e04
@property(readonly, nonatomic) _Bool willSanitizePasses;
- (void)dealloc;	// IMP=0x0000000100033cfc
- (id)initWithConnection:(id)arg1;	// IMP=0x0000000100033c38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

