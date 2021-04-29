//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADRequestLifecycleListening-Protocol.h"

@class AFNotifyObserver, NSString;
@protocol OS_dispatch_queue;

@interface ADHomeAnnouncementService : NSObject <ADRequestLifecycleListening>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AFNotifyObserver *_notifyObserver;	// 16 = 0x10
}

+ (id)sharedService;	// IMP=0x000000010027427c
- (void).cxx_destruct;	// IMP=0x0000000100274a30
- (_Bool)_shouldStopPlaybackWhenRequestBegins;	// IMP=0x0000000100274a0c
- (void)_stopPlayback;	// IMP=0x0000000100274768
- (void)_stopPlaybackIfNeeded;	// IMP=0x00000001002745a4
- (void)requestLifecycleObserver:(id)arg1 requestDidEndWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00000001002745a0
- (void)requestLifecycleObserver:(id)arg1 requestWasCancelledWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x000000010027459c
- (void)requestLifecycleObserver:(id)arg1 requestWillBeginWithInfo:(id)arg2 origin:(long long)arg3 client:(id)arg4;	// IMP=0x00000001002744e4
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x0000000100274398
- (void)stopPlayback;	// IMP=0x0000000100274330

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
