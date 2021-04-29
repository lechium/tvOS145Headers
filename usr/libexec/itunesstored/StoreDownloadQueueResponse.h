//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSError, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSString;
@protocol OS_dispatch_queue;

@interface StoreDownloadQueueResponse : NSObject
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

- (void).cxx_destruct;	// IMP=0x0000000100013ef0
@property NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property NSString *storeCorrelationID; // @synthesize storeCorrelationID=_storeCorrelationID;
@property(readonly) NSOrderedSet *clusterMappings; // @synthesize clusterMappings=_clusterMappings;
- (id)_errorWithFailureType:(id)arg1 customerMessage:(id)arg2;	// IMP=0x0000000100013de8
@property(readonly) NSNumber *userIdentifier;
@property _Bool triggeredQueueCheck;
@property _Bool shouldCancelPurchaseBatch;
@property(retain) NSError *error;
@property(readonly) NSArray *rangesToLoad;
@property(readonly) NSData *keybag;
- (id)errorForItemIdentifier:(id)arg1;	// IMP=0x0000000100013ae0
@property(readonly) NSOrderedSet *downloads;
- (id)initWithError:(id)arg1 userIdentifier:(id)arg2;	// IMP=0x00000001000138e4
- (id)initWithDictionary:(id)arg1 userIdentifier:(id)arg2 preferredAssetFlavor:(id)arg3;	// IMP=0x0000000100012be8
- (id)initWithDictionary:(id)arg1 userIdentifier:(id)arg2;	// IMP=0x0000000100012bd8
- (id)init;	// IMP=0x0000000100012bcc
- (id)_initStoreDownloadQueueResponse;	// IMP=0x0000000100012b64
- (id)_newManifestWithStoreDownloadQueueResponse:(id)arg1 accountID:(id)arg2 accountName:(id)arg3;	// IMP=0x0000000100174384
- (void)enumerateActivitiesWithAccountID:(id)arg1 accountName:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100173c70
- (id)copyJobManifestWithAccountID:(id)arg1 accountName:(id)arg2;	// IMP=0x0000000100173bfc

@end

