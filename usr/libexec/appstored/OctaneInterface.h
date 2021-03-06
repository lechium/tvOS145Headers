//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface OctaneInterface : NSObject
{
}

+ (id)setStringValue:(id)arg1 forIdentifier:(unsigned long long)arg2 withContext:(id)arg3;	// IMP=0x00000001001d69ec
+ (id)getStringValueForIdentifier:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x00000001001d693c
+ (id)setIntegerValue:(long long)arg1 forIdentifier:(unsigned long long)arg2 withContext:(id)arg3;	// IMP=0x00000001001d687c
+ (long long)getIntegerValueForIdentifier:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x00000001001d67d4
+ (void)useConfigurationDirectory:(id)arg1 forBundleID:(id)arg2;	// IMP=0x00000001001d674c
+ (id)setStorefront:(id)arg1 withContext:(id)arg2;	// IMP=0x00000001001d6688
+ (id)resolveIssueWithContext:(id)arg1;	// IMP=0x00000001001d65c8
+ (id)refundTransactionWithContext:(id)arg1;	// IMP=0x00000001001d6508
+ (id)getTransactionDataWithContext:(id)arg1;	// IMP=0x00000001001d6460
+ (id)getStorefrontWithContext:(id)arg1;	// IMP=0x00000001001d63b8
+ (id)expireOrRenewSubscriptionWithProductID:(id)arg1 expire:(_Bool)arg2 withContext:(id)arg3;	// IMP=0x00000001001d62e4
+ (id)deleteTransactionWithContext:(id)arg1;	// IMP=0x00000001001d6224
+ (id)deleteAllTransactionsWithContext:(id)arg1;	// IMP=0x00000001001d617c
+ (id)completeAskToBuyRequestWithResponse:(_Bool)arg1 withContext:(id)arg2;	// IMP=0x00000001001d60ac
+ (id)clearOverridesWithContext:(id)arg1;	// IMP=0x00000001001d6004
+ (id)changeAutoRenewStatus:(_Bool)arg1 withContext:(id)arg2;	// IMP=0x00000001001d5f34
+ (id)cancelTransactionWithContext:(id)arg1;	// IMP=0x00000001001d5e74
+ (id)buyProductWithID:(id)arg1 withContext:(id)arg2;	// IMP=0x00000001001d5db0
+ (long long)activePort;	// IMP=0x00000001001d5d58
+ (void)appRemovedWithBundleID:(id)arg1;	// IMP=0x00000001001d5cf4

@end

