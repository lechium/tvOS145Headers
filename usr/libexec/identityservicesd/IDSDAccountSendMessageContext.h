//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface IDSDAccountSendMessageContext : NSObject
{
    _Bool _serviceIsDSBased;	// 8 = 0x8
    _Bool _serviceWantsReflectedSend;	// 9 = 0x9
    _Bool _serviceAllowProxyDelivery;	// 10 = 0xa
    _Bool _serviceAllowLocalDelivery;	// 11 = 0xb
    _Bool _serviceAllowWiProxDelivery;	// 12 = 0xc
    _Bool _serviceAllowLiveMessageDelivery;	// 13 = 0xd
    _Bool _serviceUseiMessageCallerID;	// 14 = 0xe
    _Bool _serviceWantsTinkerDevices;	// 15 = 0xf
    _Bool _silentlyFailMessagesOnSwitch;	// 16 = 0x10
    _Bool _shouldProtectTrafficUsingClassA;	// 17 = 0x11
    _Bool _shouldAllowCloudDelivery;	// 18 = 0x12
    _Bool _shouldAllowLiveMessageDelivery;	// 19 = 0x13
    _Bool _isRegistrationActive;	// 20 = 0x14
    _Bool _shouldIncludeDefaultDevice;	// 21 = 0x15
    unsigned int _serviceAdHocType;	// 24 = 0x18
    int _accountType;	// 28 = 0x1c
    unsigned int _dataProtectionClass;	// 32 = 0x20
    NSString *_serviceIdentifier;	// 40 = 0x28
    NSString *_servicePushTopic;	// 48 = 0x30
    NSArray *_serviceDuetIdentifiers;	// 56 = 0x38
    NSString *_primaryRegistrationDSHandle;	// 64 = 0x40
    NSArray *_primaryRegistrationURIs;	// 72 = 0x48
    NSArray *_dependentRegistrations;	// 80 = 0x50
    NSDictionary *_defaultPairedDependentRegistrations;	// 88 = 0x58
    NSArray *_appleIDPrimaryDependentRegistrations;	// 96 = 0x60
    NSArray *_aliasStrings;	// 104 = 0x68
    NSString *_accountDescription;	// 112 = 0x70
    NSString *_accountDisplayName;	// 120 = 0x78
    id _listenerID;	// 128 = 0x80
    NSDictionary *_entitlements;	// 136 = 0x88
    NSString *_subService;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000100421dd4
@property(retain, nonatomic) NSString *subService; // @synthesize subService=_subService;
@property(nonatomic) unsigned int dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
@property(nonatomic) _Bool shouldIncludeDefaultDevice; // @synthesize shouldIncludeDefaultDevice=_shouldIncludeDefaultDevice;
@property(retain, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(retain, nonatomic) id listenerID; // @synthesize listenerID=_listenerID;
@property(retain, nonatomic) NSString *accountDisplayName; // @synthesize accountDisplayName=_accountDisplayName;
@property(retain, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
@property(retain, nonatomic) NSArray *aliasStrings; // @synthesize aliasStrings=_aliasStrings;
@property(retain, nonatomic) NSArray *appleIDPrimaryDependentRegistrations; // @synthesize appleIDPrimaryDependentRegistrations=_appleIDPrimaryDependentRegistrations;
@property(retain, nonatomic) NSDictionary *defaultPairedDependentRegistrations; // @synthesize defaultPairedDependentRegistrations=_defaultPairedDependentRegistrations;
@property(retain, nonatomic) NSArray *dependentRegistrations; // @synthesize dependentRegistrations=_dependentRegistrations;
@property(nonatomic) _Bool isRegistrationActive; // @synthesize isRegistrationActive=_isRegistrationActive;
@property(retain, nonatomic) NSArray *primaryRegistrationURIs; // @synthesize primaryRegistrationURIs=_primaryRegistrationURIs;
@property(retain, nonatomic) NSString *primaryRegistrationDSHandle; // @synthesize primaryRegistrationDSHandle=_primaryRegistrationDSHandle;
@property(nonatomic) int accountType; // @synthesize accountType=_accountType;
@property(nonatomic) _Bool shouldAllowLiveMessageDelivery; // @synthesize shouldAllowLiveMessageDelivery=_shouldAllowLiveMessageDelivery;
@property(nonatomic) _Bool shouldAllowCloudDelivery; // @synthesize shouldAllowCloudDelivery=_shouldAllowCloudDelivery;
@property(nonatomic) _Bool shouldProtectTrafficUsingClassA; // @synthesize shouldProtectTrafficUsingClassA=_shouldProtectTrafficUsingClassA;
@property(nonatomic) _Bool silentlyFailMessagesOnSwitch; // @synthesize silentlyFailMessagesOnSwitch=_silentlyFailMessagesOnSwitch;
@property(nonatomic) _Bool serviceWantsTinkerDevices; // @synthesize serviceWantsTinkerDevices=_serviceWantsTinkerDevices;
@property(nonatomic) _Bool serviceUseiMessageCallerID; // @synthesize serviceUseiMessageCallerID=_serviceUseiMessageCallerID;
@property(nonatomic) _Bool serviceAllowLiveMessageDelivery; // @synthesize serviceAllowLiveMessageDelivery=_serviceAllowLiveMessageDelivery;
@property(nonatomic) _Bool serviceAllowWiProxDelivery; // @synthesize serviceAllowWiProxDelivery=_serviceAllowWiProxDelivery;
@property(nonatomic) _Bool serviceAllowLocalDelivery; // @synthesize serviceAllowLocalDelivery=_serviceAllowLocalDelivery;
@property(nonatomic) _Bool serviceAllowProxyDelivery; // @synthesize serviceAllowProxyDelivery=_serviceAllowProxyDelivery;
@property(nonatomic) _Bool serviceWantsReflectedSend; // @synthesize serviceWantsReflectedSend=_serviceWantsReflectedSend;
@property(nonatomic) _Bool serviceIsDSBased; // @synthesize serviceIsDSBased=_serviceIsDSBased;
@property(nonatomic) unsigned int serviceAdHocType; // @synthesize serviceAdHocType=_serviceAdHocType;
@property(retain, nonatomic) NSArray *serviceDuetIdentifiers; // @synthesize serviceDuetIdentifiers=_serviceDuetIdentifiers;
@property(retain, nonatomic) NSString *servicePushTopic; // @synthesize servicePushTopic=_servicePushTopic;
@property(retain, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;

@end

