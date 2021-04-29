//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRAVBufferedInputStream.h>

#import "APReceiverMediaRemoteCommunicationChannelDelegate-Protocol.h"

@class NSString;

@interface MRDAirPlayInputStream : MRAVBufferedInputStream <APReceiverMediaRemoteCommunicationChannelDelegate>
{
}

- (void)failedToSetupReverseCommunicationChannel:(id)arg1;	// IMP=0x000000010005a0ac
- (void)didSetupReverseCommunicationChannel:(id)arg1;	// IMP=0x000000010005a0a8
- (void)didCloseCommunicationChannel:(id)arg1;	// IMP=0x0000000100059fd0
- (void)didReceiveData:(id)arg1 fromCommunicationChannel:(id)arg2;	// IMP=0x0000000100059ec0
- (id)initWithURL:(id)arg1;	// IMP=0x0000000100059dfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
