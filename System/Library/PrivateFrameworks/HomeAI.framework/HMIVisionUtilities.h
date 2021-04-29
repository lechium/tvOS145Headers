/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMIVisionUtilities : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(CVBufferRef)transferPixelBuffer:(CVBufferRef)arg1 pixelFormat:(unsigned)arg2 options:(long long)arg3 error:(id*)arg4 ;
+(CVBufferRef)createPixelBufferWithSize:(CGSize)arg1 pixelFormat:(unsigned)arg2 useIOSurface:(BOOL)arg3 ;
+(CVBufferRef)transferPixelBuffer:(CVBufferRef)arg1 crop:(CGRect)arg2 size:(CGSize)arg3 pixelFormat:(unsigned)arg4 options:(long long)arg5 error:(id*)arg6 ;
+(CVBufferRef)createPixelBufferFromJPEGDataProvider:(CGDataProviderRef)arg1 error:(id*)arg2 ;
+(CGRect)applyPadding:(CGRect)arg1 withOriginalSize:(CGSize)arg2 padding:(CGSize)arg3 ;
+(CVBufferRef)cropPixelBuffer:(CVBufferRef)arg1 crop:(CGRect)arg2 error:(id*)arg3 ;
+(CVBufferRef)resizePixelBuffer:(CVBufferRef)arg1 size:(CGSize)arg2 error:(id*)arg3 ;
+(CVBufferRef)resizePixelBuffer:(CVBufferRef)arg1 size:(CGSize)arg2 pixelFormat:(unsigned)arg3 options:(long long)arg4 error:(id*)arg5 ;
+(id)createJPEGDataFromPixelBuffer:(CVBufferRef)arg1 scale:(float)arg2 encodeQuality:(float)arg3 error:(id*)arg4 ;
+(CVBufferRef)createPixelBufferFromJPEGPath:(id)arg1 error:(id*)arg2 ;
+(CVBufferRef)createPixelBufferFromJPEGData:(id)arg1 error:(id*)arg2 ;
+(CVBufferRef)createPixelBufferFromImageData:(id)arg1 error:(id*)arg2 ;
+(CVBufferRef)dewarpPixelBuffer:(CVBufferRef)arg1 crop:(CGRect)arg2 size:(CGSize)arg3 pixelFormat:(unsigned)arg4 options:(long long)arg5 cameraModel:(id)arg6 error:(id*)arg7 ;
+(CGRect)imposeMinSizeFor:(CGRect)arg1 withOriginalSize:(CGSize)arg2 minCrop:(int)arg3 ;
+(CGRect)maintainAspectRatio:(CGRect)arg1 originalSize:(CGSize)arg2 ratioThreshold:(float)arg3 ;
+(BOOL)saveVideoFrame:(id)arg1 videoId:(id)arg2 baseURL:(id)arg3 error:(id*)arg4 ;
+(CVBufferRef)transferPixelBuffer:(CVBufferRef)arg1 rotationAngle:(float)arg2 crop:(CGRect)arg3 size:(CGSize)arg4 precision:(unsigned long long)arg5 error:(id*)arg6 ;
+(void)releaseCachedVisionResources;
@end

