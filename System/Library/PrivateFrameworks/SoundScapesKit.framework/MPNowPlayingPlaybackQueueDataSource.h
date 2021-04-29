/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SoundScapesKit.framework/SoundScapesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MPNowPlayingPlaybackQueueDataSource <NSObject>
@optional
-(id)nowPlayingInfoCenter:(id)arg1 currentLanguageOptionsForContentItem:(id)arg2 completion:(/*^block*/id)arg3;
-(id)nowPlayingInfoCenter:(id)arg1 availableLanguageOptionsForContentItem:(id)arg2 completion:(/*^block*/id)arg3;
-(id)nowPlayingInfoCenter:(id)arg1 infoForContentItem:(id)arg2 completion:(/*^block*/id)arg3;
-(id)nowPlayingInfoCenter:(id)arg1 lyricsForContentItem:(id)arg2 completion:(/*^block*/id)arg3;
-(id)nowPlayingInfoCenter:(id)arg1 artworkForContentItem:(id)arg2 size:(CGSize)arg3 completion:(/*^block*/id)arg4;
-(id)nowPlayingInfoCenter:(id)arg1 childContentItemIDAtIndex:(long long)arg2 ofItem:(id)arg3;
-(void)nowPlayingInfoCenter:(id)arg1 didEndMigrationWithIdentifier:(id)arg2 error:(id)arg3;
-(void)nowPlayingInfoCenter:(id)arg1 willBeginSessionMigrationWithIdentifier:(id)arg2;
-(void)nowPlayingInfoCenter:(id)arg1 getTransportablePlaybackSessionRepresentationWithCompletion:(/*^block*/id)arg2;
-(void)nowPlayingInfoCenter:(id)arg1 getTransportablePlaybackSessionRepresentationForRequest:(id)arg2 completion:(/*^block*/id)arg3;
-(id)contentItemForOffset:(long long)arg1;
-(id)nowPlayingInfoCenter:(id)arg1 contentItemIDsFromOffset:(long long)arg2 toOffset:(long long)arg3 nowPlayingIndex:(long long*)arg4;
-(id)playbackQueueIdentifierForNowPlayingInfoCenter:(id)arg1;

@required
-(id)nowPlayingInfoCenter:(id)arg1 contentItemIDForOffset:(long long)arg2;
-(id)nowPlayingInfoCenter:(id)arg1 contentItemForID:(id)arg2;

@end
