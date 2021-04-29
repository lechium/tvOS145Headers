/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PodcastsUI/PodcastsUI-Structs.h>
#import <libobjc.A.dylib/IMCache.h>

@class NSString, NSOperationQueue, IMMemoryCache, IMImageDiskCache;

@interface IMImageStore : NSObject <IMCache> {

	/*^block*/id _alternativeSize;
	NSString* _name;
	NSOperationQueue* _fetchOperationQueue;
	double _maxImageDimensionInPixels;
	IMMemoryCache* _memoryCache;
	IMImageDiskCache* _diskCache;

}

@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSOperationQueue * fetchOperationQueue;              //@synthesize fetchOperationQueue=_fetchOperationQueue - In the implementation block
@property (assign,nonatomic) double maxImageDimensionInPixels;                    //@synthesize maxImageDimensionInPixels=_maxImageDimensionInPixels - In the implementation block
@property (nonatomic,readonly) IMMemoryCache * memoryCache;                       //@synthesize memoryCache=_memoryCache - In the implementation block
@property (nonatomic,readonly) IMImageDiskCache * diskCache;                      //@synthesize diskCache=_diskCache - In the implementation block
@property (assign,nonatomic) BOOL disableMemoryCache; 
@property (nonatomic,copy) id alternativeSize;                                    //@synthesize alternativeSize=_alternativeSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultStore;
+(id)defaultName;
+(unsigned long long)_memorySize;
+(id)defaultBasePath;
+(double)defaultMaxImageDimensionInPixels;
+(unsigned long long)defaultMaxConcurrentOperations;
+(/*^block*/id)defaultAlternativeSizeBlock;
+(int)defaultImageResizeOptions;
-(NSString *)name;
-(id)init;
-(BOOL)isEmpty;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)fullName;
-(void)clearCache;
-(IMMemoryCache *)memoryCache;
-(id)imageForKey:(id)arg1 ;
-(void)addImage:(id)arg1 forKey:(id)arg2 ;
-(void)removeItemsWithPrefx:(id)arg1 ;
-(void)removeItemForKey:(id)arg1 ;
-(BOOL)hasItemForKey:(id)arg1 ;
-(id)imageUrlForKey:(id)arg1 ;
-(double)maxImageDimensionInPixels;
-(void)performWhenURLAvailableForImageForKey:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 basePath:(id)arg2 maxImageDimensionInPixels:(double)arg3 maxConcurrentOperations:(unsigned long long)arg4 alternativeSizeBlock:(/*^block*/id)arg5 ;
-(void)configureMemoryCache;
-(void)memoryWarning;
-(void)setFetchOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)fetchOperationQueue;
-(void)setMaxImageDimensionInPixels:(double)arg1 ;
-(void)addImage:(id)arg1 forKey:(id)arg2 persist:(BOOL)arg3 ;
-(void)addImage:(id)arg1 forKey:(id)arg2 persist:(BOOL)arg3 discardTransparency:(BOOL)arg4 ;
-(void)_addImage:(id)arg1 toMemoryCacheWithKey:(id)arg2 ;
-(IMImageDiskCache *)diskCache;
-(BOOL)requireSquareImages:(id)arg1 ;
-(id)_loadDiskCacheImageForKey:(id)arg1 expectImageExists:(BOOL)arg2 ;
-(id)imageForKey:(id)arg1 size:(CGSize)arg2 resizeOptions:(int)arg3 ;
-(id)imageForKey:(id)arg1 size:(CGSize)arg2 resizeOptions:(int)arg3 modifier:(id)arg4 ;
-(id)_keyForSize:(CGSize)arg1 baseKey:(id)arg2 modifier:(id)arg3 ;
-(id)alternativeSize;
-(id)_createModifiedImageFromSourceKey:(id)arg1 newImageKey:(id)arg2 modifier:(id)arg3 size:(CGSize)arg4 resizeOptions:(int)arg5 ;
-(id)_createScaledImageFromSourceKey:(id)arg1 newImageKey:(id)arg2 size:(CGSize)arg3 resizeOptions:(int)arg4 ;
-(id)_performImagingTransactionNamed:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)imageInMemoryForKey:(id)arg1 size:(CGSize)arg2 modifier:(id)arg3 ;
-(void)asyncImageForKey:(id)arg1 size:(CGSize)arg2 resizeOptions:(int)arg3 modifier:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)asyncImageURLForKey:(id)arg1 squareDimension:(double)arg2 cacheKeyModifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)hasItemForKey:(id)arg1 size:(CGSize)arg2 modifier:(id)arg3 ;
-(BOOL)disableMemoryCache;
-(void)setDisableMemoryCache:(BOOL)arg1 ;
-(void)addImagesWithSourceUrl:(id)arg1 forKeys:(id)arg2 removeOldItems:(BOOL)arg3 discardTransparency:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(id)imageForKey:(id)arg1 size:(CGSize)arg2 ;
-(id)imageForKey:(id)arg1 size:(CGSize)arg2 modifier:(id)arg3 ;
-(id)imageInMemoryForKey:(id)arg1 size:(CGSize)arg2 ;
-(void)asyncImageForKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)asyncImageForKey:(id)arg1 size:(CGSize)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)asyncImageForKey:(id)arg1 size:(CGSize)arg2 resizeOptions:(int)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)asyncImageForKey:(id)arg1 size:(CGSize)arg2 modifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)asyncImageForKey:(id)arg1 squareDimension:(double)arg2 cacheKeyModifier:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)asyncImageURLForKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)hasItemForKey:(id)arg1 size:(CGSize)arg2 ;
-(id)_keyForSize:(CGSize)arg1 baseKey:(id)arg2 ;
-(void)setAlternativeSize:(id)arg1 ;
@end

