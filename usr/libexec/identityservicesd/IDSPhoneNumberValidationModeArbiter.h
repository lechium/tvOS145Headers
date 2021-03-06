//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSCTPNRValidationMechanism, IDSServerBag, NSString;

@interface IDSPhoneNumberValidationModeArbiter : NSObject
{
    IDSServerBag *_serverBag;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001003ea888
@property(readonly, nonatomic) IDSServerBag *serverBag; // @synthesize serverBag=_serverBag;
@property(readonly, nonatomic) unsigned int maxAllowableNumberOfValidationAttemptsWhileNoneHaveSentSuccessfully;
@property(readonly, nonatomic) unsigned int maxAllowableNumberOfSuccessfullySentVerifications;
@property(readonly, nonatomic) unsigned int maxAllowableNumberOfPreflightRequests;
@property(readonly, nonatomic) double minimumIntervalBetweenValidationAttempts;
@property(readonly, nonatomic) NSString *preflightTestDataOverride;
@property(readonly, nonatomic) IDSCTPNRValidationMechanism *preflightShortCircuitMechanismOverride;
- (_Bool)isPrefightEnabledByServerBag;	// IMP=0x00000001003ea088
@property(readonly, nonatomic) long long validationMode;
@property(readonly, nonatomic) _Bool isValidationModeShortCircuitingPreflight;
@property(readonly, nonatomic) _Bool isValidationModeUsingPreflight;
@property(readonly, nonatomic) _Bool isValidationModeLegacy;
- (id)initWithServerBag:(id)arg1;	// IMP=0x00000001003e9bf0
- (id)init;	// IMP=0x00000001003e9b48

@end

