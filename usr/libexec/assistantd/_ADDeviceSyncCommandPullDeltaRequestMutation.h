//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADDeviceSyncCommandPullDeltaRequestMutating-Protocol.h"

@class ADDeviceSyncCommandPullDeltaRequest, NSString;

@interface _ADDeviceSyncCommandPullDeltaRequestMutation : NSObject <ADDeviceSyncCommandPullDeltaRequestMutating>
{
    ADDeviceSyncCommandPullDeltaRequest *_baseModel;	// 8 = 0x8
    NSString *_dataType;	// 16 = 0x10
    unsigned long long _generation;	// 24 = 0x18
    unsigned long long _limit;	// 32 = 0x20
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasDataType:1;
        unsigned int hasGeneration:1;
        unsigned int hasLimit:1;
    } _mutationFlags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001002c521c
- (id)generate;	// IMP=0x00000001002c5108
- (void)setLimit:(unsigned long long)arg1;	// IMP=0x00000001002c50f0
- (void)setGeneration:(unsigned long long)arg1;	// IMP=0x00000001002c50d8
- (void)setDataType:(id)arg1;	// IMP=0x00000001002c50a4
- (id)initWithBaseModel:(id)arg1;	// IMP=0x00000001002c502c
- (id)init;	// IMP=0x00000001002c501c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

