//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BTXpcSession.h"

#import "BTAVRCP_LibraryDelegate-Protocol.h"
#import "BTAVRCP_NowPlayingInfoDelegate-Protocol.h"

@class BTAVRCP_Library, BTAVRCP_NowPlayingInfo, NSString;

@interface BTAVRCP_XpcSession : BTXpcSession <BTAVRCP_NowPlayingInfoDelegate, BTAVRCP_LibraryDelegate>
{
    _Bool _isForwarding;	// 8 = 0x8
    _Bool _isRewinding;	// 9 = 0x9
    BTAVRCP_NowPlayingInfo *_lazyNowPlayingInfo;	// 16 = 0x10
    BTAVRCP_Library *_lazyLibrary;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100008610
@property(nonatomic) _Bool isRewinding; // @synthesize isRewinding=_isRewinding;
@property(nonatomic) _Bool isForwarding; // @synthesize isForwarding=_isForwarding;
@property(retain, nonatomic) BTAVRCP_Library *lazyLibrary; // @synthesize lazyLibrary=_lazyLibrary;
@property(retain, nonatomic) BTAVRCP_NowPlayingInfo *lazyNowPlayingInfo; // @synthesize lazyNowPlayingInfo=_lazyNowPlayingInfo;
- (unsigned char)getNowPlayingAttributeIDs:(id)arg1 reply:(id)arg2;	// IMP=0x00000001000080fc
- (void)getMediaPlayersFromStart:(unsigned long long)arg1 toEnd:(unsigned long long)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007e04
- (id)attributeIDsFromArgs:(id)arg1;	// IMP=0x0000000100007dac
- (void)libraryDidChange;	// IMP=0x0000000100007d38
- (void)playbackQueueDidChange;	// IMP=0x0000000100007d20
- (void)settingsDidChange:(CDStruct_a94359dc)arg1;	// IMP=0x0000000100007c00
- (void)trackDidChange:(unsigned long long)arg1;	// IMP=0x0000000100007b20
- (void)playbackStateDidChange:(long long)arg1;	// IMP=0x0000000100007a40
- (void)playerDidChange:(int)arg1;	// IMP=0x0000000100007960
- (void)sendMsg:(id)arg1 args:(id)arg2;	// IMP=0x000000010000787c
- (void)sendReplyToMsg:(id)arg1 status:(unsigned char)arg2 args:(id)arg3;	// IMP=0x00000001000077d4
- (void)handleMsg:(id)arg1;	// IMP=0x0000000100007694
- (void)handleGetImageMsg:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000734c
- (void)handleGetImagePropertiesMsg:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000071ac
- (void)handlePlayItemMsg:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007010
- (void)handleGetTotalNumberOfItemsMsg:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006e18
- (void)handleSearchMsg:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006d64
- (void)handleGetItemAttributesMsg:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006aec
- (void)handleGetFolderItemsMsg:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000068a8
- (void)handleChangePathMsg:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000067b8
- (void)handleSetBrowsedPlayerMsg:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006694
- (void)handleSetAddressedPlayerMsg:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000065f4
- (void)handleRegisterForSettingsChangesMsg:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000648c
- (void)handleRegisterForTrackChangesMsg:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006358
- (void)handleRegisterForPlaybackStateChangesMsg:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100006224
- (void)handleRegisterForPlayerChangesMsg:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000060f0
- (void)handleRegisterForChangesMsg:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000608c
- (void)handleGetElementAttributesMsg:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005cfc
- (void)handleGetPlayStatusMsg:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005b40
- (void)handleGetSettingsMsg:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000059d8
- (void)handleSetSettingsMsg:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005938
- (void)handleSendCommandMsg:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005740
- (id)library;	// IMP=0x0000000100005694
- (id)nowPlayingInfo;	// IMP=0x00000001000055e8
- (void)dealloc;	// IMP=0x000000010000556c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

