//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDTaskOperation.h"

@interface DMDProcessStatusOperation : DMDTaskOperation
{
}

+ (_Bool)validateRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000010005b054
+ (id)requiredEntitlements;	// IMP=0x000000010005aef0
+ (id)whitelistedClassesForRequest;	// IMP=0x000000010005aeb4
- (void)runWithRequest:(id)arg1;	// IMP=0x000000010005af0c
- (_Bool)runOnMainThread;	// IMP=0x000000010005af04
- (unsigned long long)queueGroup;	// IMP=0x000000010005aefc

@end

