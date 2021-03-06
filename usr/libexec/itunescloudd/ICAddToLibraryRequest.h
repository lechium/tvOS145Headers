//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ICDRequest.h"

@interface ICAddToLibraryRequest : ICDRequest
{
}

+ (id)requestWithDatabaseID:(unsigned int)arg1 databaseRevision:(unsigned int)arg2 playlistGlobalID:(id)arg3;	// IMP=0x00000001000ec31c
+ (id)requestWithDatabaseID:(unsigned int)arg1 databaseRevision:(unsigned int)arg2 sagaID:(long long)arg3 containerID:(unsigned int)arg4;	// IMP=0x00000001000ec1e8
+ (id)requestWithDatabaseID:(unsigned int)arg1 databaseRevision:(unsigned int)arg2 adamID:(long long)arg3 containerID:(unsigned int)arg4 referralAlbumAdamID:(long long)arg5 referralPlaylistGlobalID:(id)arg6;	// IMP=0x00000001000ec01c
+ (id)requestWithDatabaseID:(unsigned int)arg1 databaseRevision:(unsigned int)arg2 adamID:(long long)arg3 referralAlbumAdamID:(long long)arg4 referralPlaylistGlobalID:(id)arg5;	// IMP=0x00000001000ebeb4
- (id)_bodyDataForDatabaseRevision:(unsigned int)arg1 adamID:(long long)arg2 sagaID:(long long)arg3 playlistGlobalID:(id)arg4 referralAlbumAdamID:(long long)arg5 referralPlaylistGlobalID:(id)arg6;	// IMP=0x00000001000eb754
- (double)timeoutInterval;	// IMP=0x00000001000eb748
- (id)canonicalResponseForResponse:(id)arg1;	// IMP=0x00000001000eb5c0
- (id)initWithDatabaseID:(unsigned int)arg1 databaseRevision:(unsigned int)arg2 adamID:(long long)arg3 sagaID:(long long)arg4 playlistGlobalID:(id)arg5 containerID:(unsigned int)arg6 referralAlbumAdamID:(long long)arg7 referralPlaylistGlobalID:(id)arg8;	// IMP=0x00000001000eb3a0

@end

