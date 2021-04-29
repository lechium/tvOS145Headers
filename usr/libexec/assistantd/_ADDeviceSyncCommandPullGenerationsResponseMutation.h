//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADDeviceSyncCommandPullGenerationsResponseMutating-Protocol.h"

@class ADDeviceSyncCommandPullGenerationsResponse, NSDictionary, NSString;

@interface _ADDeviceSyncCommandPullGenerationsResponseMutation : NSObject <ADDeviceSyncCommandPullGenerationsResponseMutating>
{
    ADDeviceSyncCommandPullGenerationsResponse *_baseModel;	// 8 = 0x8
    NSDictionary *_generationsByDataType;	// 16 = 0x10
    _mutationFlags_ba3f8b0e _mutationFlags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001002cae70
- (id)generate;	// IMP=0x00000001002cadbc
- (void)setGenerationsByDataType:(id)arg1;	// IMP=0x00000001002cad88
- (id)initWithBaseModel:(id)arg1;	// IMP=0x00000001002cad10
- (id)init;	// IMP=0x00000001002cad00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
