//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SagaCreatePlaylistOperation.h"

@class NSString;

@interface SagaSDKCreatePlaylistOperation : SagaCreatePlaylistOperation
{
    NSString *_requestingBundleID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010001d4b8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010001d430
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010001d384
- (id)requestWithDatabaseID:(unsigned int)arg1 databaseRevision:(unsigned int)arg2 playlistProperties:(id)arg3 trackList:(id)arg4;	// IMP=0x000000010001d360
- (id)initWithConfiguration:(id)arg1 playlistPersistentID:(long long)arg2 properties:(id)arg3 trackList:(id)arg4 requestingBundleID:(id)arg5;	// IMP=0x000000010001d2a8
- (id)initWithPlaylistPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 requestingBundleID:(id)arg4;	// IMP=0x000000010001d208

@end

