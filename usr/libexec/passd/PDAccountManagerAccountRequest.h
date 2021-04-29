//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDAccountManagerFetchRequest-Protocol.h"

@class NSMutableSet, NSSet, NSString;

@interface PDAccountManagerAccountRequest : NSObject <PDAccountManagerFetchRequest>
{
    NSMutableSet *_completionHandlers;	// 8 = 0x8
    _Bool _fetchExtendedAccount;	// 16 = 0x10
    NSString *_accountIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001002a2820
@property(readonly, copy, nonatomic) NSSet *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) _Bool fetchExtendedAccount; // @synthesize fetchExtendedAccount=_fetchExtendedAccount;
@property(readonly, copy) NSString *description;
- (void)callCompletionsWithAccount:(id)arg1 error:(id)arg2;	// IMP=0x00000001002a2520
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001002a24d8
- (_Bool)coalesceWithRequest:(id)arg1;	// IMP=0x00000001002a2368
- (id)requestIdentifier;	// IMP=0x00000001002a22a8
- (unsigned long long)requestType;	// IMP=0x00000001002a22a0
- (id)initWithAccountIdentifier:(id)arg1;	// IMP=0x00000001002a220c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
