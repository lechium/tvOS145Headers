//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MRDHostedRoutingController.h"

@class NSArray;

@interface MRDExternalHostedRoutingController : MRDHostedRoutingController
{
    NSArray *_audioOutputDevices;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000010001423c
- (id)_onQueue_makeExternalDeviceTransportForEndpoint:(id)arg1 designatedGroupLeader:(id)arg2;	// IMP=0x00000001000141e8
- (void)_onQueue_reloadWithEndpoints:(id)arg1;	// IMP=0x00000001000139cc
- (void)_onQueue_reloadEndpoints;	// IMP=0x0000000100013958
- (void)_onQueue_reloadWithOutputDevices:(id)arg1;	// IMP=0x0000000100013634
- (id)availableDistantAudioOutputDevices;	// IMP=0x0000000100013540
- (id)createDiscoverySession;	// IMP=0x0000000100013514

@end

