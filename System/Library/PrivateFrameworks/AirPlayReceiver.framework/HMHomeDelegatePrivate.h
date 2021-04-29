/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMHomeDelegatePrivate <HMHomeDelegate>
@optional
-(void)home:(id)arg1 didAddResidentDevice:(id)arg2;
-(void)home:(id)arg1 didRemoveResidentDevice:(id)arg2;
-(void)home:(id)arg1 didUpdateLocation:(id)arg2;
-(void)home:(id)arg1 didUpdateStateForOutgoingInvitations:(id)arg2;
-(void)home:(id)arg1 didUpdateAccesoryInvitationsForUser:(id)arg2;
-(void)homeDidUpdateApplicationData:(id)arg1;
-(void)home:(id)arg1 didUpdateApplicationDataForRoom:(id)arg2;
-(void)home:(id)arg1 didUpdateApplicationDataForServiceGroup:(id)arg2;
-(void)home:(id)arg1 didUpdateApplicationDataForActionSet:(id)arg2;
-(void)home:(id)arg1 didUpdateLastExecutionDateForActionSet:(id)arg2;
-(void)home:(id)arg1 didUpdateAccessControlForUser:(id)arg2;
-(void)home:(id)arg1 didEnableNotifications:(BOOL)arg2;
-(void)home:(id)arg1 didUpdateAutomaticSoftwareUpdateEnabled:(BOOL)arg2;
-(void)home:(id)arg1 didUpdateAutomaticThirdPartyAccessorySoftwareUpdateEnabled:(BOOL)arg2;
-(void)home:(id)arg1 didUpdateMinimumMediaUserPrivilege:(long long)arg2;
-(void)home:(id)arg1 didUpdateMediaPeerToPeerEnabled:(BOOL)arg2;
-(void)home:(id)arg1 didUpdateMediaPassword:(id)arg2;
-(void)home:(id)arg1 didAddMediaSystem:(id)arg2;
-(void)home:(id)arg1 didRemoveMediaSystem:(id)arg2;
-(void)home:(id)arg1 didUpdateReprovisionStateForAccessory:(id)arg2;
-(void)homeDidUpdateProtectionMode:(id)arg1;
-(void)homeDidUpdateNetworkRouterSupport:(id)arg1;
-(void)homeDidUpdateHomeLocationStatus:(id)arg1;
-(void)homeDidEnableMultiUser:(id)arg1;
-(void)homeDidSetHasAnyUserAcknowledgedCameraRecordingOnboarding:(id)arg1;
-(void)home:(id)arg1 didAddAccessoryNetworkProtectionGroup:(id)arg2;
-(void)home:(id)arg1 didRemoveAccessoryNetworkProtectionGroup:(id)arg2;
-(void)home:(id)arg1 didUpdateAccessoryNetworkProtectionGroup:(id)arg2;
-(void)homeDidSetEnableDoorbellChime:(id)arg1;
-(void)home:(id)arg1 didUpdatePersonManagerSettings:(id)arg2;
-(void)home:(id)arg1 didFailAccessorySetupWithError:(id)arg2;

@end

