//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDTaskOperation.h"

@interface DMDSendEventOperation : DMDTaskOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005f610
+ (id)requiredEntitlements;	// IMP=0x000000010005f370
+ (id)whitelistedClassesForRequest;	// IMP=0x000000010005f334
- (void)runWithRequest:(id)arg1;	// IMP=0x000000010005f38c
- (_Bool)runOnMainThread;	// IMP=0x000000010005f384
- (unsigned long long)queueGroup;	// IMP=0x000000010005f37c

@end
