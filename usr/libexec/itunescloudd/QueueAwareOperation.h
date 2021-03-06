//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class CloudArtworkImporter, ICUserIdentity, ML3MusicLibrary, NSArray, NSOperationQueue;

@interface QueueAwareOperation : NSOperation
{
    _Bool _shouldProcessSpecificArtists;	// 8 = 0x8
    ML3MusicLibrary *_musicLibrary;	// 16 = 0x10
    CloudArtworkImporter *_artworkImporter;	// 24 = 0x18
    ICUserIdentity *_userIdentity;	// 32 = 0x20
    NSOperationQueue *_operationQueue;	// 40 = 0x28
    NSArray *_artistPersistentIDsToUpdate;	// 48 = 0x30
    NSArray *_albumArtistPersistentIDsToUpdate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010004c96c
@property(retain, nonatomic) NSArray *albumArtistPersistentIDsToUpdate; // @synthesize albumArtistPersistentIDsToUpdate=_albumArtistPersistentIDsToUpdate;
@property(retain, nonatomic) NSArray *artistPersistentIDsToUpdate; // @synthesize artistPersistentIDsToUpdate=_artistPersistentIDsToUpdate;
@property(readonly, nonatomic) _Bool shouldProcessSpecificArtists; // @synthesize shouldProcessSpecificArtists=_shouldProcessSpecificArtists;
@property(readonly, nonatomic) __weak NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) CloudArtworkImporter *artworkImporter; // @synthesize artworkImporter=_artworkImporter;
@property(readonly, nonatomic) ML3MusicLibrary *musicLibrary; // @synthesize musicLibrary=_musicLibrary;
- (id)initWithArtworkImporter:(id)arg1 operationQueue:(id)arg2 artistPersistentIDsToUpdate:(id)arg3 albumArtistPersistentIDsToUpdate:(id)arg4;	// IMP=0x000000010004c6f0

@end

