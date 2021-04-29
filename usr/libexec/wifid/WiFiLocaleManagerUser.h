//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WiFiLocaleManagerDelegate-Protocol.h"

@class NSCountedSet, NSString, WiFiLocaleManager;

@interface WiFiLocaleManagerUser : NSObject <WiFiLocaleManagerDelegate>
{
    struct __WiFiManager *_manager;	// 8 = 0x8
    WiFiLocaleManager *_localeManager;	// 16 = 0x10
    NSCountedSet *_countryCodeList;	// 24 = 0x18
    unsigned long long _countryCodeIECount;	// 32 = 0x20
    NSString *_peerCountryCode;	// 40 = 0x28
}

- (id)getPeerCountryCode;	// IMP=0x000000010012a1dc
- (id)get80211dCountryCodes:(unsigned long long *)arg1;	// IMP=0x000000010012a034
- (id)getCompanionCountryCode;	// IMP=0x0000000100129dd4
- (unsigned char)setDeviceCountryCode:(id)arg1;	// IMP=0x0000000100129c9c
- (id)getDeviceCountryCode;	// IMP=0x0000000100129a20
- (unsigned char)suspendLocaleCheck;	// IMP=0x0000000100129924
- (void)setLocaleTestParams:(id)arg1;	// IMP=0x0000000100129914
- (void)updatePeerCountryCode:(id)arg1;	// IMP=0x000000010012986c
- (void)update80211dCountryCodes:(id)arg1;	// IMP=0x00000001001296c4
- (id)getLocaleCountryCode;	// IMP=0x00000001001296b4
- (double)getLocaleLastUpdatedTime;	// IMP=0x00000001001296a4
- (int)getLocaleSource;	// IMP=0x0000000100129694
- (void)determineAndSetLocale:(unsigned char)arg1;	// IMP=0x0000000100129684
- (void)dealloc;	// IMP=0x000000010012962c
- (id)initWithContext:(struct __WiFiManager *)arg1;	// IMP=0x0000000100129584

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

