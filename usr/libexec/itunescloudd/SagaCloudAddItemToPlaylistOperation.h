//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SagaCloudAddItemOperation.h"

@interface SagaCloudAddItemToPlaylistOperation : SagaCloudAddItemOperation
{
    long long _playlistPersistentID;	// 40 = 0x28
}

- (void)logCloudAddRequestDescription;	// IMP=0x00000001000bdddc
- (id)cloudAddRequestWithDatabaseID:(unsigned int)arg1;	// IMP=0x00000001000bda00
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000bd978
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000bd8f0
- (id)initWithConfiguration:(id)arg1 adamID:(long long)arg2 playlistPersistentID:(long long)arg3 referralPlaylistGlobalID:(id)arg4;	// IMP=0x00000001000bd864
- (id)initWithConfiguration:(id)arg1 adamID:(long long)arg2 playlistPersistentID:(long long)arg3 referralAlbumAdamID:(long long)arg4;	// IMP=0x00000001000bd82c
- (id)initWithConfiguration:(id)arg1 adamID:(long long)arg2 playlistPersistentID:(long long)arg3;	// IMP=0x00000001000bd7dc
- (id)initWithAdamID:(long long)arg1 playlistPersistentID:(long long)arg2;	// IMP=0x00000001000bd774

@end

