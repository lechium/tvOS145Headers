//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSMutableArray;
@protocol MediaSocialStatusPollingDelegate, OS_dispatch_queue;

@interface MediaSocialStatusPollingCoordinator : NSObject
{
    id _btaObserver;	// 8 = 0x8
    id <MediaSocialStatusPollingDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    double _nextScheduledPoll;	// 32 = 0x20
    ISOperationQueue *_operationQueue;	// 40 = 0x28
    double _pollingInterval;	// 48 = 0x30
    NSMutableArray *_requests;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001001e111c
@property(nonatomic) __weak id <MediaSocialStatusPollingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_finishRequests:(id)arg1 withResponses:(id)arg2;	// IMP=0x00000001001e0b80
- (void)_addBackgroundTaskJob;	// IMP=0x00000001001e08a8
- (void)_handleBackgroundTaskEvent:(id)arg1;	// IMP=0x00000001001e02a0
@property(readonly, nonatomic) long long numberOfPollRequests;
- (void)addPollRequest:(id)arg1;	// IMP=0x00000001001e019c
- (void)dealloc;	// IMP=0x00000001001e011c
- (id)initWithDispatchQueue:(id)arg1;	// IMP=0x00000001001dff10

@end

