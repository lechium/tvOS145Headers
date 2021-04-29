/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@interface MPStoreArtworkDataSource : MPAbstractNetworkArtworkDataSource {

	long long _totalImageRequestCount;
	long long _HEICImageRequestCount;
	os_unfair_lock_s _lock;
	double _maxHEICRequestPercentage;

}

@property (assign,nonatomic) double maxHEICRequestPercentage;              //@synthesize maxHEICRequestPercentage=_maxHEICRequestPercentage - In the implementation block
+(id)sharedStoreArtworkDataSource;
-(id)init;
-(id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 ;
-(void)getExportableArtworkPropertiesForCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)areRepresentationsOfKind:(long long)arg1 availableForCatalog:(id)arg2 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
-(id)supportedSizesForCatalog:(id)arg1 ;
-(id)sortedSupportedSizesForCatalog:(id)arg1 ;
-(BOOL)wantsBackgroundImageDecompression;
-(id)requestForCatalog:(id)arg1 kind:(long long)arg2 size:(CGSize)arg3 ;
-(CGSize)bestAvailableSizeForCatalog:(id)arg1 ;
-(id)cacheKeyForCatalog:(id)arg1 kind:(long long)arg2 size:(CGSize)arg3 ;
-(id)_bestURLForCatalog:(id)arg1 kind:(long long)arg2 size:(CGSize)arg3 ;
-(CGSize)_bestSizeForImageSizeInfo:(id)arg1 catalog:(id)arg2 ;
-(double)maxHEICRequestPercentage;
-(void)setMaxHEICRequestPercentage:(double)arg1 ;
@end
