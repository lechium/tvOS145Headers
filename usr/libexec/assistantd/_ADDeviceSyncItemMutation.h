//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADDeviceSyncItemMutating-Protocol.h"

@class ADDeviceSyncItem, NSDictionary, NSString, NSUUID;

@interface _ADDeviceSyncItemMutation : NSObject <ADDeviceSyncItemMutating>
{
    ADDeviceSyncItem *_baseModel;	// 8 = 0x8
    NSUUID *_UUID;	// 16 = 0x10
    NSDictionary *_properties;	// 24 = 0x18
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasUUID:1;
        unsigned int hasProperties:1;
    } _mutationFlags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100271580
- (id)generate;	// IMP=0x0000000100271484
- (void)setProperties:(id)arg1;	// IMP=0x000000010027144c
- (void)setUUID:(id)arg1;	// IMP=0x0000000100271418
- (id)initWithBaseModel:(id)arg1;	// IMP=0x00000001002713a0
- (id)init;	// IMP=0x0000000100271390

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
