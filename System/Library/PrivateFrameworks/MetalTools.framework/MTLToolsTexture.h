/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsResource.h>
#import <libobjc.A.dylib/MTLTextureImplementation.h>

@protocol MTLTexture, MTLBuffer;
@class NSString;

@interface MTLToolsTexture : MTLToolsResource <MTLTextureImplementation> {

	id<MTLTexture> _parentTexture;
	id<MTLBuffer> _buffer;

}

@property (readonly) id<MTLTexture> parentTexture;                               //@synthesize parentTexture=_parentTexture - In the implementation block
@property (readonly) id<MTLBuffer> buffer;                                       //@synthesize buffer=_buffer - In the implementation block
@property (readonly) unsigned long long bufferOffset; 
@property (readonly) unsigned long long bufferBytesPerRow; 
@property (readonly) IOSurfaceRef iosurface; 
@property (readonly) unsigned long long iosurfacePlane; 
@property (readonly) unsigned long long rotation; 
@property (readonly) BOOL isCompressed; 
@property (readonly) long long compressionFeedback; 
@property (readonly) unsigned long long uniqueIdentifier; 
@property (nonatomic,readonly) unsigned long long resourceIndex; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
@property (readonly) unsigned swizzleKey; 
@property (readonly) unsigned long long numFaces; 
@property (readonly) BOOL isDrawable; 
@property (readonly) id<MTLResource> rootResource; 
@property (readonly) unsigned long long parentRelativeLevel; 
@property (readonly) unsigned long long parentRelativeSlice; 
@property (readonly) unsigned long long textureType; 
@property (readonly) unsigned long long pixelFormat; 
@property (readonly) unsigned long long width; 
@property (readonly) unsigned long long height; 
@property (readonly) unsigned long long depth; 
@property (readonly) unsigned long long mipmapLevelCount; 
@property (readonly) unsigned long long sampleCount; 
@property (readonly) unsigned long long arrayLength; 
@property (readonly) unsigned long long usage; 
@property (getter=isShareable,readonly) BOOL shareable; 
@property (getter=isFramebufferOnly,readonly) BOOL framebufferOnly; 
@property (readonly) BOOL allowGPUOptimizedContents; 
@property (nonatomic,readonly) SCD_Struct_MT61 swizzle; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long hazardTrackingMode; 
@property (readonly) unsigned long long resourceOptions; 
@property (readonly) id<MTLHeap> heap; 
@property (readonly) unsigned long long heapOffset; 
@property (readonly) unsigned long long allocatedSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) int responsibleProcess; 
@property (readonly) unsigned long long allocationID; 
@property (readonly) unsigned long long protectionOptions; 
@property (readonly) unsigned long long unfilteredResourceOptions; 
-(void)dealloc;
-(unsigned long long)uniqueIdentifier;
-(unsigned long long)depth;
-(id<MTLBuffer>)buffer;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)pixelFormat;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)sampleCount;
-(unsigned long long)gpuAddress;
-(unsigned long long)mipmapLevelCount;
-(unsigned long long)arrayLength;
-(unsigned long long)textureType;
-(void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(SCD_Struct_MT17)arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6 ;
-(void)replaceRegion:(SCD_Struct_MT17)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void*)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 ;
-(void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(SCD_Struct_MT17)arg3 mipmapLevel:(unsigned long long)arg4 ;
-(void)replaceRegion:(SCD_Struct_MT17)arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void*)arg3 bytesPerRow:(unsigned long long)arg4 ;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 ;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4 ;
-(id)newSharedTextureHandle;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4 swizzle:(SCD_Struct_MT61)arg5 ;
-(id<MTLResource>)rootResource;
-(id<MTLTexture>)parentTexture;
-(unsigned long long)parentRelativeLevel;
-(unsigned long long)parentRelativeSlice;
-(unsigned long long)bufferOffset;
-(unsigned long long)bufferBytesPerRow;
-(IOSurfaceRef)iosurface;
-(unsigned long long)iosurfacePlane;
-(unsigned long long)usage;
-(BOOL)isShareable;
-(BOOL)isFramebufferOnly;
-(BOOL)allowGPUOptimizedContents;
-(SCD_Struct_MT61)swizzle;
-(unsigned long long)resourceIndex;
-(unsigned long long)rotation;
-(unsigned)swizzleKey;
-(BOOL)isDrawable;
-(unsigned long long)numFaces;
-(void)copyFromSlice:(unsigned long long)arg1 mipmapLevel:(unsigned long long)arg2 origin:(SCD_Struct_MT0)arg3 size:(SCD_Struct_MT0)arg4 toPixels:(void*)arg5 rowBytes:(unsigned long long)arg6 imageBytes:(unsigned long long)arg7 ;
-(void)copyFromPixels:(const void*)arg1 rowBytes:(unsigned long long)arg2 imageBytes:(unsigned long long)arg3 toSlice:(unsigned long long)arg4 mipmapLevel:(unsigned long long)arg5 origin:(SCD_Struct_MT0)arg6 size:(SCD_Struct_MT0)arg7 ;
-(long long)compressionFeedback;
-(BOOL)isCompressed;
-(id)newCompressedTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 level:(unsigned long long)arg3 slice:(unsigned long long)arg4 ;
-(BOOL)canGenerateMipmapLevels;
-(void)generateMipmapLevel:(unsigned long long)arg1 slice:(unsigned long long)arg2 ;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2 ;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4 resourceIndex:(unsigned long long)arg5 ;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4 swizzle:(SCD_Struct_MT61)arg5 resourceIndex:(unsigned long long)arg6 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 buffer:(id)arg3 ;
-(id)realRootResource;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 parentTexture:(id)arg3 ;
@end

