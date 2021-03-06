/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPModelSongPlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelTVEpisode;

@interface MPModelTVEpisodePlaybackItemMetadata : MPModelSongPlaybackItemMetadata {

	MPModelGenericObject* _modelGenericObject;
	MPModelTVEpisode* _episode;

}

@property (nonatomic,retain) MPModelTVEpisode * episode;              //@synthesize episode=_episode - In the implementation block
+(id)requiredProperties;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)contentType;
-(id)artistName;
-(long long)storeAdamID;
-(BOOL)isExplicitTrack;
-(id)albumArtistName;
-(id)playbackPosition;
-(id)mediaItem;
-(MPModelTVEpisode *)episode;
-(id)albumTitle;
-(long long)artistStoreAdamID;
-(long long)storeSubscriptionAdamID;
-(id)modelGenericObject;
-(long long)albumStoreAdamID;
-(BOOL)allowsInitiatingPlayWhileDownload;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(id)contentTitle;
-(double)expectedDuration;
-(unsigned long long)storeSagaID;
-(id)localFileAsset;
-(id)storeAsset;
-(void)_invalidateModelObjectPlaybackItemMetadata;
-(void)setEpisode:(MPModelTVEpisode *)arg1 ;
@end

