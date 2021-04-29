//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class MSDHubTrustEvaluate, MSDPartialDownload, NSError, NSFileHandle, NSMutableURLRequest, NSNotificationCenter, NSString, NSURLSession, NSURLSessionDataTask;
@protocol OS_dispatch_semaphore;

@interface MSDCDNConnection : NSObject <NSURLSessionDelegate>
{
    _Bool _userInitiatedCanceled;	// 8 = 0x8
    _Bool _sourceIsLocal;	// 9 = 0x9
    NSURLSession *_session;	// 16 = 0x10
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 24 = 0x18
    NSString *_toFile;	// 32 = 0x20
    NSFileHandle *_toFileHandle;	// 40 = 0x28
    NSError *_error;	// 48 = 0x30
    NSMutableURLRequest *_request;	// 56 = 0x38
    NSURLSessionDataTask *_task;	// 64 = 0x40
    NSNotificationCenter *_userInteractionNotification;	// 72 = 0x48
    MSDPartialDownload *_contentRange;	// 80 = 0x50
    long long _retryCount;	// 88 = 0x58
    MSDHubTrustEvaluate *_trustObject;	// 96 = 0x60
}

+ (id)sharedInstance;	// IMP=0x000000010005708c
- (void).cxx_destruct;	// IMP=0x0000000100059f54
@property _Bool sourceIsLocal; // @synthesize sourceIsLocal=_sourceIsLocal;
@property _Bool userInitiatedCanceled; // @synthesize userInitiatedCanceled=_userInitiatedCanceled;
@property(retain) MSDHubTrustEvaluate *trustObject; // @synthesize trustObject=_trustObject;
@property long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain) MSDPartialDownload *contentRange; // @synthesize contentRange=_contentRange;
@property(retain) NSNotificationCenter *userInteractionNotification; // @synthesize userInteractionNotification=_userInteractionNotification;
@property(retain) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(retain) NSMutableURLRequest *request; // @synthesize request=_request;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSFileHandle *toFileHandle; // @synthesize toFileHandle=_toFileHandle;
@property(retain) NSString *toFile; // @synthesize toFile=_toFile;
@property(retain) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain) NSURLSession *session; // @synthesize session=_session;
- (long long)getCountStat:(id)arg1 inTimingData:(id)arg2;	// IMP=0x0000000100059ce0
- (void)getTimingDataInfo:(id)arg1;	// IMP=0x0000000100059634
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010005932c
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000100058e5c
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0000000100058a20
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000587e0
- (void)invalidate;	// IMP=0x00000001000587a0
- (_Bool)directDownload:(id)arg1 withCredential:(id)arg2 to:(id)arg3 localSource:(_Bool)arg4 isContentFile:(_Bool)arg5 error:(id *)arg6 retry:(long long)arg7;	// IMP=0x00000001000576b0
- (id)init;	// IMP=0x00000001000570f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

