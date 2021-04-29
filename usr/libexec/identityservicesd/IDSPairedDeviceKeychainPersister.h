//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSPairedDevicePersister-Protocol.h"

@class IDSPairedDeviceKeychainSchema, NSString;

@interface IDSPairedDeviceKeychainPersister : NSObject <IDSPairedDevicePersister>
{
    IDSPairedDeviceKeychainSchema *_keychainSchema;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100591360
- (_Bool)_removeFromKeychain;	// IMP=0x000000010059116c
- (_Bool)_saveToKeychainWithDictionary:(id)arg1;	// IMP=0x0000000100590f94
- (id)_pairedDevicesFromPropertyDictionaries:(id)arg1;	// IMP=0x0000000100590d3c
- (_Bool)savePairedDevices:(id)arg1;	// IMP=0x0000000100590c40
- (id)loadPairedDevices;	// IMP=0x0000000100590684
- (id)init;	// IMP=0x00000001005905c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
