/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPURLMediaItem.h>

@class TVPSecureKeyDeliveryCoordinator, TVLAudioAssetElement;

@interface TVLAudioMediaItem : TVPURLMediaItem {

	TVPSecureKeyDeliveryCoordinator* _secureKeyDeliveryCoordinator;
	TVLAudioAssetElement* _audioAssetElement;
	TVLAudioAssetElement* _videoAssetElement;

}

@property (nonatomic,retain) TVLAudioAssetElement * videoAssetElement;                //@synthesize videoAssetElement=_videoAssetElement - In the implementation block
@property (nonatomic,readonly) TVLAudioAssetElement * audioAssetElement;              //@synthesize audioAssetElement=_audioAssetElement - In the implementation block
-(id)initWithURL:(id)arg1 traits:(id)arg2 ;
-(BOOL)isEqualToMediaItem:(id)arg1 ;
-(void)loadStreamingKeyForRequest:(id)arg1 ;
-(void)cleanUpMediaItem;
-(TVLAudioAssetElement *)audioAssetElement;
-(id)initWithAudioAssetElement:(id)arg1 ;
-(TVLAudioAssetElement *)videoAssetElement;
-(void)setVideoAssetElement:(TVLAudioAssetElement *)arg1 ;
@end
