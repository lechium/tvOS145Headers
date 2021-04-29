/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreImage/CoreImage-Structs.h>
@interface CIContext : NSObject {

	void* _priv;

}

@property (readonly) Context* _internalContext; 
@property (readonly) unsigned long long identifier; 
@property (nonatomic,readonly) CGColorSpaceRef workingColorSpace; 
@property (nonatomic,readonly) int workingFormat; 
+(id)_IS_sharedIconCompositorContext;
+(id)context;
+(id)contextWithOptions:(id)arg1 ;
+(CGColorSpaceRef)defaultWorkingColorSpace;
+(id)_singletonContext;
+(CGColorSpaceRef)defaultGrayColorSpace;
+(CGColorSpaceRef)defaultRGBColorSpace;
+(Context*)internalContextWithMTLDevice:(id)arg1 options:(id)arg2 ;
+(Context*)internalGLContextWithOptions:(id)arg1 ;
+(Context*)internalContextWithEAGLContext:(id)arg1 options:(id)arg2 ;
+(Context*)internalContextWithMTLCommandQueue:(id)arg1 options:(id)arg2 ;
+(id)contextWithMTLCommandQueue:(id)arg1 options:(id)arg2 ;
+(int)_crashed_because_nonaddressable_memory_was_passed_to_render:(id)arg1 toBitmap:(void*)arg2 rowBytes:(long long)arg3 bounds:(CGRect)arg4 format:(int)arg5 colorSpace:(CGColorSpaceRef)arg6 ;
+(id)contextWithCGContext:(CGContextRef)arg1 options:(id)arg2 ;
+(id)contextWithEAGLContext:(id)arg1 ;
+(id)contextWithEAGLContext:(id)arg1 options:(id)arg2 ;
+(id)contextWithMTLDevice:(id)arg1 ;
+(id)contextWithMTLDevice:(id)arg1 options:(id)arg2 ;
+(id)contextWithMTLCommandQueue:(id)arg1 ;
+(Context*)internalCLContextWithOptions:(id)arg1 glContext:(void*)arg2 ;
+(Context*)internalCLContextWithOptions:(id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)lock;
-(void)unlock;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)invalidate;
-(unsigned long long)identifier;
-(id)initWithOptions:(id)arg1 ;
-(id)device;
-(CGRect)bounds;
-(void)clearCaches;
-(void)setBounds:(CGRect)arg1 ;
-(void)render:(id)arg1 ;
-(void)render:(id)arg1 toBitmap:(void*)arg2 rowBytes:(long long)arg3 bounds:(CGRect)arg4 format:(int)arg5 colorSpace:(CGColorSpaceRef)arg6 ;
-(void)render:(id)arg1 toCVPixelBuffer:(CVBufferRef)arg2 ;
-(Context*)_internalContext;
-(CGColorSpaceRef)_outputColorSpace;
-(void)drawImage:(id)arg1 inRect:(CGRect)arg2 fromRect:(CGRect)arg3 ;
-(void)render:(id)arg1 toIOSurface:(IOSurfaceRef)arg2 bounds:(CGRect)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(id)internalCommandQueue;
-(id)_initWithInternalRepresentation:(void*)arg1 ;
-(id)initWithCGContext:(CGContextRef)arg1 options:(id)arg2 ;
-(id)initWithEAGLContext:(id)arg1 ;
-(id)initWithEAGLContext:(id)arg1 options:(id)arg2 ;
-(id)initWithMTLDevice:(id)arg1 options:(id)arg2 ;
-(id)initWithMTLCommandQueue:(id)arg1 options:(id)arg2 ;
-(void)_gpuContextCheck;
-(void)render:(id)arg1 toCVPixelBuffer:(CVBufferRef)arg2 bounds:(CGRect)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(id)startTaskToRender:(id)arg1 fromRect:(CGRect)arg2 toDestination:(id)arg3 atPoint:(CGPoint)arg4 error:(id*)arg5 ;
-(BOOL)_isGLBackedContext;
-(BOOL)_isCGBackedContext;
-(CGImageRef)createCGImage:(id)arg1 fromRect:(CGRect)arg2 format:(int)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(CGImageRef)createCGImage:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)render:(id)arg1 toTexture:(unsigned)arg2 target:(unsigned)arg3 bounds:(CGRect)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
-(IOSurfaceRef)createIOSurface:(id)arg1 fromRect:(CGRect)arg2 ;
-(CGColorSpaceRef)workingColorSpace;
-(CGAffineTransform)CTM;
-(BOOL)_isMetalInternalContext;
-(id)clientCommandQueue;
-(void)abort;
-(BOOL)_isGLInternalContext;
-(void)_insertEventMarker:(const char*)arg1 ;
-(void)drawImage:(id)arg1 atPoint:(CGPoint)arg2 fromRect:(CGRect)arg3 ;
-(void)render:(id)arg1 toTexture:(unsigned)arg2 bounds:(CGRect)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(void)render:(id)arg1 toMTLTexture:(id)arg2 commandBuffer:(id)arg3 bounds:(CGRect)arg4 colorSpace:(CGColorSpaceRef)arg5 ;
-(IOSurfaceRef)createIOSurface:(id)arg1 ;
-(CGLayerRef)createCGLayerWithSize:(CGSize)arg1 info:(CFDictionaryRef)arg2 ;
-(unsigned long long)maximumInputImageSize;
-(unsigned long long)maximumOutputImageSize;
-(CGSize)inputImageMaximumSize;
-(CGSize)outputImageMaximumSize;
-(int)workingFormat;
-(void)reclaimResources;
-(id)flatten:(id)arg1 fromRect:(CGRect)arg2 format:(int)arg3 colorSpace:(CGColorSpaceRef)arg4 ;
-(BOOL)measureRequirementsOf:(id)arg1 query:(int)arg2 :(id*)arg3 results:(CGRect*)arg4 ;
-(void)setCTM:(CGAffineTransform)arg1 ;
-(id)createColorCubeDataForFilters:(id)arg1 dimension:(int)arg2 ;
-(id)_pdfDataRepresentation;
-(CGImageRef)_createCGImage:(id)arg1 fromRect:(CGRect)arg2 format:(int)arg3 colorSpace:(CGColorSpaceRef)arg4 deferred:(Trilean)arg5 ;
-(id)_createClone;
-(CGImageRef)createCGImage:(id)arg1 fromRect:(CGRect)arg2 format:(int)arg3 ;
-(CGImageRef)createCGImage:(id)arg1 fromRect:(CGRect)arg2 format:(int)arg3 colorSpace:(CGColorSpaceRef)arg4 deferred:(BOOL)arg5 ;
-(id)TIFFRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 options:(id)arg4 ;
-(id)PNGRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 options:(id)arg4 ;
-(id)JPEGRepresentationOfImage:(id)arg1 colorSpace:(CGColorSpaceRef)arg2 options:(id)arg3 ;
-(id)HEIFRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 options:(id)arg4 ;
-(BOOL)writeTIFFRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(CGColorSpaceRef)arg4 options:(id)arg5 error:(id*)arg6 ;
-(BOOL)writePNGRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(CGColorSpaceRef)arg4 options:(id)arg5 error:(id*)arg6 ;
-(BOOL)writeJPEGRepresentationOfImage:(id)arg1 toURL:(id)arg2 colorSpace:(CGColorSpaceRef)arg3 options:(id)arg4 error:(id*)arg5 ;
-(BOOL)writeHEIFRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(CGColorSpaceRef)arg4 options:(id)arg5 error:(id*)arg6 ;
-(id)depthBlurEffectFilterForImage:(id)arg1 disparityImage:(id)arg2 portraitEffectsMatte:(id)arg3 hairSemanticSegmentation:(id)arg4 glassesMatte:(id)arg5 gainMap:(id)arg6 orientation:(unsigned)arg7 options:(id)arg8 ;
-(void)_performFaceDetection:(id)arg1 image:(id)arg2 orientation:(int)arg3 filter:(id)arg4 ;
-(id)depthBlurEffectFilterForImageData:(id)arg1 options:(id)arg2 ;
-(id)depthBlurEffectFilterForImageURL:(id)arg1 options:(id)arg2 ;
-(id)depthBlurEffectFilterForImage:(id)arg1 disparityImage:(id)arg2 portraitEffectsMatte:(id)arg3 orientation:(unsigned)arg4 options:(id)arg5 ;
-(id)depthBlurEffectFilterForImage:(id)arg1 disparityImage:(id)arg2 portraitEffectsMatte:(id)arg3 hairSemanticSegmentation:(id)arg4 orientation:(unsigned)arg5 options:(id)arg6 ;
-(BOOL)prepareRender:(id)arg1 fromRect:(CGRect)arg2 toDestination:(id)arg3 atPoint:(CGPoint)arg4 error:(id*)arg5 ;
-(id)startTaskToRender:(id)arg1 toDestination:(id)arg2 error:(id*)arg3 ;
-(id)_startTaskToRender:(id)arg1 toDestination:(id)arg2 forPrepareRender:(BOOL)arg3 forClear:(BOOL)arg4 error:(id*)arg5 ;
-(id)startTaskToClear:(id)arg1 error:(id*)arg2 ;
@end

