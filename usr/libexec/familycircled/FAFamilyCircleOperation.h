//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class AAURLSession, ACAccount, NSData, NSString, NSURL;
@protocol FAURLProvider;

@interface FAFamilyCircleOperation : NSOperation
{
    struct os_unfair_lock_s _executionLock;	// 8 = 0x8
    id <FAURLProvider> _urlProvider;	// 16 = 0x10
    AAURLSession *_urlSession;	// 24 = 0x18
    _Bool _executing;	// 32 = 0x20
    _Bool _finished;	// 33 = 0x21
    NSURL *_url;	// 40 = 0x28
    NSData *_receivedData;	// 48 = 0x30
    ACAccount *_account;	// 56 = 0x38
}

+ (id)urlEndpoint;	// IMP=0x0000000100006128
- (void).cxx_destruct;	// IMP=0x0000000100006970
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSData *receivedData; // @synthesize receivedData=_receivedData;
@property(readonly) NSURL *url; // @synthesize url=_url;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (void)didFailWithError:(id)arg1;	// IMP=0x000000010000691c
- (void)didReceivePropertyListResponse:(id)arg1;	// IMP=0x0000000100006918
- (void)didFinishLoading;	// IMP=0x00000001000066d8
- (void)finish;	// IMP=0x0000000100006668
- (void)dealloc;	// IMP=0x000000010000661c
- (void)_resumeDataTask;	// IMP=0x00000001000063fc
- (void)start;	// IMP=0x0000000100006130
- (void)notifyStart;	// IMP=0x00000001000060cc
- (id)urlRequest;	// IMP=0x0000000100006000
- (_Bool)isAsynchronous;	// IMP=0x0000000100005f40
@property(nonatomic, getter=isReady) _Bool ready;
@property(readonly, copy) NSString *username;
- (id)initWithAccount:(id)arg1 urlSession:(id)arg2;	// IMP=0x0000000100005f0c
- (id)initWithAccount:(id)arg1 urlProvider:(id)arg2 urlSession:(id)arg3;	// IMP=0x0000000100005e0c

@end

