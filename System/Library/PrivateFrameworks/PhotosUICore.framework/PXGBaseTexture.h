/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGSpriteTexture.h>
#import <libobjc.A.dylib/PXGMutableSpriteTexture.h>

@protocol OS_dispatch_queue;
@class NSIndexSet, NSMutableIndexSet, NSObject, NSString;

@interface PXGBaseTexture : NSObject <PXGSpriteTexture, PXGMutableSpriteTexture> {

	NSMutableIndexSet* _spriteIndexes;
	NSObject*<OS_dispatch_queue> _syncQueue;
	SCD_Struct_PX112* _syncQueue_pendingImageRequestInfo;
	unsigned long long _syncQueue_pendingImageRequestInfoCount;
	unsigned long long _syncQueue_pendingImageRequestInfoCapacity;

}

@property (nonatomic,readonly) unsigned spriteCount; 
@property (nonatomic,readonly) NSIndexSet * spriteIndexes; 
@property (nonatomic,readonly) long long estimatedByteSize; 
@property (nonatomic,readonly) int presentationType; 
@property (nonatomic,readonly) CGImageRef imageRepresentation; 
@property (nonatomic,readonly) CGSize pixelSize; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(BOOL)isOpaque;
-(CGSize)pixelSize;
-(CGImageRef)imageRepresentation;
-(int)presentationType;
-(NSIndexSet *)spriteIndexes;
-(long long)estimatedByteSize;
-(unsigned)spriteCount;
-(void)getSpriteIndexes:(unsigned*)arg1 maxSpriteCount:(unsigned)arg2 ;
-(void)enumerateSpriteIndexes:(/*^block*/id)arg1 ;
-(BOOL)containsSpriteIndex:(unsigned)arg1 ;
-(void)applyChangeDetails:(id)arg1 ;
-(void)addSpriteWithTextureRequestID:(int)arg1 deliveryOrder:(unsigned)arg2 ;
-(void)processPendingTextureRequestIDsWithHandler:(/*^block*/id)arg1 ;
-(void)removeSpriteIndex:(unsigned)arg1 ;
-(void)_syncQueue_resizeStorageIfNeeded;
-(void)_addSpriteIndex:(unsigned)arg1 ;
-(void)addSpriteIndexRange:(NSRange)arg1 ;
-(void)removeAllSpriteIndexes;
@end

