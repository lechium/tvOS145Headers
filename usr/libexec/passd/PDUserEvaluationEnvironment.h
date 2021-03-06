//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDecimalNumber, NSDictionary, NSSet, NSString, PDAccountManager, PDApplyManager, PDDatabaseManager, PDFamilyCircleManager, PDPaymentWebServiceCoordinator, PDPeerPaymentWebServiceCoordinator, PDTransitNotificationService, PKAccount, PKFeatureApplication, PKPeerPaymentAccount;

@interface PDUserEvaluationEnvironment : NSObject
{
    PDAccountManager *_accountManager;	// 8 = 0x8
    PDApplyManager *_applyManager;	// 16 = 0x10
    PDDatabaseManager *_databaseManager;	// 24 = 0x18
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;	// 32 = 0x20
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 40 = 0x28
    PDTransitNotificationService *_transitNotificationService;	// 48 = 0x30
    PDFamilyCircleManager *_familyCircleManager;	// 56 = 0x38
    NSSet *_prefetchedCreditAccounts;	// 64 = 0x40
    NSDictionary *_prefetchedCreditAccountUsers;	// 72 = 0x48
    PKAccount *_prefetchedDefaultCreditAccount;	// 80 = 0x50
    NSString *_defaultPassUniqueIdentifier;	// 88 = 0x58
    long long _daysSinceLastDefaultCreditAccountTransaction;	// 96 = 0x60
    long long _daysSinceLastApplePayTransaction;	// 104 = 0x68
    long long _daysSinceLastPeerPaymentTransaction;	// 112 = 0x70
    NSArray *_prefetchedCreditApplications;	// 120 = 0x78
    PKFeatureApplication *_prefetchedCurrentCreditApplication;	// 128 = 0x80
    PKPeerPaymentAccount *_prefetchedPeerPaymentAccount;	// 136 = 0x88
    NSArray *_prefetchedSetupFeatures;	// 144 = 0x90
    NSArray *_prefetchedFamilyMembers;	// 152 = 0x98
    _Bool _hasQueriedApplePayActive;	// 160 = 0xa0
    _Bool _isApplePayActive;	// 161 = 0xa1
    _Bool _isApplePaySetupAvailable;	// 162 = 0xa2
    _Bool _hasPaymentCard;	// 163 = 0xa3
    _Bool _hasApplePayTransaction;	// 164 = 0xa4
    _Bool _isBrokerRegistered;	// 165 = 0xa5
    _Bool _hasQueriedApplePaySetUpState;	// 166 = 0xa6
    _Bool _hasQueriedPaymentCards;	// 167 = 0xa7
    _Bool _hasQueriedApplePayTransactions;	// 168 = 0xa8
    _Bool _hasQueriedDaysSinceLastTransaction;	// 169 = 0xa9
    _Bool _hasQueriedBrokerRegistration;	// 170 = 0xaa
    _Bool _hasQueriedDefaultCreditAccountInStoreTransaction;	// 171 = 0xab
    _Bool _hasDefaultCreditAccountInStoreTransaction;	// 172 = 0xac
    _Bool _hasQueriedDefaultCreditAccountInAppTransaction;	// 173 = 0xad
    _Bool _hasDefaultCreditAccountInAppTransaction;	// 174 = 0xae
    _Bool _hasQueriedDefaultCreditAccountWebTransaction;	// 175 = 0xaf
    _Bool _hasDefaultCreditAccountWebTransaction;	// 176 = 0xb0
    _Bool _hasQueriedDefaultCreditAccountVirtualCardTransaction;	// 177 = 0xb1
    _Bool _hasDefaultCreditAccountVirtualCardTransaction;	// 178 = 0xb2
    _Bool _hasQueriedDefaultCreditAccountPhysicalCardTransaction;	// 179 = 0xb3
    _Bool _hasDefaultCreditAccountPhysicalCardTransaction;	// 180 = 0xb4
    _Bool _hasQueriedPeerPaymentTransaction;	// 181 = 0xb5
    _Bool _hasPeerPaymentTransaction;	// 182 = 0xb6
    _Bool _hasQueriedPeerPaymentDaysSinceLastTransaction;	// 183 = 0xb7
    _Bool _hasQueriedPeerPaymentPassProvisioned;	// 184 = 0xb8
    _Bool _peerPaymentPassProvisioned;	// 185 = 0xb9
    _Bool _hasQueriedFamilyCircleFamilyOrganizer;	// 186 = 0xba
    _Bool _familyCircleFamilyOrganizer;	// 187 = 0xbb
    _Bool _hasQueriedFamilyCircleParent;	// 188 = 0xbc
    _Bool _familyCircleParent;	// 189 = 0xbd
    _Bool _hasQueriedFamilyCircleHasFamily;	// 190 = 0xbe
    _Bool _familyCircleHasFamily;	// 191 = 0xbf
    _Bool _hasQueriedFamilyCircleCurrentUserAge;	// 192 = 0xc0
    long long _familyCircleCurrentUserAge;	// 200 = 0xc8
    _Bool _hasQueriedFamilyCircleMembersUnderAge;	// 208 = 0xd0
    long long _familyCircleMembersUnderAge;	// 216 = 0xd8
    _Bool _hasQueriedfamilyCircleMembersCount;	// 224 = 0xe0
    long long _familyCircleMembersCount;	// 232 = 0xe8
    _Bool _hasQueriedFamilyCircleDaysSinceNewestJoinedDate;	// 240 = 0xf0
    long long _familyCircleDaysSinceNewestJoinedDate;	// 248 = 0xf8
    _Bool _hasQueriedFamilyCircleMinimumMemberAge;	// 256 = 0x100
    long long _familyCircleMinimumMemberAge;	// 264 = 0x108
    _Bool _hasQueriedDefaultCreditAccountHasUnderageParticipant;	// 272 = 0x110
    _Bool _defaultCreditAccountHasUnderageParticipant;	// 273 = 0x111
    _Bool _hasQueriedAnyCreditAccountIsClosed;	// 274 = 0x112
    _Bool _anyCreditAccountIsClosed;	// 275 = 0x113
    _Bool _hasQueriedAnyCreditAccountIsRemoved;	// 276 = 0x114
    _Bool _anyCreditAccountIsRemoved;	// 277 = 0x115
    NSSet *_sentTransitDCINotifications;	// 280 = 0x118
    NSSet *_sentTransitOpenLoopUpgradeNotifications;	// 288 = 0x120
    NSSet *_sentTransitOpenLoopRenotifiedInMarketNotifications;	// 296 = 0x128
}

+ (id)_applePayRelevantTransactionTypes;	// IMP=0x000000010009e118
+ (_Bool)isTransactionRelevant:(id)arg1;	// IMP=0x000000010009e058
+ (id)availableKeysAndOperators;	// IMP=0x000000010009dc70
- (void).cxx_destruct;	// IMP=0x00000001000a2304
@property(readonly, nonatomic) NSSet *sentTransitOpenLoopRenotifiedInMarketNotifications; // @synthesize sentTransitOpenLoopRenotifiedInMarketNotifications=_sentTransitOpenLoopRenotifiedInMarketNotifications;
@property(readonly, nonatomic) NSSet *sentTransitOpenLoopUpgradeNotifications; // @synthesize sentTransitOpenLoopUpgradeNotifications=_sentTransitOpenLoopUpgradeNotifications;
@property(readonly, nonatomic) NSSet *sentTransitDCINotifications; // @synthesize sentTransitDCINotifications=_sentTransitDCINotifications;
- (id)description;	// IMP=0x00000001000a1f74
- (id)_accountUsersForAccountIdentifier:(id)arg1 accessLevel:(unsigned long long)arg2;	// IMP=0x00000001000a1e94
- (id)_creditAccountUsersForAccountIdentifier:(id)arg1;	// IMP=0x00000001000a1e60
- (id)_familyMemberWithAltDSID:(id)arg1;	// IMP=0x00000001000a1ce8
- (id)_creditAccountWithIdentifier:(id)arg1;	// IMP=0x00000001000a1b70
- (id)_defaultCreditAccountAccountStatement;	// IMP=0x00000001000a1ab0
- (id)_defaultCreditAccountAccountSummary;	// IMP=0x00000001000a1a28
- (id)_defaultCreditAccountCreditAccountDetails;	// IMP=0x00000001000a19d0
- (_Bool)_hasDefaultCreditAccountTransactionOfTransactionSourceType:(unsigned long long)arg1;	// IMP=0x00000001000a1938
- (void)_prefetchDataSources:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a0d7c
- (void)preflightForKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a0b38
@property(readonly, nonatomic) long long familyCircleMinimumMemberAge;
@property(readonly, nonatomic) long long familyCircleDaysSinceNewestJoinedDate;
@property(readonly, nonatomic) long long familyCircleMembersCount;
@property(readonly, nonatomic) long long familyCircleMembersUnderAge;
@property(readonly, nonatomic) long long familyCircleCurrentUserAge;
@property(readonly, nonatomic) _Bool familyCircleHasFamily;
@property(readonly, nonatomic) _Bool familyCircleParent;
@property(readonly, nonatomic) _Bool familyCircleFamilyOrganizer;
@property(readonly, nonatomic) long long peerPaymentAccountDaysSinceIdentifiedDate;
@property(readonly, nonatomic) long long peerPaymentAccountDaysSinceCreatedDate;
@property(readonly, nonatomic) unsigned long long peerPaymentAccountRole;
@property(readonly, nonatomic) long long peerPaymentFamilyParticipantAccounts;
@property(readonly, nonatomic) _Bool peerPaymentAccountHasBalance;
@property(readonly, nonatomic) long long daysSinceLastPeerPaymentTransaction;
@property(readonly, nonatomic) _Bool peerPaymentAccountHasTransaction;
@property(readonly, nonatomic) long long peerPaymentAccountStage;
@property(readonly, nonatomic) long long peerPaymentAccountState;
@property(readonly, nonatomic) _Bool hasPeerPaymentPassProvisioned;
@property(readonly, nonatomic) _Bool hasPeerPaymentAccount;
@property(readonly, copy, nonatomic) NSString *currentDefaultCreditApplicationState;
@property(readonly, nonatomic) long long currentDefaultCreditApplictionDaysSinceLastUpdated;
@property(readonly, nonatomic) long long defaultCreditApplicationCount;
@property(readonly, nonatomic) _Bool anyCreditAccountStateIsRemoved;
@property(readonly, nonatomic) _Bool anyCreditAccountStateIsClosed;
@property(readonly, nonatomic) _Bool defaultCreditAccountHasUnderageParticipant;
@property(readonly, nonatomic) long long defaultCreditAccountParticipantUsersCount;
@property(readonly, nonatomic) _Bool defaultCreditAccountIsCoOwner;
@property(readonly, nonatomic) long long defaultCreditAccountAccessLevel;
@property(readonly, nonatomic) _Bool defaultCreditAccountIsShared;
@property(readonly, nonatomic) _Bool defaultCreditAccountHasActiveInstallment;
@property(readonly, nonatomic) long long defaultCreditAccountDaysSinceCreatedDate;
@property(readonly, nonatomic) _Bool defaultCreditAccountHasPhysicalCardTransaction;
@property(readonly, nonatomic) _Bool defaultCreditAccountHasVirtualCardTransaction;
@property(readonly, nonatomic) _Bool defaultCreditAccountHasWebTransaction;
@property(readonly, nonatomic) _Bool defaultCreditAccountHasInAppTransaction;
@property(readonly, nonatomic) _Bool defaultCreditAccountHasInStoreTransaction;
@property(readonly, nonatomic) long long defaultCreditAccountDaysSinceLastTransaction;
@property(readonly, nonatomic) _Bool defaultCreditAccountPassIsDefault;
@property(readonly, nonatomic) _Bool defaultCreditAccountSupportsShowNotifications;
@property(readonly, nonatomic) NSDecimalNumber *defaultCreditAccountAvailableCredit;
@property(readonly, nonatomic) long long defaultCreditAccountCyclesPastDue;
@property(readonly, nonatomic) long long defaultCreditAccountBalanceStatus;
@property(readonly, nonatomic) _Bool defaultCreditAccountRequiresDebtCollectionNotices;
@property(readonly, nonatomic) _Bool defaultCreditAccountHasVirtualCard;
@property(readonly, nonatomic) _Bool defaultCreditAccountHasPhysicalCard;
@property(readonly, nonatomic) NSDecimalNumber *defaultCreditAccountLifetimeRewards;
@property(readonly, nonatomic) long long defaultCreditAccountState;
@property(readonly, nonatomic) _Bool hasDefaultCreditAccount;
@property(readonly, nonatomic) long long defaultCreditAccountSetupFeatureState;
@property(readonly, nonatomic) long long daysSinceLastTransaction;
@property(readonly, nonatomic) _Bool hasApplePayTransaction;
@property(readonly, nonatomic) _Bool hasPaymentCard;
@property(readonly, nonatomic, getter=isDeviceRegisteredWithBroker) _Bool deviceRegisteredWithBroker;
@property(readonly, nonatomic, getter=isPrimaryAppleAccountVerified) _Bool primaryAppleAccountVerified;
@property(readonly, nonatomic, getter=isApplePaySetupAvailable) _Bool applePaySetupAvailable;
@property(readonly, nonatomic, getter=isApplePayActive) _Bool applePayActive;
@property(readonly, nonatomic) NSString *deviceLanguage;
@property(readonly, nonatomic) NSString *currentRegion;
- (id)initWithAccountManager:(id)arg1 applyManager:(id)arg2 databaseManager:(id)arg3 peerPaymentWebServiceCoordinator:(id)arg4 paymentWebServiceCoordinator:(id)arg5 transitNotificationService:(id)arg6 familyCircleManager:(id)arg7;	// IMP=0x000000010009e164
- (id)init;	// IMP=0x000000010009e124

@end

