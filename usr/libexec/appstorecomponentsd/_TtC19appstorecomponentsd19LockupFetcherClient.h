//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC19appstorecomponentsd19LockupFetcherClient : NSObject
{
    MISSING_TYPE *fetcher;	// 8 = 0x8
    MISSING_TYPE *service;	// 48 = 0x30
    MISSING_TYPE *appStateController;	// 88 = 0x58
    MISSING_TYPE *bag;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000100022a34
- (id)init;	// IMP=0x00000001000229d4
- (void)getLockupCollectionWithRequest:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100022944
- (void)getLockupForBundleID:(id)arg1 withContext:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100022510
- (void)getLockupsWithRequest:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100021c3c
- (void)getLockupWithRequest:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000218d4

@end

