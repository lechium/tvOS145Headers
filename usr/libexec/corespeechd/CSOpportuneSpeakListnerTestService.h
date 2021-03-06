//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSOpportuneSpeakListenerDelegate-Protocol.h"

@class CSOpportuneSpeakListener, NSString;
@protocol OS_dispatch_queue;

@interface CSOpportuneSpeakListnerTestService : NSObject <CSOpportuneSpeakListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    int _notifyToken;	// 16 = 0x10
    CSOpportuneSpeakListener *listener;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010002def4
- (void)opportuneSpeakListener:(id)arg1 didStopUnexpectly:(_Bool)arg2;	// IMP=0x000000010002de40
- (void)opportuneSpeakListener:(id)arg1 hasVADAvailable:(_Bool)arg2;	// IMP=0x000000010002dd8c
- (void)opportuneSpeakListener:(id)arg1 hasRemoteVADAvailable:(_Bool)arg2;	// IMP=0x000000010002dcd8
- (void)receiveOpportuneSpeakListenerStop;	// IMP=0x000000010002dbb8
- (void)receiveOpportuneSpeakListenerStart;	// IMP=0x000000010002da20
- (void)start;	// IMP=0x000000010002d950
- (id)init;	// IMP=0x000000010002d8e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

