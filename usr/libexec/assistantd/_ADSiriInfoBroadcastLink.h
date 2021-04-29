//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADRapportLinkListening-Protocol.h"

@class ADRapportLink, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface _ADSiriInfoBroadcastLink : NSObject <ADRapportLinkListening>
{
    ADRapportLink *_rapportLink;	// 8 = 0x8
    NSMutableDictionary *_siriInfoCache;	// 16 = 0x10
    unsigned long long _generation;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    _Bool _isLocalDeviceAvailble;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100069dc8
- (void)_broadcastSiriInfo:(_Bool)arg1;	// IMP=0x0000000100069bcc
- (void)_handleFoundRemoteDevice:(id)arg1;	// IMP=0x0000000100069b54
- (void)_handleUpdatedLocalDevice:(id)arg1;	// IMP=0x0000000100069ac8
- (void)rapportLinkDidInvalidate:(id)arg1;	// IMP=0x0000000100069a54
- (void)rapportLinkDidInterrupt:(id)arg1;	// IMP=0x00000001000699e0
- (void)rapportLink:(id)arg1 didFindDevice:(id)arg2;	// IMP=0x0000000100069950
- (void)rapportLink:(id)arg1 didUpdateLocalDevice:(id)arg2;	// IMP=0x00000001000698c0
- (void)updateSiriInfoWithObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010006966c
- (id)siriInfoToBeBroadcasted;	// IMP=0x000000010006955c
- (void)_configureRapportLink;	// IMP=0x0000000100069280
- (id)init;	// IMP=0x00000001000691c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

