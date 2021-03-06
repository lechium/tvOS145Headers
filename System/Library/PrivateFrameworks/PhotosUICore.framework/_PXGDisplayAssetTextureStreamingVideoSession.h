/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXGDisplayAssetPixelBufferSource, PXDisplayAsset;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableIndexSet, NSDate, NSIndexSet;

@interface _PXGDisplayAssetTextureStreamingVideoSession : NSObject {

	NSMutableIndexSet* _textureRequestIDs;
	id<PXGDisplayAssetPixelBufferSource> _pixelBufferSource;
	id<PXDisplayAsset> _displayAsset;
	NSDate* _firstPixelBufferDisplayDate;
	CVPixelBufferPoolRef _pixelBufferPool;

}

@property (nonatomic,readonly) id<PXGDisplayAssetPixelBufferSource> pixelBufferSource;              //@synthesize pixelBufferSource=_pixelBufferSource - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> displayAsset;                                     //@synthesize displayAsset=_displayAsset - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * textureRequestIDs; 
@property (nonatomic,copy) NSDate * firstPixelBufferDisplayDate;                                    //@synthesize firstPixelBufferDisplayDate=_firstPixelBufferDisplayDate - In the implementation block
@property (nonatomic,retain) CVPixelBufferPoolRef pixelBufferPool;                                  //@synthesize pixelBufferPool=_pixelBufferPool - In the implementation block
-(CVPixelBufferPoolRef)pixelBufferPool;
-(NSIndexSet *)textureRequestIDs;
-(void)removeTextureRequestIDs:(id)arg1 ;
-(void)setPixelBufferPool:(CVPixelBufferPoolRef)arg1 ;
-(id<PXGDisplayAssetPixelBufferSource>)pixelBufferSource;
-(void)setFirstPixelBufferDisplayDate:(NSDate *)arg1 ;
-(NSDate *)firstPixelBufferDisplayDate;
-(id<PXDisplayAsset>)displayAsset;
-(void)addTextureRequestID:(int)arg1 ;
-(id)initWithPixelBufferSource:(id)arg1 displayAsset:(id)arg2 ;
-(void)removeTextureRequestID:(int)arg1 ;
@end

