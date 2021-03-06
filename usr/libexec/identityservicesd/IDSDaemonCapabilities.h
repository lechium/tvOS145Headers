//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSCTAdapterListener-Protocol.h"

@class NSString;

@interface IDSDaemonCapabilities : NSObject <IDSCTAdapterListener>
{
    int _supportedServicesToken;	// 8 = 0x8
    struct MGNotificationTokenStruct *_MGVeniceChangedToken;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000001002f0f10
@property(nonatomic) struct MGNotificationTokenStruct *MGVeniceChangedToken; // @synthesize MGVeniceChangedToken=_MGVeniceChangedToken;
@property(nonatomic) int supportedServicesToken; // @synthesize supportedServicesToken=_supportedServicesToken;
- (void)_deferredUpdateCapabilities;	// IMP=0x00000001002f1b74
- (void)carrierBundleInformationDidChange;	// IMP=0x00000001002f1ab4
- (void)_setupTokens;	// IMP=0x00000001002f1a78
- (void)_listenForMGChanges;	// IMP=0x00000001002f1834
- (void)_updateCapabilities;	// IMP=0x00000001002f1204
- (void)dealloc;	// IMP=0x00000001002f11b0
- (id)init;	// IMP=0x00000001002f10a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

