//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_PBSMediaRemoteServiceInternalInterface-Protocol.h"

@class NSMutableDictionary, NSString, PBSystemServiceConnection;

@interface PBMediaRemoteService : NSObject <_PBSMediaRemoteServiceInternalInterface>
{
    PBSystemServiceConnection *_remoteConnection;	// 8 = 0x8
    NSMutableDictionary *_pinViewControllerContextsByToken;	// 16 = 0x10
}

+ (_Bool)_connectionHasValidEntitlement:(id)arg1;	// IMP=0x00000001001d01dc
+ (void)_updateTVAVRPowerControlAvailableState;	// IMP=0x00000001001ce16c
+ (void)_updateVolumeControlAvailableState;	// IMP=0x00000001001cdfd0
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001001cdec4
+ (id)_audioRoutingController;	// IMP=0x00000001001cdd84
+ (void)initialize;	// IMP=0x00000001001cd9bc
- (void).cxx_destruct;	// IMP=0x00000001001d03e8
@property(readonly, nonatomic) NSMutableDictionary *pinViewControllerContextsByToken; // @synthesize pinViewControllerContextsByToken=_pinViewControllerContextsByToken;
@property(readonly, nonatomic) __weak PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (_Bool)_hasValidEntitlement;	// IMP=0x00000001001d016c
- (void)__volumeControlTargetDeviceTypeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001cff3c
- (void)__noteUserPresenceDetected;	// IMP=0x00000001001cfc60
- (void)__dismissPinDialogWithToken:(id)arg1;	// IMP=0x00000001001cf984
- (void)__showPinDialogWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001cef40
- (void)__stopSiriWithContext:(id)arg1;	// IMP=0x00000001001cec78
- (void)__startSiriWithContext:(id)arg1;	// IMP=0x00000001001ce840
- (void)__activateSiriWithContext:(id)arg1;	// IMP=0x00000001001ce2ec
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x00000001001cd8c4
- (id)init;	// IMP=0x00000001001cd88c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

