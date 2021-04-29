//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSKeyTransparencyPolicy : NSObject
{
}

- (_Bool)isKeyTransparencyUIEnabled;	// IMP=0x00000001006022d0
- (_Bool)shouldSyncTrustCircleAfterSelfQueryForServiceIdentifier:(id)arg1;	// IMP=0x0000000100601f54
- (_Bool)isKeyTransparencySFAnalyticsEnabled;	// IMP=0x0000000100601e2c
- (_Bool)isKeyTransparencyRTCAnalyticsEnabled;	// IMP=0x0000000100601cec
- (_Bool)isKeyTransparencyAnalyticsEnabled;	// IMP=0x0000000100601bc4
- (unsigned long long)keyTransparencyMaximumVerificationsPerXPCActivity;	// IMP=0x0000000100601aac
- (unsigned long long)keyTransparencyXPCActivityIntervalInSeconds;	// IMP=0x0000000100601974
- (_Bool)isKeyTransparencyXPCActivityEnabled;	// IMP=0x000000010060184c
- (_Bool)isKeyTransparencyAccountKeyCircleEnabled;	// IMP=0x00000001006016e4
- (_Bool)isKeyTransparencyCloudKitCircleEnabled;	// IMP=0x000000010060157c
- (_Bool)isKeyTransparencyTrustCircleEnabled;	// IMP=0x0000000100601524
- (_Bool)isKeyTransparencyEnabledForServiceType:(id)arg1;	// IMP=0x00000001006014a8
- (_Bool)isKeyTransparencyEnabledForServiceIdentifier:(id)arg1;	// IMP=0x000000010060141c
- (long long)_keyTransparencyEnablementLevelFromServerBag;	// IMP=0x0000000100601300
- (_Bool)_isKeyTransparencyEnabledViaServerBag;	// IMP=0x00000001006012c4
- (_Bool)_isKeyTransparencyEnabledViaDefaults;	// IMP=0x000000010060126c
- (_Bool)isKeyTransparencyTrustCircleAllowedWithoutEnrollment;	// IMP=0x0000000100601250
- (_Bool)isKeyTransparencyPeerVerificationAllowedWithoutEnrollment;	// IMP=0x0000000100601214
- (_Bool)isKeyTransparencyEnabled;	// IMP=0x00000001006011b8

@end

