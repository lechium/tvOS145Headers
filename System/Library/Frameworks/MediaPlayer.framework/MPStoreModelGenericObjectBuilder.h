/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@class NSMapTable, MPStoreModelAlbumBuilder, MPStoreModelArtistBuilder, MPStoreModelMovieBuilder, MPStoreModelPlaylistBuilder, MPStoreModelSongBuilder, MPStoreModelTVEpisodeBuilder, MPStoreModelTVSeasonBuilder, MPStoreModelTVShowBuilder, MPStoreModelRecordLabelBuilder;

@interface MPStoreModelGenericObjectBuilder : MPStoreModelObjectBuilder {

	NSMapTable* _baseContentItemIDToOccurrenceCount;
	MPStoreModelAlbumBuilder* _albumBuilder;
	MPStoreModelArtistBuilder* _artistBuilder;
	MPStoreModelMovieBuilder* _movieBuilder;
	MPStoreModelPlaylistBuilder* _playlistBuilder;
	MPStoreModelSongBuilder* _songBuilder;
	MPStoreModelTVEpisodeBuilder* _tvEpisodeBuilder;
	MPStoreModelTVSeasonBuilder* _tvSeasonBuilder;
	MPStoreModelTVShowBuilder* _tvShowBuilder;
	MPStoreModelRecordLabelBuilder* _recordLabelBuilder;
	BOOL _shouldUsePlaylistEntry;

}

@property (assign,nonatomic) BOOL shouldUsePlaylistEntry;              //@synthesize shouldUsePlaylistEntry=_shouldUsePlaylistEntry - In the implementation block
-(id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3 ;
-(id)_modelObjectWithUniqueContentItemIDForModelObject:(id)arg1 ;
-(BOOL)shouldUsePlaylistEntry;
-(void)setShouldUsePlaylistEntry:(BOOL)arg1 ;
@end

