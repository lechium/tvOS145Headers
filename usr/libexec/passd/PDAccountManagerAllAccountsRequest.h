//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDAccountManagerFetchRequest-Protocol.h"

@class NSMutableSet, NSSet, NSString;

@interface PDAccountManagerAllAccountsRequest : NSObject <PDAccountManagerFetchRequest>
{
    NSMutableSet *_completionHandlers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001002a2200
@property(readonly, copy, nonatomic) NSSet *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(readonly, copy) NSString *description;
- (void)callCompletionsWithAccounts:(id)arg1 error:(id)arg2;	// IMP=0x00000001002a1f6c
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002a1f24
- (_Bool)coalesceWithRequest:(id)arg1;	// IMP=0x00000001002a1e14
- (id)requestIdentifier;	// IMP=0x00000001002a1d90
- (unsigned long long)requestType;	// IMP=0x00000001002a1d88
- (id)init;	// IMP=0x00000001002a1d24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

