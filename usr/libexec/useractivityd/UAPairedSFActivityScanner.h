//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SFPeerDevice, UAPairedSFActivityAdvertiser;
@protocol SFActivityScannerDelegate;

@interface UAPairedSFActivityScanner : NSObject
{
    _Bool _sendFoundDevice;	// 8 = 0x8
    UAPairedSFActivityAdvertiser *_pairedAdvertiser;	// 16 = 0x10
    id <SFActivityScannerDelegate> _delegate;	// 24 = 0x18
    SFPeerDevice *_peer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100043344
@property _Bool sendFoundDevice; // @synthesize sendFoundDevice=_sendFoundDevice;
@property(readonly, copy) SFPeerDevice *peer; // @synthesize peer=_peer;
@property id <SFActivityScannerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) UAPairedSFActivityAdvertiser *pairedAdvertiser; // @synthesize pairedAdvertiser=_pairedAdvertiser;
- (void)activityPayloadFromDevice:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(unsigned long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100043158
- (void)receiveAdvertisement:(id)arg1 options:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0000000100042f04
- (void)scanForTypes:(unsigned long long)arg1;	// IMP=0x0000000100042f00
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100042e20

@end

