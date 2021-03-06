/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSArray, PXLoadingStatusManager;

@interface PXMediaProvider : NSObject {

	NSArray* _availableThumbnailSizes;
	PXLoadingStatusManager* _loadingStatusManager;

}

@property (nonatomic,readonly) NSArray * availableThumbnailSizes; 
@property (nonatomic,readonly) CGSize masterThumbnailSize; 
@property (nonatomic,retain) PXLoadingStatusManager * loadingStatusManager;              //@synthesize loadingStatusManager=_loadingStatusManager - In the implementation block
+(id)preheatQueue;
-(void)startCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)stopCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)stopCachingImagesForAllAssets;
-(void)cancelImageRequest:(long long)arg1 ;
-(long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(long long)requestLivePhotoForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(long long)requestURLForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(PXLoadingStatusManager *)loadingStatusManager;
-(void)setLoadingStatusManager:(PXLoadingStatusManager *)arg1 ;
-(long long)requestCGImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(id)thumbnailDataForAsset:(id)arg1 targetSize:(CGSize)arg2 onlyFromCache:(BOOL)arg3 outDataSpec:(PXMediaProviderThumbnailDataSpec*)arg4 ;
-(NSArray *)availableThumbnailSizes;
-(void)preheatThumbnailDataForAssets:(id)arg1 origin:(long long)arg2 targetSize:(CGSize)arg3 ;
-(void)enumerateAvailableThumbnailDataFormats:(/*^block*/id)arg1 ;
-(CGSize)masterThumbnailSize;
@end

