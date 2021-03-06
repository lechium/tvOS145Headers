//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSError, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BLStoreDownloadQueueResponse : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableOrderedSet *_clusterMappings;	// 16 = 0x10
    NSMutableOrderedSet *_downloads;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    NSDictionary *_itemErrors;	// 40 = 0x28
    NSData *_keybag;	// 48 = 0x30
    NSArray *_rangesToLoad;	// 56 = 0x38
    _Bool _shouldCancelPurchaseBatch;	// 64 = 0x40
    _Bool _triggeredQueueCheck;	// 65 = 0x41
    NSNumber *_userIdentifier;	// 72 = 0x48
    NSString *_storeCorrelationID;	// 80 = 0x50
    NSString *_clientIdentifier;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010002c454
@property NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property NSString *storeCorrelationID; // @synthesize storeCorrelationID=_storeCorrelationID;
@property(readonly) NSOrderedSet *clusterMappings; // @synthesize clusterMappings=_clusterMappings;
- (id)_accountUniqueIdentifierFromValue:(id)arg1;	// IMP=0x000000010002c388
- (id)_responseDictionary:(id)arg1 valueForProtocolKey:(id)arg2;	// IMP=0x000000010002c2c8
- (id)_errorWithFailureType:(id)arg1 customerMessage:(id)arg2 responseDictionary:(id)arg3;	// IMP=0x000000010002c15c
@property(readonly) NSNumber *userIdentifier;
@property _Bool triggeredQueueCheck;
@property _Bool shouldCancelPurchaseBatch;
@property(retain) NSError *error;
@property(readonly) NSArray *rangesToLoad;
@property(readonly) NSData *keybag;
- (id)errorForItemIdentifier:(id)arg1;	// IMP=0x000000010002be54
@property(readonly) NSOrderedSet *downloads;
- (id)initWithError:(id)arg1 userIdentifier:(id)arg2;	// IMP=0x000000010002bcb8
- (id)initWithDictionary:(id)arg1 userIdentifier:(id)arg2 preferredAssetFlavor:(id)arg3;	// IMP=0x000000010002aed0
- (id)initWithDictionary:(id)arg1 userIdentifier:(id)arg2;	// IMP=0x000000010002aec0
- (id)init;	// IMP=0x000000010002aeb4
- (id)_initStoreDownloadQueueResponse;	// IMP=0x000000010002ae4c

@end

