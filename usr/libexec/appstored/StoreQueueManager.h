//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TaskQueue;
@protocol OS_dispatch_queue;

@interface StoreQueueManager : NSObject
{
    _Bool _automaticDownloadsAreDisabled;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    _Bool _checkAutomaticDownloadQueueOnEnable;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    TaskQueue *_operationQueue;	// 40 = 0x28
}

+ (id)storeItemsFromResponseDictionary:(id)arg1;	// IMP=0x000000010020c144
+ (_Bool)processJobResult:(id)arg1 forReason:(id)arg2;	// IMP=0x000000010020be70
+ (id)sharedInstance;	// IMP=0x000000010020af5c
- (void).cxx_destruct;	// IMP=0x000000010020c454
- (id)_operationQueue;	// IMP=0x000000010020c3f8
- (void)_dispatchCallbackAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000010020c2cc
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000010020c1a0
- (void)managedApplicationRequestWithOptions:(id)arg1 clientID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010020b950
- (void)getDownloadQueueWithType:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010020b4d4
- (void)enableAutomaticDownloadsWithReason:(id)arg1;	// IMP=0x000000010020b280
- (void)disableAutomaticDownloadsWithReason:(id)arg1;	// IMP=0x000000010020b140
- (void)claimApplicationsWithOptions:(id)arg1 clientID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010020b084
- (void)checkQueue:(long long)arg1 clientID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010020aff8
- (id)init;	// IMP=0x000000010020aed4

@end

