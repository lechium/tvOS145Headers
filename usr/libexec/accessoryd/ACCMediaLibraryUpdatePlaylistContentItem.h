//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ACCMediaLibraryUpdatePlaylistContentItem : NSObject
{
    NSString *_mediaLibraryUID;	// 8 = 0x8
    unsigned long long _playlistPersistentID;	// 16 = 0x10
    unsigned long long _validMask;	// 24 = 0x18
    unsigned long long _persistentID;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    NSString *_albumTitle;	// 48 = 0x30
    NSString *_artist;	// 56 = 0x38
    NSString *_albumArtist;	// 64 = 0x40
    NSString *_genre;	// 72 = 0x48
    NSString *_composer;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001001065d0
@property(retain, nonatomic) NSString *composer; // @synthesize composer=_composer;
@property(retain, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(retain, nonatomic) NSString *albumArtist; // @synthesize albumArtist=_albumArtist;
@property(retain, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long persistentID; // @synthesize persistentID=_persistentID;
@property(readonly, nonatomic) unsigned long long validMask; // @synthesize validMask=_validMask;
@property(nonatomic) unsigned long long playlistPersistentID; // @synthesize playlistPersistentID=_playlistPersistentID;
@property(retain, nonatomic) NSString *mediaLibraryUID; // @synthesize mediaLibraryUID=_mediaLibraryUID;
- (void)fillStruct:(CDStruct_f51598dc *)arg1;	// IMP=0x00000001001062b8
- (id)copyNSRepresentation:(int)arg1;	// IMP=0x0000000100106104
- (id)debugDescription;	// IMP=0x0000000100106064
- (id)description;	// IMP=0x0000000100106018
- (id)initWithMediaLibrary:(id)arg1 playlistPersistentID:(unsigned long long)arg2 dict:(id)arg3;	// IMP=0x0000000100105c5c
- (id)initWithMediaLibrary:(id)arg1 persistentID:(unsigned long long)arg2 playlistPersistentID:(unsigned long long)arg3;	// IMP=0x0000000100105b80

@end

