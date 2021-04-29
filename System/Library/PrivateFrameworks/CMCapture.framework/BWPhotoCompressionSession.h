/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWPhotoCompressionSession <NSObject>
@required
-(int)addMetadata:(id)arg1;
-(BOOL)isContainerOpen;
-(int)closeContainer;
-(int)openContainerWithOptions:(id)arg1 settingsID:(long long)arg2;
-(int)addMainImage:(CVBufferRef)arg1 metadata:(id)arg2 options:(id)arg3;
-(int)addThumbnailImage:(CVBufferRef)arg1 options:(id)arg2;
-(int)addCompressedThumbnailImage:(IOSurfaceRef)arg1 thumbnailImageSize:(unsigned long long)arg2 options:(id)arg3;
-(int)addAuxImage:(CVBufferRef)arg1 type:(int)arg2 auxImageMetadata:(CGImageMetadataRef)arg3 options:(id)arg4;
-(int)closeContainerAndCopySurfaceOut:(*)arg1 surfaceSizeOut:(unsigned long long*)arg2;

@end

