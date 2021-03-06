//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AKAuthenticationSurrogateManagerDelegate-Protocol.h"

@class AKAccountManager, AKAuthenticationSurrogateManager;
@protocol OS_dispatch_queue;

@interface AKAuthenticationUILiaison : NSObject <AKAuthenticationSurrogateManagerDelegate>
{
    AKAuthenticationSurrogateManager *_surrogateManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_clientUIWorkQueue;	// 16 = 0x10
    AKAccountManager *_accountManager;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000001000550a0
- (void).cxx_destruct;	// IMP=0x00000001000591cc
- (void)promptForAppleIDSettingsRedirectWithContext:(id)arg1 client:(id)arg2 needFullUI:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100058e1c
- (id)uiWorkQueue;	// IMP=0x0000000100058e14
- (_Bool)_isFullUICapabilityRequiredFor2FA;	// IMP=0x0000000100058e0c
- (id)_stringByAppendingBlameIfNecessary:(id)arg1 withContext:(id)arg2 client:(id)arg3;	// IMP=0x0000000100058b98
- (id)_optionsForCreatingUserNotificationWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4 serviceType:(long long)arg5;	// IMP=0x0000000100058ab8
- (id)_notificationDictionaryForClient:(id)arg1 context:(id)arg2 needFullUI:(_Bool)arg3;	// IMP=0x0000000100058094
- (_Bool)_isBackgroundClient:(id)arg1 eligibleForForegroundAuthenticationWithContext:(id)arg2;	// IMP=0x0000000100057de8
- (void)_performBlockWithClient:(id)arg1 context:(id)arg2 requireFullUICapability:(_Bool)arg3 allowRedirectToSettings:(_Bool)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x0000000100057950
- (void)presentBiometricOrPasscodeValidationForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010005773c
- (void)dismissNativeRecoveryUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100057464
- (void)presentNativeRecoveryUIForContext:(id)arg1 recoveryContext:(id)arg2 client:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100057138
- (void)dismissServerProvidedUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100056e60
- (void)presentServerProvidedUIForContext:(id)arg1 client:(id)arg2 withConfiguration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100056b08
- (void)presentSecondFactorAlertForContext:(id)arg1 client:(id)arg2 withError:(id)arg3 title:(id)arg4 message:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000100056810
- (void)dismissSecondFactorUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000565b4
- (void)presentSecondFactorUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100056358
- (void)presentLoginAlertForContext:(id)arg1 client:(id)arg2 withError:(id)arg3 title:(id)arg4 message:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000100055e54
- (void)dismissBasicLoginUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100055b80
- (void)presentBasicLoginUIForContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100055654
- (void)dismissKeepUsingUIForContext:(id)arg1 client:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100055440
- (void)presentKeepUsingUIForContext:(id)arg1 client:(id)arg2 appleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000551f8
@property(readonly, nonatomic) AKAuthenticationSurrogateManager *surrogateManager;
- (id)init;	// IMP=0x000000010005510c

@end

