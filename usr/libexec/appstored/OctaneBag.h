//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMSBagProtocol-Protocol.h"

@class AMSProcessInfo, NSDate, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface OctaneBag : NSObject <AMSBagProtocol>
{
    NSDictionary *_dictionary;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    long long _port;	// 24 = 0x18
    _Bool expired;	// 32 = 0x20
    NSDate *expirationDate;	// 40 = 0x28
    NSString *profile;	// 48 = 0x30
    NSString *profileVersion;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010022a7cc
@property(readonly, copy, nonatomic) NSString *profileVersion; // @synthesize profileVersion;
@property(readonly, copy, nonatomic) NSString *profile; // @synthesize profile;
@property(readonly, nonatomic, getter=isExpired) _Bool expired; // @synthesize expired;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate;
- (void)_fetchBag;	// IMP=0x000000010022a2b8
- (id)_bagValueForKey:(id)arg1 ofType:(unsigned long long)arg2;	// IMP=0x0000000100229ef4
- (id)stringForKey:(id)arg1;	// IMP=0x0000000100229ee4
- (id)integerForKey:(id)arg1;	// IMP=0x0000000100229ed4
- (id)doubleForKey:(id)arg1;	// IMP=0x0000000100229ec4
- (id)dictionaryForKey:(id)arg1;	// IMP=0x0000000100229eb4
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100229ea0
- (id)boolForKey:(id)arg1;	// IMP=0x0000000100229e90
- (id)arrayForKey:(id)arg1;	// IMP=0x0000000100229e80
- (id)URLForKey:(id)arg1;	// IMP=0x0000000100229e70
- (void)invalidate;	// IMP=0x0000000100229e08
- (id)init;	// IMP=0x0000000100229d80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property(readonly) Class superclass;

@end

