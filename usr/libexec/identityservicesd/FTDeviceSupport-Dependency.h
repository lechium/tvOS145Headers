//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FTServices/FTDeviceSupport.h>

#import "IDSDAccountControllerDeviceSupport-Protocol.h"
#import "IDSDSignInResponderDeviceSupport-Protocol.h"
#import "IDSPhoneNumberValidationStateMachineDeviceSupport-Protocol.h"
#import "IDSPhoneUserRegistryDeviceSupport-Protocol.h"

@class NSString;

@interface FTDeviceSupport (Dependency) <IDSDAccountControllerDeviceSupport, IDSDSignInResponderDeviceSupport, IDSPhoneNumberValidationStateMachineDeviceSupport, IDSPhoneUserRegistryDeviceSupport>

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long deviceType;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isGreenTea;
@property(readonly, nonatomic) _Bool isInMultiUserMode;
@property(readonly, nonatomic) _Bool registrationSupported;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsSMSIdentification;
@end

