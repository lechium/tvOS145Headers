//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "iAP2FileTransferSendDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, iAP2Connection, iAP2MediaLibrary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface iAP2MediaLibraryInfo : NSObject <iAP2FileTransferSendDelegate>
{
    id mpMediaLibrary;	// 8 = 0x8
    NSString *anchor;	// 16 = 0x10
    iAP2MediaLibrary *context;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *libraryUpdateQ;	// 32 = 0x20
    NSMutableDictionary *_dbUpdateList;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_playlistContentUpdateQ;	// 48 = 0x30
    NSString *_syncValidityPID;	// 56 = 0x38
    _Bool _sendHideNonLocal;	// 64 = 0x40
    _Bool _showCloudTracks;	// 65 = 0x41
    _Bool _showCloudTracksLastSent;	// 66 = 0x42
    _Bool _sendPlayAllSongsCapable;	// 67 = 0x43
    _Bool _requestedTransferID;	// 68 = 0x44
    _Bool _requestedMetaList;	// 69 = 0x45
    _Bool _requestedMetaProperties;	// 70 = 0x46
    _Bool _processingDiffUpdate;	// 71 = 0x47
    _Bool _isShuttingDown;	// 72 = 0x48
    _Bool _enableLibraryUpdate;	// 73 = 0x49
    int _libraryType;	// 76 = 0x4c
    iAP2Connection *_connection;	// 80 = 0x50
    NSString *_UIDString;	// 88 = 0x58
    NSObject<OS_dispatch_semaphore> *_updateWaitSem;	// 96 = 0x60
    NSArray *_stationsGroupList;	// 104 = 0x68
}

+ (id)getMediaItemParamForContentList:(id)arg1 propertyList:(id)arg2;	// IMP=0x0000000100034cd4
+ (_Bool)isItemAd:(id)arg1;	// IMP=0x0000000100034c64
@property(retain, nonatomic) NSArray *stationsGroupList; // @synthesize stationsGroupList=_stationsGroupList;
@property(readonly, nonatomic) _Bool enableLibraryUpdate; // @synthesize enableLibraryUpdate=_enableLibraryUpdate;
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *updateWaitSem; // @synthesize updateWaitSem=_updateWaitSem;
@property(readonly, nonatomic) NSString *UIDString; // @synthesize UIDString=_UIDString;
@property(readonly, nonatomic) int libraryType; // @synthesize libraryType=_libraryType;
@property(readonly, nonatomic) _Bool isShuttingDown; // @synthesize isShuttingDown=_isShuttingDown;
@property(readonly, nonatomic) iAP2Connection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *libraryUpdateQ; // @synthesize libraryUpdateQ;
@property(retain) NSString *anchor; // @synthesize anchor;
@property(readonly, nonatomic) id mpMediaLibrary; // @synthesize mpMediaLibrary;
- (void)startMLPlaybackOfAllSongsStartPID:(unsigned long long)arg1;	// IMP=0x000000010003c8d0
- (void)startMLPlaybackOfAllSongs;	// IMP=0x000000010003c8c0
- (void)_startMLPlaybackOfAllSongsStartItem:(id)arg1;	// IMP=0x000000010003c6bc
- (void)startMLPlaybackWithResume:(_Bool)arg1;	// IMP=0x000000010003c410
- (void)handlePlaylistContentSent:(id)arg1;	// IMP=0x000000010003c368
- (void)startPlaybackOfCollection:(unsigned long long)arg1 ofType:(unsigned char)arg2 withFirstPID:(unsigned long long)arg3;	// IMP=0x000000010003c29c
- (void)startPlaybackOfCollection:(unsigned long long)arg1 ofType:(unsigned char)arg2 withFirst:(unsigned int)arg3;	// IMP=0x000000010003c200
- (void)_startPlaybackOfCollection:(unsigned long long)arg1 ofType:(unsigned char)arg2 withFirst:(id)arg3 orIndex:(unsigned int)arg4;	// IMP=0x000000010003bbb8
- (void)startPlaybackOfItems:(id)arg1 withFirst:(unsigned int)arg2;	// IMP=0x000000010003b8d0
- (id)_getMediaItemForPID:(unsigned long long)arg1;	// IMP=0x000000010003b6bc
- (void)playWithQuery:(id)arg1 andFirstItem:(id)arg2;	// IMP=0x000000010003b1c4
- (void)_startPlaybackOfRadioStation:(unsigned long long)arg1;	// IMP=0x000000010003ae40
- (void)shuttingDown;	// IMP=0x000000010003ab98
- (void)stopSendingMediaLibraryUpdates;	// IMP=0x000000010003aaf8
- (void)startSendingMediaLibraryUpdates:(id)arg1 requestedTransferID:(_Bool)arg2 requestedMetaList:(_Bool)arg3 requestedMetaProperties:(_Bool)arg4;	// IMP=0x000000010003a740
- (void)dealloc;	// IMP=0x000000010003a5a0
- (id)initWithMediaLibrary:(id)arg1 Context:(id)arg2 LibraryType:(int)arg3;	// IMP=0x000000010003a3a8
- (void)_registerForMPNotifications;	// IMP=0x000000010003a244
- (id)description;	// IMP=0x000000010003a1d4
- (void)_canShowCloudTracksDidChangeNotification:(id)arg1;	// IMP=0x0000000100039e04
- (void)_mediaLibraryChanged:(id)arg1;	// IMP=0x0000000100039c6c
- (void)_radioLibraryChanged:(id)arg1;	// IMP=0x0000000100039b0c
- (void)_beginRadioLibraryUpdates;	// IMP=0x00000001000396f8
- (void)_sendRadioLibraryUpdates;	// IMP=0x0000000100038b2c
- (id)_beginMediaLibraryUpdatesWithAnchor:(id)arg1 validity:(id)arg2;	// IMP=0x0000000100037cb8
- (_Bool)_isVisibleUpdate:(id)arg1;	// IMP=0x0000000100037b90
- (_Bool)_sendOutMessage:(id)arg1 forAnchor:(id)arg2 withSemList:(id)arg3 fullUpdate:(_Bool)arg4 progress:(unsigned int)arg5 outOf:(unsigned int)arg6;	// IMP=0x00000001000377f4
- (id)_handleMediaLibraryItemUpdate:(id)arg1 forLibrary:(id)arg2 andMessage:(id)arg3 success:(_Bool *)arg4 added:(_Bool *)arg5 forceDelete:(_Bool)arg6;	// IMP=0x0000000100036ecc
- (id)_handleMediaLibraryPlaylistUpdate:(id)arg1 forLibrary:(id)arg2 andMessage:(id)arg3 returnSem:(id *)arg4 success:(_Bool *)arg5 added:(_Bool *)arg6;	// IMP=0x00000001000365a8
- (id)_handlePlaylistContentForEntify:(id)arg1 buffID:(unsigned char)arg2 useTransferIDout:(_Bool *)arg3;	// IMP=0x0000000100035c74
- (id)_handlePlaylistContentForBuffID:(unsigned char)arg1 forEntify:(id)arg2;	// IMP=0x0000000100035650
- (id)_prepareTransferForBuffID:(unsigned char)arg1 entity:(id)arg2 type:(int)arg3;	// IMP=0x0000000100035478
- (id)getPlaylistItems:(id)arg1;	// IMP=0x00000001000352ec
@property(readonly, nonatomic) _Bool subscribedToAppleMusic;
- (id)_getUIDString;	// IMP=0x0000000100035248
@property(readonly, nonatomic) NSString *name;
- (_Bool)fileTransferSendDidTimeout:(id)arg1;	// IMP=0x000000010003508c
- (_Bool)fileTransferSendDidSend:(id)arg1;	// IMP=0x0000000100034f90

@end

