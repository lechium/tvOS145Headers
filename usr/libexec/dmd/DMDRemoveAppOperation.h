//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDAppOperation.h"

@interface DMDRemoveAppOperation : DMDAppOperation
{
}

+ (void)removeAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005c000
+ (_Bool)removeAppMetadataForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005bd20
+ (id)requiredEntitlements;	// IMP=0x000000010005ba14
+ (id)whitelistedClassesForRequest;	// IMP=0x000000010005b9d8
- (void)runWithRequest:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000010005ba20

@end

