//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface UMEventSubmitter : NSObject <NSURLSessionTaskDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_completionHandlers;	// 16 = 0x10
    NSDictionary *_options;	// 24 = 0x18
}

- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000010001aad8
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010001aa0c
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x000000010001a9ac
- (void)submitEventData:(id)arg1 toURL:(id)arg2 withOptions:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010001a668
- (void)submitEventData:(id)arg1 toURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010001a654
- (id)_defaultSession;	// IMP=0x000000010001a528
- (void)dealloc;	// IMP=0x000000010001a4d0
- (id)init;	// IMP=0x000000010001a464

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
