//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSSearchDelegate-Protocol.h"
#import "TILinguisticDataSource-Protocol.h"

@class MSSearch, NSArray, NSCondition, NSString;

@interface TIMailDataSource : NSObject <MSSearchDelegate, TILinguisticDataSource>
{
    _Bool _valid;	// 8 = 0x8
    MSSearch *_search;	// 16 = 0x10
    TIMailDataSource *_strongSelf;	// 24 = 0x18
    NSCondition *_cond;	// 32 = 0x20
    NSArray *_outgoingMessages;	// 40 = 0x28
}

+ (id)searchCriterionForSenderAddresses:(id)arg1;	// IMP=0x00000001000077a0
- (void).cxx_destruct;	// IMP=0x00000001000082c4
@property(copy, nonatomic) NSArray *outgoingMessages; // @synthesize outgoingMessages=_outgoingMessages;
@property(nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) NSCondition *cond; // @synthesize cond=_cond;
@property(retain, nonatomic) TIMailDataSource *strongSelf; // @synthesize strongSelf=_strongSelf;
@property(retain, nonatomic) MSSearch *search; // @synthesize search=_search;
- (void)search:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x0000000100008110
- (_Bool)search:(id)arg1 didFindResults:(id)arg2;	// IMP=0x0000000100007e1c
- (id)nextOutgoingMessageBatch;	// IMP=0x0000000100007c98
- (void)searchMailWithSenderAddresses:(id)arg1;	// IMP=0x0000000100007ab8
- (void)searchAccounts:(id)arg1;	// IMP=0x00000001000075f4
- (void)initializeSearchIfNecessary;	// IMP=0x00000001000072fc
- (id)init;	// IMP=0x0000000100007290
- (void)dealloc;	// IMP=0x000000010000722c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

