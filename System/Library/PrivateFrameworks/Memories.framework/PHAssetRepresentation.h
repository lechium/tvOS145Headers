/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Memories/Memories-Structs.h>
@class PHAssetResource, NSString, NSDate, PHAsset;

@interface PHAssetRepresentation : NSObject {

	BOOL _isAvailable;
	BOOL _adjustedVersion;
	unsigned long long _lastKnownPersistenceState;
	PHAssetResource* _mostUsefulResource;
	NSString* _localIdentifier;
	NSDate* _modificationDate;
	unsigned long long _downloadState;
	double _downloadProgress;
	NSDate* _downloadRequestDate;
	PHAsset* _asset;
	long long _mediaType;

}

@property (nonatomic,retain) PHAsset * asset;                                            //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSString * localIdentifier;                                 //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate;                                  //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) long long mediaType;                                        //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) unsigned long long lastKnownPersistenceState;               //@synthesize lastKnownPersistenceState=_lastKnownPersistenceState - In the implementation block
@property (assign,nonatomic) unsigned long long downloadState;                           //@synthesize downloadState=_downloadState - In the implementation block
@property (assign,nonatomic) double downloadProgress;                                    //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,retain) NSDate * downloadRequestDate;                               //@synthesize downloadRequestDate=_downloadRequestDate - In the implementation block
@property (assign,getter=isAdjustedVersion,nonatomic) BOOL adjustedVersion;              //@synthesize adjustedVersion=_adjustedVersion - In the implementation block
@property (readonly) PHAssetResource * mostUsefulResource;                               //@synthesize mostUsefulResource=_mostUsefulResource - In the implementation block
@property (nonatomic,readonly) NSString * derivativeFilePath; 
+(void)initialize;
+(void)clearStaticCache;
+(id)assetRepresentationWithAsset:(id)arg1 adjustedVersion:(BOOL)arg2 ;
+(id)assetRepresentationWithIdentifierURL:(id)arg1 ;
+(void)createStaticCache;
+(id)_cachedAssetRepresentationWithIdentifier:(id)arg1 adjustedVersion:(BOOL)arg2 ;
+(void)_cacheAssetRepresentation:(id)arg1 ;
+(id)assetRepresentationWithPhotosIdentifierURL:(id)arg1 ;
+(id)assetRepresentationWithAssetsLibraryPersistentURL:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(NSDate *)modificationDate;
-(id)imageData;
-(id)image;
-(CGSize)imageSize;
-(long long)mediaType;
-(void)setMediaType:(long long)arg1 ;
-(BOOL)isDownloading;
-(PHAsset *)asset;
-(void)setModificationDate:(NSDate *)arg1 ;
-(double)downloadProgress;
-(unsigned long long)downloadState;
-(void)setDownloadProgress:(double)arg1 ;
-(void)setDownloadState:(unsigned long long)arg1 ;
-(void)setAsset:(PHAsset *)arg1 ;
-(void)setLocalIdentifier:(NSString *)arg1 ;
-(NSString *)localIdentifier;
-(id)privateFileURL;
-(BOOL)isHEIF;
-(id)avAsset;
-(id)imageWithSize:(CGSize)arg1 ;
-(id)thumbnailImage;
-(PHAssetResource *)mostUsefulResource;
-(id)identifierURL;
-(CGImageRef)cgimageWithSize:(CGSize)arg1 ;
-(int)requestVideoWithResultHandler:(/*^block*/id)arg1 ;
-(int)requestPlayerItemWithResultHandler:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 networkAccessAllowed:(BOOL)arg3 ;
-(NSString *)derivativeFilePath;
-(id)privateFileURLForResource:(id)arg1 ;
-(BOOL)isAdjustedVersion;
-(id)initWithAsset:(id)arg1 adjustedVersion:(BOOL)arg2 ;
-(id)initWithLocalIdentifier:(id)arg1 adjustedVersion:(BOOL)arg2 modificationDate:(id)arg3 mediaType:(long long)arg4 ;
-(id)initWithAsset:(id)arg1 localIdentifier:(id)arg2 adjustedVersion:(BOOL)arg3 modificationDate:(id)arg4 mediaType:(long long)arg5 ;
-(void)setAdjustedVersion:(BOOL)arg1 ;
-(unsigned long long)lastKnownPersistenceState;
-(int)requestThumbnailWithResultHandler:(/*^block*/id)arg1 synchronous:(BOOL)arg2 networkAccessAllowed:(BOOL)arg3 ;
-(int)requestImageDataWithResultHandler:(/*^block*/id)arg1 synchronous:(BOOL)arg2 ;
-(id)imageWithSize:(CGSize)arg1 imageManager:(id)arg2 ;
-(CGImageRef)cgimageWithSize:(CGSize)arg1 imageManager:(id)arg2 ;
-(int)requestImageDataWithResultHandler:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 synchronous:(BOOL)arg3 ;
-(int)requestVideoWithResultHandler:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(int)requestVideoWithResultHandler:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 imageManager:(id)arg3 ;
-(id)privateVideoFileURL;
-(id)handleVideoRequestCompletionWithResult:(id)arg1 info:(id)arg2 videoRequestOptions:(id)arg3 ;
-(int)requestImageWithResultHandler:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 imageManager:(id)arg3 ;
-(BOOL)isDerivativeFilePathPointingToJPEGorRAWorHEIFFile;
-(void)queryLastKnownPersistenceState;
-(unsigned long long)estimatedFileSize;
-(int)requestMediaWithResultHandler:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(int)requestExportSessionWithResultHandler:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(int)requestImageDataWithResultHandler:(/*^block*/id)arg1 ;
-(int)requestImageWithResultHandler:(/*^block*/id)arg1 ;
-(int)requestImageWithResultHandler:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(id)handlePlayerItemRequestCompletionWithResult:(id)arg1 info:(id)arg2 videoRequestOptions:(id)arg3 ;
-(id)handleRequestCompletionWithResult:(id)arg1 info:(id)arg2 videoRequestOptions:(id)arg3 ;
-(void)setLastKnownPersistenceState:(unsigned long long)arg1 ;
-(NSDate *)downloadRequestDate;
-(void)setDownloadRequestDate:(NSDate *)arg1 ;
@end

