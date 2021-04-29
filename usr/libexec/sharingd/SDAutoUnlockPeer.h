//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockPeer : NSObject
{
    NSString *_deviceID;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
}

+ (id)stringFromState:(unsigned long long)arg1;	// IMP=0x00000001000c960c
- (void).cxx_destruct;	// IMP=0x00000001000c9688
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (void)handleConfirmationFailed;	// IMP=0x00000001000c95fc
- (void)handleRemoteRegistrationRequested;	// IMP=0x00000001000c95ec
- (void)handleBioLockout;	// IMP=0x00000001000c95dc
- (void)handleDeviceUnlocked;	// IMP=0x00000001000c93f4
- (void)handleRegistrationCompletedSuccessfully:(_Bool)arg1;	// IMP=0x00000001000c93dc
- (void)handleRegistrationBegan;	// IMP=0x00000001000c92f4
- (void)handlePairedSuccessfully;	// IMP=0x00000001000c920c
@property(readonly, nonatomic) _Bool canPerformUnlocks;
@property(readonly, nonatomic) _Bool shouldRegister;
- (id)description;	// IMP=0x00000001000c90fc
- (id)initWithDeviceID:(id)arg1;	// IMP=0x00000001000c9074

@end

