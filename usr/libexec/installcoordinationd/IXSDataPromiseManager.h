//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IXSDataPromiseDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface IXSDataPromiseManager : NSObject <IXSDataPromiseDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_uuidToPromiseMap;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001000465b0
+ (id)saveDir;	// IMP=0x0000000100046524
+ (id)savePathForPromise:(id)arg1;	// IMP=0x0000000100046438
- (void).cxx_destruct;	// IMP=0x0000000100048658
@property(readonly, nonatomic) NSMutableDictionary *uuidToPromiseMap; // @synthesize uuidToPromiseMap=_uuidToPromiseMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)promise:(id)arg1 didCancelForReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x00000001000484b4
- (void)promise:(id)arg1 didUpdateProgress:(double)arg2;	// IMP=0x00000001000483c4
- (void)promiseDidReset:(id)arg1;	// IMP=0x00000001000482ec
- (void)promiseDidComplete:(id)arg1;	// IMP=0x0000000100048214
- (void)promiseDidBegin:(id)arg1;	// IMP=0x000000010004813c
- (void)clearAllPromisesForCreator:(unsigned long long)arg1;	// IMP=0x0000000100047d30
- (void)decommissionPromise:(id)arg1;	// IMP=0x0000000100047c04
- (void)enumeratePromises:(CDUnknownBlockType)arg1;	// IMP=0x0000000100047a58
- (void)registerPromise:(id)arg1;	// IMP=0x0000000100047798
- (id)promiseForUUID:(id)arg1;	// IMP=0x00000001000475b0
- (id)promiseForUUID:(id)arg1 ofType:(Class)arg2;	// IMP=0x00000001000475a0
- (id)_promiseForUUID:(id)arg1 ofType:(Class)arg2 useQueue:(_Bool)arg3;	// IMP=0x00000001000473c0
- (void)_onQueue_restoreSavedPromises;	// IMP=0x0000000100046758
- (id)init;	// IMP=0x0000000100046650

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
