//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SagaCloudAddOperation.h"

@class NSDictionary, NSString;

@interface SagaCloudAddPlaylistOperation : SagaCloudAddOperation
{
    NSString *_playlistGlobalID;	// 8 = 0x8
    NSDictionary *_globalIDToSagaIDMap;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000bd2f0
@property(retain, nonatomic) NSDictionary *globalIDToSagaIDMap; // @synthesize globalIDToSagaIDMap=_globalIDToSagaIDMap;
- (void)removePendingAddedItemsForPermanentlyFailedOperation;	// IMP=0x00000001000bd03c
- (void)processAddedItems:(id)arg1;	// IMP=0x00000001000bcf5c
- (void)logCloudAddRequestDescription;	// IMP=0x00000001000bcea8
- (id)cloudAddRequestWithDatabaseID:(unsigned int)arg1;	// IMP=0x00000001000bce4c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000bcdc4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000bcd18
- (id)initWithConfiguration:(id)arg1 playlistGlobalID:(id)arg2;	// IMP=0x00000001000bcc90
- (id)initWithPlaylistGlobalID:(id)arg1;	// IMP=0x00000001000bcc1c

@end
