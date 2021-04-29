//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CloudLibraryOperation.h"

@class ICCloudItemIDList, NSDictionary;

@interface SagaUpdatePlaylistOperation : CloudLibraryOperation
{
    long long _playlistPersistentID;	// 8 = 0x8
    NSDictionary *_properties;	// 16 = 0x10
    ICCloudItemIDList *_trackList;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010008438c
- (void).cxx_destruct;	// IMP=0x00000001000842ec
- (void)main;	// IMP=0x0000000100083acc
- (_Bool)isPersistent;	// IMP=0x0000000100083ac4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000839d8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100083648
- (id)initWithConfiguration:(id)arg1 playlistPersistentID:(long long)arg2 properties:(id)arg3 trackList:(id)arg4;	// IMP=0x0000000100083558
- (id)initWithPlaylistPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3;	// IMP=0x00000001000834b8

@end

