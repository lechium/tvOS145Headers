//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AKAppleIDAuthenticationDaemonProtocol-Protocol.h"
#import "AKDServerUIDelegate-Protocol.h"
#import "AKPiggybackRequestingControllerDelegate-Protocol.h"

@class AKAccountManager, AKAuthenticationTrafficController, AKAuthenticationUILiaison, AKClient, CUTReachability, NSString;
@protocol AKAppleIDAuthSupportProxy;

@interface AKAppleIDAuthenticationService : NSObject <AKPiggybackRequestingControllerDelegate, AKDServerUIDelegate, AKAppleIDAuthenticationDaemonProtocol>
{
    AKClient *_client;	// 8 = 0x8
    NSObject<AKAppleIDAuthSupportProxy> *_authProxy;	// 16 = 0x10
    AKAccountManager *_accountManager;	// 24 = 0x18
    AKAuthenticationTrafficController *_authTrafficController;	// 32 = 0x20
    AKAuthenticationUILiaison *_authUILiaison;	// 40 = 0x28
    CUTReachability *_reachability;	// 48 = 0x30
}

+ (id)_verificationQueue;	// IMP=0x00000001000274d8
- (void).cxx_destruct;	// IMP=0x0000000100042774
- (void)teardownFollowUpWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100042698
- (void)synchronizeFollowUpItemsForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000425f4
- (_Bool)_shouldSkipAccountUpdatesForAuthWithContext:(id)arg1;	// IMP=0x000000010004241c
- (_Bool)_updateAuthKitAccount:(id)arg1 withServerResponse:(id)arg2 context:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000418dc
- (void)piggyback:(id)arg1 handleVerificationWithError:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100041840
- (void)piggyback:(id)arg1 handleEscapeHatchError:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100041164
- (void)piggyback:(id)arg1 shouldContinueWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100040e74
- (void)piggyback:(id)arg1 validateSecurityCode:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100040b44
- (void)piggyback:(id)arg1 promptForRandomCodeWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100040a54
- (void)performCircleRequestWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100040958
- (void)startPiggybackingForServerResponse:(id)arg1 context:(id)arg2 password:(id)arg3 username:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100040698
- (id)_authenticationParametersForUsername:(id)arg1 altDSID:(id)arg2 context:(id)arg3;	// IMP=0x00000001000405b0
- (void)_beginChangePasswordFlowWithAccount:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100040098
- (void)_changePasswordAndAuthenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003fc40
- (void)_beginAppleIDCreationFlowWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003f9d8
- (void)_handleCreateNewAppleIDError:(id)arg1 withContext:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003f878
- (void)_createNewAppleIDAndAuthenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003f234
- (void)_repairAppleIDWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003ecf0
- (id)_addAccountNameParameterToURL:(id)arg1 withContext:(id)arg2;	// IMP=0x000000010003eb88
- (void)_beginiForgotFlowWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003e720
- (void)_handleRecoverCredentialsError:(id)arg1 withContext:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003e5d4
- (void)_recoverCredentialsAndAuthenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003dffc
- (void)persistMasterKeyVerifier:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003df48
- (void)verifyMasterKey:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003de94
- (void)renewRecoveryTokenWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003de04
- (void)_fetchTokensForServiceIDs:(id)arg1 withUsername:(id)arg2 altDSID:(id)arg3 masterToken:(id)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010003d028
- (void)_performSilentServiceTokenAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003cb58
- (void)serverUIContext:(id)arg1 processAdditionalData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003c8d4
- (_Bool)shouldProcessAdditionalServerUIData:(id)arg1;	// IMP=0x000000010003c8c0
- (void)_showServerUIWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003c82c
- (void)_showServerUIWithURLRequest:(id)arg1 context:(id)arg2 initialAuthResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010003c788
- (void)_showServerUIWithURLRequest:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003c774
- (void)_beginServerDrivenSecondaryActionWithURLKey:(id)arg1 context:(id)arg2 initialAuthResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010003c23c
- (void)_attemptPasswordlessAuthAfterBiometricOrPasscodeValidationWithContext:(id)arg1 promptType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003bdb0
- (void)_showAlertForLoginCodeValidationError:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003bbe4
- (void)_processValidationCodeSuccessResponse:(id)arg1 authResponse:(id)arg2 results:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010003ba84
- (void)_handleSecondFactorUICompletionWithCode:(id)arg1 error:(id)arg2 idmsData:(id)arg3 piggybacking:(_Bool)arg4 initialAuthResponse:(id)arg5 context:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000010003b60c
- (void)_handleSecondFactorUICompletionWithCode:(id)arg1 error:(id)arg2 idmsData:(id)arg3 initialAuthResponse:(id)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010003b5d4
- (void)_performSecondaryActionWithServerResponse:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003af40
- (_Bool)_isTouchIDRequiredForGrandSlamServiceTokenWithID:(id)arg1;	// IMP=0x000000010003af28
- (void)_updateCredentialForSavedAIDAAccount:(id)arg1 withNewTokens:(id)arg2;	// IMP=0x000000010003aa84
- (_Bool)_persistGrandSlamServiceTokensHelper:(id)arg1 forAltDSID:(id)arg2 DSID:(id)arg3 appleID:(id)arg4 appleIDAuthAccount:(id)arg5 error:(id *)arg6;	// IMP=0x000000010003a4a0
- (void)_persistGrandSlamServiceTokens:(id)arg1 forAltDSID:(id)arg2 DSID:(id)arg3 appleID:(id)arg4 forContext:(id)arg5 error:(id *)arg6;	// IMP=0x000000010003a238
- (void)_completeAuthenticationWithServiceTokens:(id)arg1 tokenFetchError:(id)arg2 altDSID:(id)arg3 authenticationResults:(id)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000100039f88
- (void)_provideServiceTokensIfRequiredForContext:(id)arg1 authenticationResults:(id)arg2 serverResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100039828
- (id)_authKitAccountFromContext:(id)arg1;	// IMP=0x0000000100039598
- (void)_handleSuccessfulVerificationForContext:(id)arg1 withResults:(id)arg2 serverResponse:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100039198
- (void)_shouldContinueAuthenticatingForUsername:(id)arg1 password:(id)arg2 serverResponse:(id)arg3 didShowServerUI:(_Bool)arg4 continuationData:(id)arg5 error:(id)arg6 context:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x000000010003808c
- (void)_handleVerificationCompletionForUsername:(id)arg1 password:(id)arg2 serverResponse:(id)arg3 didShowServerUI:(_Bool)arg4 continuationData:(id)arg5 error:(id)arg6 context:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0000000100037e94
- (void)_performSafeSRPAuthenticationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100037cbc
- (void)_performSRPAuthenticationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100037ab8
- (id)_srpAuthContextHelperWithContext:(id)arg1;	// IMP=0x0000000100037a0c
- (void)_performPasswordlessSRPAuthWithAccount:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000372cc
- (void)_performPasswordlessSRPAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000372b4
- (void)_verifyUsername:(id)arg1 password:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100036ba0
- (void)_checkFreshnessAndVerifyWithPassword:(id)arg1 serverResponse:(id)arg2 additionalData:(id)arg3 secondaryActionError:(id)arg4 context:(id)arg5 newServerResponse:(id)arg6 username:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000001000369b4
- (void)_showAlertForLoginError:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000367b4
- (void)_titleAndMessageForError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100035e88
- (_Bool)_incrementAttemptsForContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100035c48
- (void)_showAlertForVerificationError:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100035a70
- (void)_handleVerificationError:(id)arg1 forContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000358c8
- (void)_handleMissingUsernameOrPasswordForContext:(id)arg1 password:(id)arg2 username:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100035498
- (void)_keepLoginAliveWithContext:(id)arg1 error:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100035384
- (void)_handleBasicLoginUICompletionWithUsername:(id)arg1 password:(id)arg2 context:(id)arg3 additionalData:(id)arg4 collectionError:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000100034298
- (void)_refreshAuthModeForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100034178
- (void)_refreshAuthModeIfNecessaryForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100033e14
- (void)_refreshLocalAccountAndUpdateContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100033720
- (void)_updateAltDSIDAndUsername:(id)arg1;	// IMP=0x0000000100033300
- (void)_correlateContext:(id)arg1 withAuthMode:(unsigned long long)arg2;	// IMP=0x00000001000330dc
- (void)_performInteractiveAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100032d10
- (void)refreshAuthMetadataWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100032a28
- (void)_attemptInteractiveAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100032574
- (id)_accountForContinuationWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000010003218c
- (void)_showContinueUsingUIWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100031bc4
- (void)_accountForContinuationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100031a78
- (void)_attemptPasswordlessAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000315a4
- (void)_attemptPasswordlessAuthOptionsWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100031040
- (void)_showBiometricOrPasscodeAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100030cb8
- (void)_attemptBiometricOrPasscodeAuthWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100030b94
- (_Bool)_isInteractiveAuthRequiredForContext:(id)arg1;	// IMP=0x0000000100030948
- (void)_handlePasswordlessAuthResults:(id)arg1 context:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100030630
- (void)_performAuthenticationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100030238
- (void)_upgradeSecurityLevelWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002fd54
- (void)_authenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002fc38
- (void)authenticateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002f404
- (void)reportSignOutForAllAppleIDsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002eed0
- (void)reportSignOutForAppleID:(id)arg1 service:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002ec0c
- (void)checkInWithAuthenticationServerForAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002e9b4
- (void)checkSecurityUpgradeEligibilityForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002e5d4
- (oneway void)isCreateAppleIDAllowedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002e3f0
- (void)validateVettingToken:(id)arg1 forAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002d40c
- (void)_validateLoginCode:(unsigned long long)arg1 forAltDSID:(id)arg2 masterToken:(id)arg3 idmsData:(id)arg4 authContext:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010002c688
- (void)validateLoginCode:(unsigned long long)arg1 forAppleID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002c100
- (void)generateLoginCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010002bfe4
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002b100
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forAppleID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002b04c
- (void)getServerUILoadDelegateForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002afbc
- (void)getServerUILoadDelegateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010002adf0
- (void)activeLoginCode:(CDUnknownBlockType)arg1;	// IMP=0x000000010002ac84
- (void)isDevicePasscodeProtected:(CDUnknownBlockType)arg1;	// IMP=0x000000010002ac00
- (void)configurationInfoWithIdentifiers:(id)arg1 forAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100029ef4
- (void)setConfigurationInfo:(id)arg1 forIdentifier:(id)arg2 forAltDSID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000294b8
- (void)warmUpVerificationSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100029368
- (void)revokeAuthorizationForApplicationWithClientID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100029258
- (void)deleteAuthorizationDatabaseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100029120
- (void)fetchAppListWithAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100028ff4
- (void)fetchDeviceMapWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100028c28
- (void)fetchAuthModeWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100028afc
- (void)updateUserInformationForAltDSID:(id)arg1 userInformation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000289c0
- (void)getUserInformationForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000287e8
- (void)fetchUserInformationForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100028610
- (void)_setAuthKitAccount:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100027e24
- (void)setAppleIDWithDSID:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100027bc8
- (void)setAppleIDWithAltDSID:(id)arg1 inUse:(_Bool)arg2 forService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010002796c
- (void)forceURLBagUpdateForAltDSID:(id)arg1 urlSwitchData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000278bc
- (void)fetchURLBagFromCache:(_Bool)arg1 altDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000277d4
- (void)fetchURLBagForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100027748
- (void)accountNamesForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100027570
- (id)init;	// IMP=0x0000000100027348
- (id)initWithProxy:(id)arg1;	// IMP=0x00000001000272e4
- (id)initWithClient:(id)arg1;	// IMP=0x0000000100027264

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

