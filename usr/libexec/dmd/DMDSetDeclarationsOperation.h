//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDTaskOperation.h"

@interface DMDSetDeclarationsOperation : DMDTaskOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100060860
+ (id)requiredEntitlements;	// IMP=0x000000010006067c
+ (id)whitelistedClassesForRequest;	// IMP=0x0000000100060640
- (void)runWithRequest:(id)arg1;	// IMP=0x0000000100060698
- (_Bool)runOnMainThread;	// IMP=0x0000000100060690
- (unsigned long long)queueGroup;	// IMP=0x0000000100060688

@end
