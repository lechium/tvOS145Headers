/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _PLImageLoadingAsset <_PLThumbnailLoadingAsset,NSObject>
@required
-(double)duration;
-(short)kind;
-(id)uuid;
-(int)orientation;
-(BOOL)isVideo;
-(CGSize*)imageSize;
-(CGSize*)originalImageSize;
-(double)aspectRatio;
-(id)originalFilename;
-(short)savedAssetType;
-(id)pathForOriginalFile;
-(BOOL)hasAdjustments;
-(BOOL)isCloudSharedAsset;
-(BOOL)isRAW;
-(id)uniformTypeIdentifier;
-(id)pathForAdjustmentFile;
-(short)kindSubtype;
-(void)generateLargeThumbnailFileIfNecessary;
-(BOOL)isInFlight;
-(id)thumbnailIdentifier;
-(BOOL)isCloudPlaceholder;
-(unsigned long long)localResourcesState;
-(BOOL)isCloudPhotoLibraryAsset;
-(BOOL)isStreamedVideo;
-(BOOL)isJPEG;
-(BOOL)isPrimaryImageFormat;
-(id)assetsLibraryURL;
-(long long)originalImageOrientation;
-(id)debugFilename;
-(BOOL)isLoopingVideo;
-(BOOL)isPartOfBurst;
-(id)pathForAdjustmentDataFile;
-(long long)cloudSharedAssetPlaceholderKind;
-(id)managedAssetForPhotoLibrary:(id)arg1;
-(BOOL)isTimelapsePlaceholder;
-(BOOL)isOriginalSRGB;

@end
