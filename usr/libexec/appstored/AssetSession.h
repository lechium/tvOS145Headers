//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDataDelegatePrivate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"
#import "NSURLSessionTaskDelegatePrivate-Protocol.h"

@class NSMutableDictionary, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol OS_dispatch_queue;

@interface AssetSession : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSURLSessionTaskDelegate, NSURLSessionTaskDelegatePrivate>
{
    NSOperationQueue *_delegateQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSURLSession *_session;	// 24 = 0x18
    NSMutableDictionary *_sessions;	// 32 = 0x20
}

+ (void)obliterateBackgroundSessionsAndHandleEventStream;	// IMP=0x00000001001fda70
+ (id)defaultSession;	// IMP=0x00000001001fd8a0
- (void).cxx_destruct;	// IMP=0x0000000100204034
- (void)_startTaskUsingTaskInfo:(id)arg1 withRequest:(id)arg2;	// IMP=0x0000000100203134
- (void)_prepareRequestUsingTaskInfo:(id)arg1;	// IMP=0x0000000100202c00
- (void)_prepareDataConsumerUsingTaskInfo:(id)arg1;	// IMP=0x00000001002024c4
- (void)_retryTaskUsingTaskInfo:(id)arg1;	// IMP=0x000000010020205c
- (void)_reportMetricsForTaskInfo:(id)arg1 withCompletionError:(id)arg2;	// IMP=0x0000000100201c9c
- (void)_finishPromiseUsingTaskInfo:(id)arg1;	// IMP=0x00000001002018c4
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010020162c
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;	// IMP=0x00000001002012b0
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000100200a2c
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;	// IMP=0x00000001002005c0
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001febf4
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x00000001001fe390
- (id)assetPromiseWithRequest:(id)arg1;	// IMP=0x00000001001fdc34
@property(readonly) NSURLSessionConfiguration *configuration;
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000001001fd9dc
- (id)init;	// IMP=0x00000001001fd90c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

