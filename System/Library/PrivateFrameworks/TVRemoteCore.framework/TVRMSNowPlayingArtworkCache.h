/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _RMSNowPlayingArtworkCacheItem, NSCache;

@interface TVRMSNowPlayingArtworkCache : NSObject {

	_RMSNowPlayingArtworkCacheItem* _lastItem;
	NSCache* _cache;

}
+(id)sharedArtworkCache;
-(id)init;
-(id)artworkDataForIdentifier:(id)arg1 ;
-(void)setArtworkData:(id)arg1 forIdentifier:(id)arg2 ;
-(id)artworkDataForNowPlayingInfo:(id)arg1 ;
-(void)setArtworkData:(id)arg1 forNowPlayingInfo:(id)arg2 ;
@end

