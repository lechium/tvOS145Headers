/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <AssetsLibraryServices/PLThumbnailManagerCore.h>

@class NSMutableSet, NSMutableArray, NSLock, PLThumbnailCascadingDownscaleContext, NSArray;

@interface PLThumbnailManager : PLThumbnailManagerCore {

	NSMutableSet* _previouslyRequestedThumbnailFixOIDs;
	NSMutableSet* _requestedThumbnailFixAssets;
	NSMutableArray* _alreadyFailedAssetObjectIDsForRebuild;
	NSLock* _fixLock;
	PLThumbnailCascadingDownscaleContext* _downscaleContext;
	BOOL _shouldRebuildThumbnails;
	BOOL _didCheckShouldRebuildThumbnails;
	BOOL _hasExceededThumbnailRebuildRequestLimit;
	BOOL _isRebuildingThumbnails;
	id _observerToken;
	NSArray* _slowPersistenceManagers;

}

@property (nonatomic,retain) id observerToken;                               //@synthesize observerToken=_observerToken - In the implementation block
@property (nonatomic,retain) NSArray * slowPersistenceManagers;              //@synthesize slowPersistenceManagers=_slowPersistenceManagers - In the implementation block
+(id)supportedThumbnailFormats;
-(void)dealloc;
-(id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 ;
-(void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 withToken:(id)arg2 ;
-(id)thumbnailJPEGPathForPhoto:(id)arg1 ;
-(BOOL)hasRebuildThumbnailsRequest;
-(long long)_diskFootprintOfTableThumbnailTables;
-(void)removeObsoleteMetadata;
-(id)dataForPhoto:(id)arg1 format:(unsigned short)arg2 allowPlaceholder:(BOOL)arg3 width:(int*)arg4 height:(int*)arg5 bytesPerRow:(int*)arg6 dataWidth:(int*)arg7 dataHeight:(int*)arg8 imageDataOffset:(int*)arg9 ;
-(void)deleteThumbnailsWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3 ;
-(id)thumbManagerForFormatID:(unsigned short)arg1 ;
-(id)observerToken;
-(NSArray *)slowPersistenceManagers;
-(id)initWithPhotoLibraryPathManager:(id)arg1 modelMigrator:(id)arg2 ;
-(id)imageTableForFormat:(unsigned short)arg1 ;
-(id)thumbnailRebuildIndicatorPath;
-(BOOL)_thumbnailChangeContainsOnlyTableDeprecationsFromVersion:(int)arg1 toVersion:(int)arg2 fromFormat:(int)arg3 toFormat:(int)arg4 ;
-(int)_configurationThumbnailVersion;
-(unsigned short)_configurationThumbnailFormat;
-(BOOL)hasDeprecationsOnly;
-(BOOL)hasThumbnailVersionMismatch;
-(BOOL)isMissingThumbnailTables;
-(void)removeThumbnailTablesUnsupportedOnly:(BOOL)arg1 ;
-(void)_removeMasterThumbDirectories;
-(BOOL)resetThumbnailsWithModelMigrator:(id)arg1 ;
-(BOOL)resetThumbnailsWithModelMigrator:(id)arg1 forced:(BOOL)arg2 ;
-(void)addRebuildThumbnailsRequest;
-(void)removeRebuildThumbnailsRequest:(const char*)arg1 ;
-(void)_recordRebuildThumbnailsAttempt;
-(void)_discardAlreadyFailedAssetObjectIDsForRebuild;
-(id)_missingThumbnailPredicate;
-(long long)_rebuildAssetThumbnailsWithLimit:(int)arg1 library:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasMissingThumbnailsInLibrary:(id)arg1 ;
-(id)_rebuildThumbnailsQueue;
-(void)rebuildAllMissingThumbnailsInLibrary:(id)arg1 ;
-(BOOL)isRebuildingThumbnails;
-(BOOL)hasExceededRebuildThumbnailRequestLimit;
-(void)handleRebuildThumbnailRequestPersistentFailureInPhotoLibrary:(id)arg1 ;
-(id)_allPossibleThumbnailFormatIDs;
-(CGImageRef)newImageForAsset:(id)arg1 format:(id)arg2 ;
-(void)discardCachedThumbnailDownscalerContexts;
-(BOOL)_performDownscaleIntoDatas:(id)arg1 image:(id)arg2 assetUUID:(id)arg3 ;
-(BOOL)_downscaleAndWriteTableAndFileBackedThumbnailsWithIdentifier:(id)arg1 thumbnailIndex:(unsigned long long)arg2 image:(id)arg3 assetUUID:(id)arg4 ;
-(void)setThumbnailsForAsset:(id)arg1 withImage:(id)arg2 ;
-(BOOL)setThumbnailsForThumbIdentifier:(id)arg1 thumbnailIndex:(unsigned long long)arg2 assetUUID:(id)arg3 kind:(short)arg4 extension:(id)arg5 withImage:(id)arg6 ;
-(void)preheatThumbnailDataWithFormat:(unsigned short)arg1 thumbnailIndexes:(id)arg2 ;
-(id)placeholderDataForFormat:(unsigned short)arg1 photoImageSize:(CGSize)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 ;
-(id)_tableDescriptions;
-(id)_dataForAsset:(id)arg1 format:(unsigned short)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 imageDataFormat:(unsigned short*)arg9 ;
-(unsigned short)_supportedThumbnailFormatIDFromGeneralFormatID:(unsigned short)arg1 ;
-(void)setObserverToken:(id)arg1 ;
-(void)setSlowPersistenceManagers:(NSArray *)arg1 ;
@end

