//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADDeviceCirclePeerDataMutating-Protocol.h"

@class ADDeviceCirclePeerData, NSString;

@interface _ADDeviceCirclePeerDataMutation : NSObject <ADDeviceCirclePeerDataMutating>
{
    ADDeviceCirclePeerData *_baseModel;	// 8 = 0x8
    NSString *_aceVersion;	// 16 = 0x10
    NSString *_assistantIdentifier;	// 24 = 0x18
    NSString *_buildVersion;	// 32 = 0x20
    NSString *_productType;	// 40 = 0x28
    NSString *_userAssignedDeviceName;	// 48 = 0x30
    NSString *_userInterfaceIdiom;	// 56 = 0x38
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasAceVersion:1;
        unsigned int hasAssistantIdentifier:1;
        unsigned int hasBuildVersion:1;
        unsigned int hasProductType:1;
        unsigned int hasUserAssignedDeviceName:1;
        unsigned int hasUserInterfaceIdiom:1;
    } _mutationFlags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100118588
- (id)generate;	// IMP=0x0000000100118374
- (void)setUserInterfaceIdiom:(id)arg1;	// IMP=0x000000010011833c
- (void)setUserAssignedDeviceName:(id)arg1;	// IMP=0x0000000100118304
- (void)setProductType:(id)arg1;	// IMP=0x00000001001182d0
- (void)setBuildVersion:(id)arg1;	// IMP=0x0000000100118298
- (void)setAssistantIdentifier:(id)arg1;	// IMP=0x0000000100118260
- (void)setAceVersion:(id)arg1;	// IMP=0x000000010011822c
- (id)initWithBaseModel:(id)arg1;	// IMP=0x00000001001181b4
- (id)init;	// IMP=0x00000001001181a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

