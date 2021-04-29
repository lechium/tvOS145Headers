//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CSBluetoothWirelessSplitterInfo : NSObject
{
    NSMutableArray *_splitterDeviceList;	// 8 = 0x8
    _Bool _splitterEnabled;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000a7c80
@property(nonatomic) _Bool splitterEnabled; // @synthesize splitterEnabled=_splitterEnabled;
- (_Bool)_hasDeviceTemporaryPairedNotInContacts;	// IMP=0x00000001000a7b18
@property(readonly, nonatomic) _Bool shouldDisableSpeakerVerificationInSplitterMode;
- (unsigned long long)splitterState;	// IMP=0x00000001000a796c
- (void)addDeviceIntoSplitterDeviceList:(id)arg1;	// IMP=0x00000001000a7954
- (id)splitterDeviceList;	// IMP=0x00000001000a7934
- (id)description;	// IMP=0x00000001000a7758
- (id)init;	// IMP=0x00000001000a76e4

@end

