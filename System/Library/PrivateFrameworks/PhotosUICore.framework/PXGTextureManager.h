/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGTextureProviderDelegate.h>
#import <libobjc.A.dylib/PXGTextureAtlasManagerDelegate.h>

@protocol OS_dispatch_queue, PXGTextureConverter, PXGMutableSpriteTexture, PXGTextureManagerDelegate;
@class NSObject, NSMapTable, NSHashTable, NSDictionary, NSMutableDictionary, NSIndexSet, NSMutableSet, PXGTextureManagerPreheatingStrategy, PXGViewEnvironment, NSArray, NSString;

@interface PXGTextureManager : NSObject <PXGTextureProviderDelegate, PXGTextureAtlasManagerDelegate> {

	NSObject*<OS_dispatch_queue> _requestQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _processQueue;
	NSObject*<OS_dispatch_queue> _deallocationsQueue;
	os_unfair_lock_s _lookupLock;
	NSMapTable* _lookupLock_textureByKeyByPresentationType[2];
	unordered_map<int, PXGRequestDetails, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, PXGRequestDetails>>>* _lookupLock_requestDetailsByRequestID;
	NSHashTable* _spriteTexturesInUse;
	NSDictionary* _textureConverterByPresentationType;
	id<PXGTextureConverter> _atlasTextureConverter;
	int _atlasPresentationType;
	BOOL _didSwitchTextureConverter;
	NSMutableDictionary* _textureProviderByMediaKind;
	NSMapTable* _textureProvidersDisplayLinkRegistrationState;
	unordered_map<int, unsigned int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, unsigned int>>>* _spriteIndexByRequestID;
	NSIndexSet* _loadedSpriteIndexes;
	SCD_Struct_PX137* _streamInfoBySpriteIndex;
	unsigned long long _streamInfoBySpriteIndexCount;
	unsigned long long _streamInfoBySpriteIndexCapacity;
	AC _isPerformingUpdateFromRequestQueue;
	unsigned long long _requestQueue_pendingSetNeedsUpdate;
	id<PXGMutableSpriteTexture> _emptyTexture;
	NSMutableSet* _placeholderTextures;
	BOOL _lowMemoryMode;
	BOOL _isInactive;
	id<PXGTextureManagerDelegate> _delegate;
	PXGTextureManagerPreheatingStrategy* _preheatingStrategy;
	PXGViewEnvironment* _viewEnvironment;
	NSDictionary* _texturesByPresentationType;
	NSArray* _textureAtlasManagers;
	long long _streamCount;

}

@property (retain) NSArray * textureAtlasManagers;                                                  //@synthesize textureAtlasManagers=_textureAtlasManagers - In the implementation block
@property (nonatomic,readonly) long long streamCount;                                               //@synthesize streamCount=_streamCount - In the implementation block
@property (assign,nonatomic,__weak) id<PXGTextureManagerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PXGTextureManagerPreheatingStrategy * preheatingStrategy;              //@synthesize preheatingStrategy=_preheatingStrategy - In the implementation block
@property (nonatomic,retain) PXGViewEnvironment * viewEnvironment;                                  //@synthesize viewEnvironment=_viewEnvironment - In the implementation block
@property (assign,nonatomic) BOOL lowMemoryMode;                                                    //@synthesize lowMemoryMode=_lowMemoryMode - In the implementation block
@property (assign,nonatomic) BOOL isInactive;                                                       //@synthesize isInactive=_isInactive - In the implementation block
@property (nonatomic,readonly) NSDictionary * texturesByPresentationType;                           //@synthesize texturesByPresentationType=_texturesByPresentationType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(id<PXGTextureManagerDelegate>)delegate;
-(void)setDelegate:(id<PXGTextureManagerDelegate>)arg1 ;
-(void)_setNeedsUpdate;
-(BOOL)isInactive;
-(BOOL)lowMemoryMode;
-(void)setLowMemoryMode:(BOOL)arg1 ;
-(void)setViewEnvironment:(PXGViewEnvironment *)arg1 ;
-(PXGViewEnvironment *)viewEnvironment;
-(BOOL)textureAtlasManagerShouldPruneUnusedTextures:(id)arg1 ;
-(void)textureProvider:(id)arg1 didProvideNothingForRequestID:(int)arg2 ;
-(void)textureProvider:(id)arg1 didProvideCGImage:(CGImageRef)arg2 orientation:(unsigned)arg3 forRequestID:(int)arg4 ;
-(void)textureProvider:(id)arg1 didProvideImageData:(id)arg2 withSpecAtIndex:(long long)arg3 bytesPerRow:(unsigned long long)arg4 contentsRect:(CGRect)arg5 forRequestID:(int)arg6 ;
-(void)textureProvider:(id)arg1 didProvidePixelBuffer:(CVBufferRef)arg2 orientationTransform:(CGAffineTransform)arg3 forRequestID:(int)arg4 ;
-(void)textureProvider:(id)arg1 didProvidePayload:(id)arg2 forRequestID:(int)arg3 ;
-(void)textureProviderNeedsToRegisterToDisplayLinkUpdates:(id)arg1 ;
-(void)textureProviderNeedsToUnregisterFromDisplayLinkUpdates:(id)arg1 ;
-(void)registerTextureConverter:(id)arg1 forPresentationType:(int)arg2 ;
-(id)_textureConverterForPresentationType:(int)arg1 ;
-(void)registerTextureProvider:(id)arg1 forMediaKind:(int)arg2 ;
-(void)_requestQueue_setNeedsUpdate;
-(void)_requestQueue_scheduleUpdateIfAllowed;
-(void)_resizeStorageIfNeededForSpriteCount:(long long)arg1 ;
-(void)streamTexturesForSpritesInDataStore:(id)arg1 presentationDataStore:(id)arg2 changeDetails:(id)arg3 layout:(id)arg4 interactionState:(SCD_Struct_PX22)arg5 ;
-(void)_pruneTextures:(id)arg1 ;
-(void)_blockOnThumbnailsIfNeededWithGeometries:(SCD_Struct_PX106*)arg1 visibleRect:(CGRect)arg2 interactionState:(SCD_Struct_PX22)arg3 fences:(id)arg4 ;
-(void)_lookupLock_requestTexturesForSpritesInRange:(PXGSpriteIndexRange)arg1 textureProvider:(id)arg2 mediaKind:(int)arg3 presentationType:(int)arg4 isAppearing:(BOOL)arg5 layout:(id)arg6 leafSpriteIndexRange:(PXGSpriteIndexRange)arg7 sprites:(SCD_Struct_PX84*)arg8 textureStreamInfos:(SCD_Struct_PX137*)arg9 ;
-(long long)_processTextureProviderResults;
-(void)_enumerateSpriteTextures:(/*^block*/id)arg1 ;
-(CGImageRef)textureSnapshotForSpriteIndex:(unsigned)arg1 ;
-(BOOL)streamUpdatedTexturesForDisplayLinkIfNeeded:(id)arg1 ;
-(void)simulateTextureLoad;
-(void)_updatePreheatingStrategy;
-(void)_configureAllTextureConverters;
-(void)_configureTextureConverter:(id)arg1 ;
-(void)_configureAllTextureProviders;
-(void)_configureTextureProvider:(id)arg1 ;
-(void)_enumerateTextureProviders:(/*^block*/id)arg1 ;
-(void)_enumerateTextureConverters:(/*^block*/id)arg1 ;
-(void)_removeAllTexturesForPresentationType:(int)arg1 ;
-(id)_existingTextureForKey:(id)arg1 presentationType:(int)arg2 ;
-(id)_existingTextureForCGImage:(CGImageRef)arg1 presentationType:(int)arg2 ;
-(id)_existingTextureForPixelBuffer:(CVBufferRef)arg1 presentationType:(int)arg2 ;
-(id)_existingTextureForPayload:(id)arg1 presentationType:(int)arg2 ;
-(id)_storeTexture:(id)arg1 forKey:(id)arg2 ;
-(id)_storeTexture:(id)arg1 forCGImage:(CGImageRef)arg2 ;
-(id)_storeTexture:(id)arg1 forPixelBuffer:(CVBufferRef)arg2 ;
-(id)_storeTexture:(id)arg1 forPayload:(id)arg2 ;
-(id)_textureAtlasManagerForImageDataSpec:(SCD_Struct_PX24)arg1 ;
-(void)_handleProvidedSpriteTexture:(id)arg1 fromTextureProvider:(id)arg2 requestID:(int)arg3 deliveryOrder:(unsigned)arg4 ;
-(void)_addTextureToTexturesInUse:(id)arg1 ;
-(void)_processCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 fromTextureProvider:(id)arg3 withTextureConverter:(id)arg4 requestID:(int)arg5 deliveryOrder:(unsigned)arg6 ;
-(id)_createTextureForCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 fromTextureProvider:(id)arg3 withTextureConverter:(id)arg4 ;
-(void)_processPixelBuffer:(CVBufferRef)arg1 orientationTransform:(CGAffineTransform)arg2 fromTextureProvider:(id)arg3 withTextureConverter:(id)arg4 forRequestID:(int)arg5 deliveryOrder:(unsigned)arg6 ;
-(BOOL)_getRequestDetails:(out SCD_Struct_PX138*)arg1 forRequestID:(int)arg2 ;
-(PXGTextureManagerPreheatingStrategy *)preheatingStrategy;
-(void)setPreheatingStrategy:(PXGTextureManagerPreheatingStrategy *)arg1 ;
-(void)setIsInactive:(BOOL)arg1 ;
-(NSDictionary *)texturesByPresentationType;
-(NSArray *)textureAtlasManagers;
-(void)setTextureAtlasManagers:(NSArray *)arg1 ;
-(long long)streamCount;
@end

