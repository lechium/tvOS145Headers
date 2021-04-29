//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RequestQueue.h"

#import "ISSingleton-Protocol.h"

@class NSString;

@interface StoreServicesRequestQueue : RequestQueue <ISSingleton>
{
}

+ (id)sharedInstance;	// IMP=0x0000000100075b90
+ (void)setSharedInstance:(id)arg1;	// IMP=0x0000000100075b40
- (void)_sendUnentitledReplyForMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010007ceb8
- (void)_sendUnentitledMessageToClient:(id)arg1;	// IMP=0x000000010007ce68
- (void)_sendMessageWithError:(id)arg1 toClient:(id)arg2;	// IMP=0x000000010007cde4
- (id)_newClientWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010007cd48
- (void)addOperation:(id)arg1 forMessage:(id)arg2 connection:(id)arg3 replyBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000010007cc90
- (void)addOperation:(id)arg1 forClient:(id)arg2 withMessageBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010007cbd8
- (void)collectURLSessionDataWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010007c974
- (void)softwareLibraryItemSetValuesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010007c6ac
- (void)showServerPromptWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010007c43c
- (void)showDialogRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010007c0f4
- (void)sendInstallAttributionPingbackWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010007bcf8
- (void)sendAskToBuyWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010007ba44
- (void)sdk_getStorefrontCountryCodeWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010007b57c
- (void)saveInstallAttributionParamsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010007b2b4
- (void)rentalSyncRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010007aea8
- (void)redeemCodesWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010007ab04
- (void)pushNotificationRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010007a7f0
- (void)pushNotificationTokenRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010007a4cc
- (void)personalizeOffersWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010007a190
- (void)keybagRequestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100079ed8
- (void)playableApplicationsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100079bb8
- (void)isRemovedSystemAppWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010007996c
- (void)isInstalledAppWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100079720
- (void)invalidateURLBagWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000794d4
- (void)haveApplicationsOfTypeWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010007921c
- (void)hasDemotedApplicationsWithMessage2:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100078ff0
- (void)hasDemotedApplicationsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100078d7c
- (void)handlePurchaseIntentActionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100078aec
- (void)getUserApplicationsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000789b0
- (void)getRemovableSytemApplicationsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010007873c
- (void)getSoftwareLibraryItemsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100078450
- (void)getPlayInfoWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010007813c
- (void)getMediaSocialShareExtensionVisibilityWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000780d0
- (void)getKBSyncWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100077f38
- (void)getFamilyCircleWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100077c24
- (void)getAvailableItemKindsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100077a04
- (void)getApplicationCapabilitiesMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000777f8
- (void)getApplicationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100077630
- (void)getAccountPurchaseHistoryWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100077288
- (void)demoteApplicationWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100077100
- (void)checkoutRentalWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100076b9c
- (void)checkinRentalWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100076854
- (void)authorizeMachineWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00000001000764c8
- (void)addMediaSocialPostWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x000000010007632c
- (void)addDownloadsUsingManifestWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0000000100076074
- (void)observeXPCServer:(id)arg1;	// IMP=0x0000000100075bec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

