//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSEngramKeyStoreListener-Protocol.h"

@class CUTDeferredTaskQueue, IDSGetDependentRegistrationsCenter, IDSKeyTransparencyVerifier, IDSPushHandler, IDSValidationSession, NSDate, NSMutableArray, NSMutableDictionary, NSNumber, NSString;
@protocol IDSRegistrationCenterMessageDelivery;

@interface IDSRegistrationCenter : NSObject <IDSEngramKeyStoreListener>
{
    NSMutableArray *_queuedRegistrations;	// 8 = 0x8
    NSMutableArray *_queuedAuthentications;	// 16 = 0x10
    NSMutableArray *_currentAuthentications;	// 24 = 0x18
    NSMutableArray *_currentRegistrations;	// 32 = 0x20
    NSMutableArray *_handlers;	// 40 = 0x28
    _Bool _pendingDequeue;	// 48 = 0x30
    _Bool _pendingDeregistration;	// 49 = 0x31
    NSMutableDictionary *_currentGetHandlesBlocks;	// 56 = 0x38
    NSMutableDictionary *_currentGetHandlesRegistrations;	// 64 = 0x40
    NSMutableArray *_successfulRegistrations;	// 72 = 0x48
    _Bool _shouldUseAbsinthe;	// 80 = 0x50
    _Bool _isBuildingContext;	// 81 = 0x51
    struct NACContextOpaque_ *_validationContext;	// 88 = 0x58
    _Bool _validationContextDisabled;	// 96 = 0x60
    NSDate *_validateContextDate;	// 104 = 0x68
    NSNumber *_validateContextTTL;	// 112 = 0x70
    IDSValidationSession *_validationSession;	// 120 = 0x78
    NSMutableArray *_validationContextQueue;	// 128 = 0x80
    NSDate *_dateSentLastHTTPMessage;	// 136 = 0x88
    NSDate *_dateLastRegistered;	// 144 = 0x90
    NSDate *_accountingHour;	// 152 = 0x98
    unsigned long long _registrations;	// 160 = 0xa0
    id <IDSRegistrationCenterMessageDelivery> _httpMessageDelivery;	// 168 = 0xa8
    IDSPushHandler *_pushHandler;	// 176 = 0xb0
    IDSGetDependentRegistrationsCenter *_gdrCenter;	// 184 = 0xb8
    IDSKeyTransparencyVerifier *_keyTransparencyVerifier;	// 192 = 0xc0
    CUTDeferredTaskQueue *_sendAuthenticateRegistrationTask;	// 200 = 0xc8
    CUTDeferredTaskQueue *_sendRegistrationTask;	// 208 = 0xd0
    CUTDeferredTaskQueue *_sendDeregistrationTask;	// 216 = 0xd8
    CUTDeferredTaskQueue *_cleanupAbsintheTask;	// 224 = 0xe0
}

+ (id)sharedInstance;	// IMP=0x00000001002f1f2c
- (void).cxx_destruct;	// IMP=0x0000000100317f60
@property(readonly, nonatomic) CUTDeferredTaskQueue *cleanupAbsintheTask; // @synthesize cleanupAbsintheTask=_cleanupAbsintheTask;
@property(readonly, nonatomic) CUTDeferredTaskQueue *sendDeregistrationTask; // @synthesize sendDeregistrationTask=_sendDeregistrationTask;
@property(readonly, nonatomic) CUTDeferredTaskQueue *sendRegistrationTask; // @synthesize sendRegistrationTask=_sendRegistrationTask;
@property(readonly, nonatomic) CUTDeferredTaskQueue *sendAuthenticateRegistrationTask; // @synthesize sendAuthenticateRegistrationTask=_sendAuthenticateRegistrationTask;
- (void)sendValidateCredential:(id)arg1 withDeliveryCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100317b38
- (id)dateLastRegistered;	// IMP=0x0000000100317b1c
- (void)_noteRegistration;	// IMP=0x00000001003178a8
- (_Bool)_checkOverRegistrations;	// IMP=0x0000000100317704
- (void)handler:(id)arg1 pushTokenChanged:(id)arg2;	// IMP=0x00000001003175d4
- (void)removeListener:(id)arg1;	// IMP=0x0000000100317550
- (void)addListener:(id)arg1;	// IMP=0x00000001003174a0
- (id)activeRegistrations;	// IMP=0x00000001003173a4
- (void)cancelActionsForRegistrationInfo:(id)arg1;	// IMP=0x0000000100316fe0
- (void)cancelRegisterActionsForRegistrationInfo:(id)arg1;	// IMP=0x0000000100316a98
- (_Bool)sendDeregistration:(id)arg1;	// IMP=0x00000001003167bc
- (_Bool)sendRegistration:(id)arg1;	// IMP=0x0000000100316148
- (void)__reallySendRegistration;	// IMP=0x0000000100316070
- (_Bool)authenticateRegistration:(id)arg1;	// IMP=0x00000001003154a0
- (void)__reallySendAuthenticateRegistration;	// IMP=0x000000010031538c
- (_Bool)queryValidatedEmailsForRegistration:(id)arg1 allowPasswordPrompt:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001003150e4
- (_Bool)_queryValidatedEmailsForRegistration:(id)arg1 allowPasswordPrompt:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100313f28
- (void)_processGetHandlesMessage:(id)arg1 registrations:(id)arg2 deliveredWithError:(id)arg3 resultCode:(long long)arg4 resultDictionary:(id)arg5 allowPasswordPrompt:(_Bool)arg6;	// IMP=0x0000000100312f00
- (_Bool)isRegistering:(id)arg1;	// IMP=0x0000000100312e68
- (id)_geoRegion;	// IMP=0x0000000100312d9c
- (void)reportiMessageSpamCheckUnknown:(id)arg1 count:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100312900
- (void)reportiMessageUnknownSender:(id)arg1 messageID:(id)arg2 isBlackholed:(_Bool)arg3 messageServerTimestamp:(id)arg4 selfURI:(id)arg5 registration:(id)arg6;	// IMP=0x000000010031242c
- (void)reportSpamWithMessages:(id)arg1 selfURI:(id)arg2 registration:(id)arg3;	// IMP=0x0000000100312018
- (void)_sendAuthenticateRegistration:(id)arg1;	// IMP=0x00000001003117bc
- (id)_authMessageForRegistration:(id)arg1;	// IMP=0x000000010030d57c
- (CDUnknownBlockType)_authMessageCompletionWithRegistration:(id)arg1 withOverallSuccessBlock:(CDUnknownBlockType)arg2 overallFailure:(CDUnknownBlockType)arg3;	// IMP=0x000000010030c990
- (void)sendHardDeregisterCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010030ba14
- (void)_sendDeregistration:(id)arg1;	// IMP=0x000000010030b7cc
- (void)__reallySendDeregistration;	// IMP=0x000000010030b6e8
- (void)_sendRegistrationAsDeregister:(_Bool)arg1;	// IMP=0x0000000100305588
- (id)_trustedDeviceForRegistrations:(id)arg1 transparencyLoggableDatasByServiceType:(id)arg2;	// IMP=0x0000000100304dfc
- (id)_URIsToRegisterForRegistration:(id)arg1;	// IMP=0x0000000100304ac0
- (void)_processRegistrationMessage:(id)arg1 sentRegistrations:(id)arg2 descriptionString:(id)arg3 actionID:(id)arg4 actionString:(id)arg5 isDeregister:(_Bool)arg6 deliveredWithError:(id)arg7 resultCode:(long long)arg8 resultDictionary:(id)arg9;	// IMP=0x00000001002fdaa4
- (id)_keyTransparencyLoggableDataFromRegistrationMessage:(id)arg1 service:(id)arg2 URI:(id)arg3;	// IMP=0x00000001002fd57c
- (_Bool)_hasRegistration:(id)arg1 inQueue:(id)arg2;	// IMP=0x00000001002fce94
- (void)_notifyRegistrationIdentitiesUpdated;	// IMP=0x00000001002fcb78
- (void)_notifyEmailQuerySuccess:(id)arg1 emailInfo:(id)arg2;	// IMP=0x00000001002fc710
- (void)_notifyEmailQueryFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x00000001002fbef8
- (void)_notifyAllSuccessfulRegistrations:(id)arg1;	// IMP=0x00000001002fbb94
- (void)_notifyRegistrationSuccess:(id)arg1;	// IMP=0x00000001002fb208
- (void)_notifyRegistrationFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x00000001002fa384
- (void)_notifyIDSAuthenticationSuccess:(id)arg1;	// IMP=0x00000001002f99d4
- (void)_notifyProvisionFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 fatal:(_Bool)arg5 info:(id)arg6;	// IMP=0x00000001002f8b80
- (void)buildValidationCredentialsIfNeeded;	// IMP=0x00000001002f8a8c
- (void)_queueBuildingValidationDataIfNecessaryForMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001002f7d60
- (void)_sendAbsintheValidationCertRequestIfNeeded;	// IMP=0x00000001002f57d0
- (void)__cleanupValidationInfo;	// IMP=0x00000001002f56ac
- (void)__flushValidationQueue;	// IMP=0x00000001002f50c4
- (void)__failValidationQueueWithErrorResponseCode:(long long)arg1;	// IMP=0x00000001002f4db8
- (void)__failValidationQueue;	// IMP=0x00000001002f4d84
- (void)__queueValidationMessage:(id)arg1;	// IMP=0x00000001002f4c10
- (void)_dequeuePendingRequestsIfNecessary;	// IMP=0x00000001002f3f84
- (_Bool)_hasCurrentAuthenticationsOrRegistrations;	// IMP=0x00000001002f3f14
- (_Bool)_hasOngoingAuthentications;	// IMP=0x00000001002f3ea4
- (void)__sendMessage:(id)arg1;	// IMP=0x00000001002f3d3c
- (void)logState;	// IMP=0x00000001002f3b50
- (void)__dumpState;	// IMP=0x00000001002f30ac
- (void)engramKeyStoreDidUpdateIdentities:(id)arg1;	// IMP=0x00000001002f2d68
- (id)keyTransparencyVerifier;	// IMP=0x00000001002f2d4c
- (id)gdrCenter;	// IMP=0x00000001002f2d30
- (void)dealloc;	// IMP=0x00000001002f2c54
- (id)init;	// IMP=0x00000001002f2af8
- (id)initWithMessageDelivery:(id)arg1 pushHandler:(id)arg2 keyTransparencyVerifier:(id)arg3;	// IMP=0x00000001002f20c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
