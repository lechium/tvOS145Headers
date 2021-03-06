//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADRapportLinkListening-Protocol.h"

@class ADRapportLink, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ADRemoteContextStore : NSObject <ADRapportLinkListening>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ADRapportLink *_rapportLink;	// 16 = 0x10
    NSMutableDictionary *_remoteContext;	// 24 = 0x18
    _Bool _contextCollectionAllowed;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100116e80
- (void)_dumpStateForReason:(id)arg1;	// IMP=0x0000000100116c84
- (void)rapportLink:(id)arg1 didLoseDevice:(id)arg2;	// IMP=0x0000000100116af8
- (void)getSerializedDeviceContextSnapshotIncludingKeys:(id)arg1 excludingMandatoryKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100116670
- (void)setDeviceContext:(id)arg1 withIncludedKeys:(id)arg2 excludedKeys:(id)arg3 forDeviceWithIDSDeviceUniqueIdentifier:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100116380
- (void)updateRapportLink:(id)arg1;	// IMP=0x00000001001162b0
- (void)_fetchContextFromCollectorAndForceFetchingFromDevices:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001157ec
- (void)_fetchContextFromDeviceWithIDSIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001154dc
- (id)_contextLinkMessageOptions;	// IMP=0x0000000100115458
- (void)getContextSnapshotFromAllDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100115240
- (void)getContextSnapshotFromDevicesWithIDSIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100114760
- (void)getContextSnapshotIncludingKeys:(id)arg1 excludingMandatoryKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001142a4
- (void)_setContextCollectionAllowed:(_Bool)arg1;	// IMP=0x0000000100114218
- (void)stopCollectingContext;	// IMP=0x0000000100114104
- (void)startCollectingContext;	// IMP=0x0000000100113ff0
- (id)initWithRapportLink:(id)arg1 queue:(id)arg2;	// IMP=0x0000000100113ef4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

