/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVPMediaItem.h>

@class NSMutableDictionary, TVPSecureKeyDeliveryCoordinator, NSURL, TVPSecureKeyLoader, NSString;

@interface _TVMLMediaItemTVPObject : NSObject <TVPMediaItem> {

	NSMutableDictionary* _metadata;
	TVPSecureKeyDeliveryCoordinator* _keyDeliveryCoordinator;
	NSURL* _mediaItemURL;
	TVPSecureKeyLoader* _secureKeyLoader;

}

@property (nonatomic,retain) NSURL * mediaItemURL;                              //@synthesize mediaItemURL=_mediaItemURL - In the implementation block
@property (nonatomic,retain) TVPSecureKeyLoader * secureKeyLoader;              //@synthesize secureKeyLoader=_secureKeyLoader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)isEqualToMediaItem:(id)arg1 ;
-(void)_postMetadataWillChangeNotificationWithMetadataProperties:(id)arg1 ;
-(void)_postMetadataDidChangeNotificationWithMetadataProperties:(id)arg1 ;
-(id)reportingDelegate;
-(void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(BOOL)arg4 ;
-(NSURL *)mediaItemURL;
-(BOOL)hasTrait:(id)arg1 ;
-(id)mediaItemMetadataForProperty:(id)arg1 ;
-(void)removeMediaItemMetadataForProperty:(id)arg1 ;
-(void)performMediaItemMetadataTransactionWithBlock:(/*^block*/id)arg1 ;
-(void)loadStreamingKeyForRequest:(id)arg1 ;
-(void)setSecureKeyLoader:(TVPSecureKeyLoader *)arg1 ;
-(void)setMediaItemURL:(NSURL *)arg1 ;
-(TVPSecureKeyLoader *)secureKeyLoader;
@end

