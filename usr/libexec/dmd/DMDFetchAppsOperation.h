//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDTaskOperation.h"

@interface DMDFetchAppsOperation : DMDTaskOperation
{
}

+ (void)_fetchAppsForBundleIdentifier:(id)arg1 type:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100045dac
+ (void)fetchAppsForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000450ec
+ (id)requiredEntitlements;	// IMP=0x0000000100044fc8
+ (id)whitelistedClassesForRequest;	// IMP=0x0000000100044f8c
- (void)runWithRequest:(id)arg1;	// IMP=0x0000000100044fd4

@end
