//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, PKCloudStoreZoneInvitation, PKDeviceSharingCapabilities, PKRemoteRegistrationRequest, PKSharingDestination;

@protocol PKSharingIDSManagerDelegate <NSObject>

@optional
- (void)didReceiveDeviceSharingCapabilities:(PKDeviceSharingCapabilities *)arg1 forHandle:(NSString *)arg2;
- (void)didReceiveRemoteRegistationResult:(unsigned long long)arg1 fromDestination:(PKSharingDestination *)arg2;
- (void)didRequestToRegister:(PKRemoteRegistrationRequest *)arg1 fromDestination:(PKSharingDestination *)arg2;
- (void)didRequestCloudStoreZoneInvitationData:(PKCloudStoreZoneInvitation *)arg1 fromDestination:(PKSharingDestination *)arg2;
- (void)didReceiveCloudStoreZoneInvitationStatus:(long long)arg1 forInvitation:(PKCloudStoreZoneInvitation *)arg2 fromDestination:(PKSharingDestination *)arg3;
- (void)removedFromCloudStoreZoneInvitation:(PKCloudStoreZoneInvitation *)arg1 fromDestination:(PKSharingDestination *)arg2;
- (void)didReceiveCloudStoreZoneInvitation:(PKCloudStoreZoneInvitation *)arg1 invitationError:(NSError *)arg2 fromDestination:(PKSharingDestination *)arg3;
@end

