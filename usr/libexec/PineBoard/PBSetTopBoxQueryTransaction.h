//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class NSDate, NSObject, NSString, VSIdentityProviderInfoCenter;
@protocol OS_os_log;

@interface PBSetTopBoxQueryTransaction : BSTransaction
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
    VSIdentityProviderInfoCenter *_identityProviderInfoCenter;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    NSDate *_completionDate;	// 32 = 0x20
    NSString *_previousBundleIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010012bd94
@property(readonly, nonatomic) NSString *previousBundleIdentifier; // @synthesize previousBundleIdentifier=_previousBundleIdentifier;
@property(readonly, nonatomic) NSDate *completionDate; // @synthesize completionDate=_completionDate;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) VSIdentityProviderInfoCenter *identityProviderInfoCenter; // @synthesize identityProviderInfoCenter=_identityProviderInfoCenter;
- (void)_begin;	// IMP=0x000000010012b5d8
- (_Bool)_canBeInterrupted;	// IMP=0x000000010012b5bc
- (double)watchdogTimeout;	// IMP=0x000000010012b5a0
- (_Bool)shouldWatchdog:(id *)arg1;	// IMP=0x000000010012b580
@property(readonly, nonatomic, getter=isFresh) _Bool fresh;
- (id)init;	// IMP=0x000000010012b438
- (id)initWithLog:(id)arg1 identityProviderInfoCenter:(id)arg2 currentBundleIdentifier:(id)arg3;	// IMP=0x000000010012b2d8

@end
