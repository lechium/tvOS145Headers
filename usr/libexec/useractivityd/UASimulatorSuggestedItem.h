//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UAAdvertisableItem.h"

@class UASimulator;

@interface UASimulatorSuggestedItem : UAAdvertisableItem
{
    UASimulator *_simulator;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100078ba8
@property(retain) UASimulator *simulator; // @synthesize simulator=_simulator;
- (void)clearPayload;	// IMP=0x0000000100078b58
- (_Bool)wasResumedOnAnotherDeviceWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010007876c
- (_Bool)requestPayloadWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100078170
- (id)initWithArchivedUserActivityInfo:(id)arg1 peerDevice:(id)arg2 simulator:(id)arg3;	// IMP=0x0000000100078050
- (id)initWithUserActivityInfo:(id)arg1 peerDevice:(id)arg2 simulator:(id)arg3;	// IMP=0x0000000100077f4c

@end
