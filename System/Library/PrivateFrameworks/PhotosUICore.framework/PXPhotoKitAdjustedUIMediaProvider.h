/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXUIMediaProvider.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, PHCachingImageManager;

@interface PXPhotoKitAdjustedUIMediaProvider : PXUIMediaProvider {

	Ai _nextRequestID;
	NSMutableDictionary* _requestsByIdentifier;
	NSMutableDictionary* _unadjustedRequestIdentifiersByIdentifier;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSObject*<OS_dispatch_queue> _renderQueue;
	PHCachingImageManager* _imageManager;
	BOOL _useCachedRenders;
	BOOL _delayRenders;
	BOOL _cachesUnadjustedImageForRequestedAssets;

}

@property (assign,nonatomic) BOOL useCachedRenders;                                     //@synthesize useCachedRenders=_useCachedRenders - In the implementation block
@property (assign,nonatomic) BOOL delayRenders;                                         //@synthesize delayRenders=_delayRenders - In the implementation block
@property (assign,nonatomic) BOOL cachesUnadjustedImageForRequestedAssets;              //@synthesize cachesUnadjustedImageForRequestedAssets=_cachesUnadjustedImageForRequestedAssets - In the implementation block
+(void)clearCachedRenders;
-(id)init;
-(long long)_nextRequestID;
-(void)startCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)stopCachingImagesForAssets:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 ;
-(void)stopCachingImagesForAllAssets;
-(void)cancelImageRequest:(long long)arg1 ;
-(long long)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(long long)requestLivePhotoForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)cachedImageForAsset:(id)arg1 targetSize:(CGSize)arg2 ;
-(long long)requestURLForVideo:(id)arg1 pairingIdentifier:(id)arg2 options:(id)arg3 reaultHandler:(/*^block*/id)arg4 ;
-(long long)requestURLForImage:(id)arg1 pairingIdentifier:(id)arg2 options:(id)arg3 reaultHandler:(/*^block*/id)arg4 ;
-(long long)requestURLsForLivePhoto:(id)arg1 pairingIdentifier:(id)arg2 options:(id)arg3 reaultHandler:(/*^block*/id)arg4 ;
-(long long)requestCGImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)_handleRequestCompletedWithID:(long long)arg1 info:(id)arg2 ;
-(void)_removeRequestforID:(long long)arg1 ;
-(BOOL)useCachedRenders;
-(void)setUseCachedRenders:(BOOL)arg1 ;
-(BOOL)delayRenders;
-(void)setDelayRenders:(BOOL)arg1 ;
-(BOOL)cachesUnadjustedImageForRequestedAssets;
-(void)setCachesUnadjustedImageForRequestedAssets:(BOOL)arg1 ;
@end

