/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKSubcredentialProvisioningConfiguration.h>

@class PKAppletSubcredentialSharingInvitation, PKPaymentWebService;

@interface PKSubcredentialProvisioningAcceptRemoteDeviceInvitationConfiguration : PKSubcredentialProvisioningConfiguration {

	BOOL _canRequestInvitation;
	BOOL _declineRelatedInvitations;
	PKAppletSubcredentialSharingInvitation* _invitation;
	PKPaymentWebService* _remoteDeviceWebService;
	PKPaymentWebService* _localDeviceWebService;

}

@property (nonatomic,readonly) PKAppletSubcredentialSharingInvitation * invitation;              //@synthesize invitation=_invitation - In the implementation block
@property (nonatomic,readonly) BOOL canRequestInvitation;                                        //@synthesize canRequestInvitation=_canRequestInvitation - In the implementation block
@property (nonatomic,readonly) BOOL declineRelatedInvitations;                                   //@synthesize declineRelatedInvitations=_declineRelatedInvitations - In the implementation block
@property (nonatomic,readonly) PKPaymentWebService * remoteDeviceWebService;                     //@synthesize remoteDeviceWebService=_remoteDeviceWebService - In the implementation block
@property (nonatomic,readonly) PKPaymentWebService * localDeviceWebService;                      //@synthesize localDeviceWebService=_localDeviceWebService - In the implementation block
-(id)description;
-(PKAppletSubcredentialSharingInvitation *)invitation;
-(id)transitionTable;
-(PKPaymentWebService *)localDeviceWebService;
-(PKPaymentWebService *)remoteDeviceWebService;
-(BOOL)canRequestInvitation;
-(long long)startingState;
-(BOOL)declineRelatedInvitations;
-(id)initWithInvitation:(id)arg1 canRequestInvitation:(BOOL)arg2 declineRelatedInvitations:(BOOL)arg3 localDeviceWebService:(id)arg4 remoteDeviceWebService:(id)arg5 configurationType:(long long)arg6 ;
-(id)initWithInvitation:(id)arg1 canRequestInvitation:(BOOL)arg2 declineRelatedInvitations:(BOOL)arg3 localDeviceWebService:(id)arg4 remoteDeviceWebService:(id)arg5 ;
@end

