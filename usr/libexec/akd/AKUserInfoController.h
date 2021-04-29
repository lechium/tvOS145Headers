//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AKAppleIDPushHelperServiceDelegate-Protocol.h"

@class AKAccountManager, NSString;

@interface AKUserInfoController : NSObject <AKAppleIDPushHelperServiceDelegate>
{
    AKAccountManager *_accountManager;	// 8 = 0x8
}

+ (id)sharedController;	// IMP=0x0000000100048244
- (void).cxx_destruct;	// IMP=0x000000010004b34c
- (_Bool)_additionalInfoChangedForAccount:(id)arg1 userInformation:(id)arg2;	// IMP=0x000000010004b280
- (id)authorizationUserInformationForRequest:(id)arg1 shouldRequestUpdate:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x000000010004a8dc
- (void)_sendNotification:(id)arg1 withUserInfo:(id)arg2;	// IMP=0x000000010004a774
- (void)sendUserInfoChangeNotificationWithPayload:(id)arg1;	// IMP=0x000000010004a758
- (void)_broadcastEmailChangeNotification;	// IMP=0x000000010004a6b0
- (_Bool)_updateAccount:(id)arg1 withUserInformationResponse:(id)arg2 modifyAliases:(_Bool)arg3;	// IMP=0x000000010004a260
- (void)_setLastEmailListRequestDate:(id)arg1;	// IMP=0x000000010004a1c4
- (id)previousAccountInfoRefreshDate;	// IMP=0x000000010004a160
- (void)refreshAccountUsernamesForAltDSID:(id)arg1 withUserInformation:(id)arg2;	// IMP=0x0000000100049eac
- (void)_refreshApplicationInformationForAltDSID:(id)arg1;	// IMP=0x0000000100049d24
- (_Bool)_authorizationPropertiesChangedForAccount:(id)arg1 userInformation:(id)arg2;	// IMP=0x0000000100049324
- (id)_userInfoChangeNotificationDictionaryForAltDSID:(id)arg1 userInformation:(id)arg2;	// IMP=0x00000001000490c0
- (void)updateUserInformationForAltDSID:(id)arg1 userInformation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100048dc0
- (void)_processIncomingUserInformationForAltDSID:(id)arg1 userInformation:(id)arg2;	// IMP=0x0000000100048d18
- (void)processPushMessage:(id)arg1;	// IMP=0x0000000100048b50
- (void)refreshAccountUsernamesForAltDSID:(id)arg1 dataCenter:(id)arg2;	// IMP=0x0000000100048aa8
- (void)fetchAuthModeWithContext:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100048790
- (void)_fetchUserInformationForAltDSID:(id)arg1 client:(id)arg2 dataCenter:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100048370
- (void)fetchUserInformationForAltDSID:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010004835c
- (id)init;	// IMP=0x00000001000482e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
