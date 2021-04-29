//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSDAccountController, IDSDServiceController, IDSRegistrationConductor, IDSRegistrationController, IDSUserStore;
@protocol FTPasswordManager, IDSDRegistrationControl, IDSDSignInResponderDeviceSupport;

@interface IDSDSignInResponder : NSObject
{
    IDSDAccountController *_accountController;	// 8 = 0x8
    IDSDServiceController *_serviceController;	// 16 = 0x10
    id <FTPasswordManager> _passwordManager;	// 24 = 0x18
    IDSRegistrationConductor *_registrationConductor;	// 32 = 0x20
    id <IDSDSignInResponderDeviceSupport> _deviceSupport;	// 40 = 0x28
    id <IDSDRegistrationControl> _registrationControl;	// 48 = 0x30
    IDSRegistrationController *_registrationController;	// 56 = 0x38
    IDSUserStore *_userStore;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001002cef80
@property(readonly, nonatomic) IDSUserStore *userStore; // @synthesize userStore=_userStore;
@property(readonly, nonatomic) IDSRegistrationController *registrationController; // @synthesize registrationController=_registrationController;
@property(readonly, nonatomic) id <IDSDRegistrationControl> registrationControl; // @synthesize registrationControl=_registrationControl;
@property(readonly, nonatomic) id <IDSDSignInResponderDeviceSupport> deviceSupport; // @synthesize deviceSupport=_deviceSupport;
@property(readonly, nonatomic) IDSRegistrationConductor *registrationConductor; // @synthesize registrationConductor=_registrationConductor;
@property(readonly, nonatomic) id <FTPasswordManager> passwordManager; // @synthesize passwordManager=_passwordManager;
@property(readonly, nonatomic) IDSDServiceController *serviceController; // @synthesize serviceController=_serviceController;
@property(readonly, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
- (void)_reregisterAndReProvisionForEDULoginWithUsername:(id)arg1;	// IMP=0x00000001002cee54
- (void)_modifyDomainWithUsername:(id)arg1;	// IMP=0x00000001002ce8fc
- (void)_updateDomainWithUsername:(id)arg1 accountInfo:(id)arg2;	// IMP=0x00000001002cd93c
- (void)_signOutDomain:(long long)arg1;	// IMP=0x00000001002cd0cc
- (void)_signInDomain:(long long)arg1 withUsername:(id)arg2 authToken:(id)arg3 password:(id)arg4 accountInfo:(id)arg5 accountStatus:(id)arg6 handles:(id)arg7;	// IMP=0x00000001002cb8b8
- (void)updateUserWithOldUsername:(id)arg1 newUsername:(id)arg2;	// IMP=0x00000001002cb43c
- (void)iTunesSignOut;	// IMP=0x00000001002cb408
- (void)iTunesSignInWithUsername:(id)arg1 authToken:(id)arg2 password:(id)arg3 accountInfo:(id)arg4 accountStatus:(id)arg5 handles:(id)arg6;	// IMP=0x00000001002cb2c0
- (void)iCloudSignOut;	// IMP=0x00000001002cb28c
- (void)iCloudModifyForUsername:(id)arg1;	// IMP=0x00000001002cb22c
- (void)iCloudUpdateForUsername:(id)arg1 accountInfo:(id)arg2;	// IMP=0x00000001002cb1a0
- (void)iCloudSignInWithUsername:(id)arg1 authToken:(id)arg2 password:(id)arg3 accountInfo:(id)arg4 accountStatus:(id)arg5 handles:(id)arg6;	// IMP=0x00000001002cb058
- (_Bool)_shouldServiceBeDisabledOnSignOut:(id)arg1 forDomain:(long long)arg2;	// IMP=0x00000001002caed0
- (_Bool)_shouldServiceBeEnabledOnSignIn:(id)arg1 forDomain:(long long)arg2;	// IMP=0x00000001002cad48
- (id)accountStore;	// IMP=0x00000001002cad10
- (id)initWithAccountController:(id)arg1 serviceController:(id)arg2 passwordManager:(id)arg3 registrationConductor:(id)arg4 deviceSupport:(id)arg5 registrationControl:(id)arg6 registrationController:(id)arg7 userStore:(id)arg8;	// IMP=0x00000001002caae4
- (id)initWithUserStore:(id)arg1;	// IMP=0x00000001002ca8b0

@end
