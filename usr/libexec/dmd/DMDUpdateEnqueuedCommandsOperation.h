//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDTaskOperation.h"

@interface DMDUpdateEnqueuedCommandsOperation : DMDTaskOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100068bc0
+ (id)requiredEntitlements;	// IMP=0x0000000100068a8c
+ (id)whitelistedClassesForRequest;	// IMP=0x0000000100068a50
- (void)runWithRequest:(id)arg1;	// IMP=0x0000000100068aa0
- (unsigned long long)queueGroup;	// IMP=0x0000000100068a98

@end

