/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PodcastsUI/PodcastsUI-Structs.h>
#import <PodcastsUI/IMBaseDiskCache.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSRecursiveLock, NSMutableSet, NSMutableDictionary;

@interface IMImageDiskCache : IMBaseDiskCache {

	NSString* _onDiskFileType;
	NSObject*<OS_dispatch_queue> _workQueue;
	double _maxImageDimensionInPixels;
	double _saveCompressionQuality;
	NSRecursiveLock* _syncLock;
	NSMutableSet* _proccessingKeys;
	NSMutableDictionary* _completionHandlers;
	NSMutableDictionary* _pendingPerformWhenAvailableOnDiskBlocks;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                     //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) double maxImageDimensionInPixels;                                           //@synthesize maxImageDimensionInPixels=_maxImageDimensionInPixels - In the implementation block
@property (nonatomic,readonly) double saveCompressionQuality;                                              //@synthesize saveCompressionQuality=_saveCompressionQuality - In the implementation block
@property (nonatomic,readonly) NSRecursiveLock * syncLock;                                                 //@synthesize syncLock=_syncLock - In the implementation block
@property (nonatomic,readonly) NSMutableSet * proccessingKeys;                                             //@synthesize proccessingKeys=_proccessingKeys - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * completionHandlers;                                   //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pendingPerformWhenAvailableOnDiskBlocks;              //@synthesize pendingPerformWhenAvailableOnDiskBlocks=_pendingPerformWhenAvailableOnDiskBlocks - In the implementation block
@property (nonatomic,readonly) NSString * onDiskFileType;                                                  //@synthesize onDiskFileType=_onDiskFileType - In the implementation block
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)imageForKey:(id)arg1 ;
-(id)initWithBasePath:(id)arg1 ;
-(NSMutableDictionary *)completionHandlers;
-(id)pathForKey:(id)arg1 ;
-(BOOL)addImage:(id)arg1 forKey:(id)arg2 ;
-(id)initWithBasePath:(id)arg1 maxImageDimensionInPixels:(double)arg2 ;
-(void)copyImageFromSourceUrl:(id)arg1 to:(id)arg2 discardTransparency:(BOOL)arg3 enforceSquare:(BOOL)arg4 maxDimensionInPixels:(double)arg5 completion:(/*^block*/id)arg6 ;
-(void)addImageWithSourceUrl:(id)arg1 forKey:(id)arg2 discardTransparency:(BOOL)arg3 enforceSquare:(BOOL)arg4 maxDimensionInPixels:(double)arg5 completion:(/*^block*/id)arg6 ;
-(id)imageUrlForKey:(id)arg1 ;
-(BOOL)_isProcessingKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startProcessingKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_finishProcessingKey:(id)arg1 success:(BOOL)arg2 ;
-(void)_addImageWithSourceUrl:(id)arg1 forKey:(id)arg2 discardTransparency:(BOOL)arg3 enforceSquare:(BOOL)arg4 maxDimensionInPixels:(double)arg5 completion:(/*^block*/id)arg6 ;
-(NSString *)onDiskFileType;
-(BOOL)copyImageFromSourceUrl:(id)arg1 sourceFileType:(id)arg2 to:(id)arg3 discardTransparency:(BOOL)arg4 enforceSquare:(BOOL)arg5 maxDimensionInPixels:(double)arg6 ;
-(id)_defaultImageSavingOptions;
-(BOOL)_needsResizing:(CGImageSourceRef)arg1 maxDimensionInPixels:(double)arg2 ;
-(BOOL)_usesLessMemoryToConvertThenResizeImageSource:(CGImageSourceRef)arg1 destinationDimensionInPixels:(double)arg2 ;
-(CGImageSourceRef)_copyImageSourceByConvertingImage:(CGImageSourceRef)arg1 toFileType:(id)arg2 destinationUrl:(id)arg3 ;
-(id)_defaultImageSavingSourceOptions;
-(double)saveCompressionQuality;
-(BOOL)_addImage:(id)arg1 forKey:(id)arg2 resizeIfTooBig:(BOOL)arg3 manageProcessingState:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_startProcessingForAddingKey:(id)arg1 originalKey:(id)arg2 ;
-(double)maxImageDimensionInPixels;
-(id)_resizeImageForKey:(id)arg1 maxDimensionInPixels:(double)arg2 ;
-(id)_onDiskFileExtension;
-(NSMutableSet *)proccessingKeys;
-(NSMutableDictionary *)pendingPerformWhenAvailableOnDiskBlocks;
-(void)_performWithSyncLock:(/*^block*/id)arg1 ;
-(void)addImagesWithSourceUrl:(id)arg1 forKeys:(id)arg2 discardTransparency:(BOOL)arg3 enforceSquare:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)addImageWithSourceUrl:(id)arg1 forKey:(id)arg2 enforceSquare:(BOOL)arg3 maxDimensionInPixels:(double)arg4 completion:(/*^block*/id)arg5 ;
-(void)performWhenURLAvailableForImageForKey:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSRecursiveLock *)syncLock;
@end

