/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLDevice, MTLCommandQueue, MTLLibrary;
#import <Vision/Vision-Structs.h>
@interface LKTMetalContext : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLLibrary> _library;

}

@property (nonatomic,readonly) id<MTLDevice> device;                          //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue;              //@synthesize commandQueue=_commandQueue - In the implementation block
@property (nonatomic,readonly) id<MTLLibrary> library;                        //@synthesize library=_library - In the implementation block
+(id)metalContextForDevice:(id)arg1 error:(id*)arg2 ;
+(void)makeResourceCoherent:(id)arg1 resource:(id)arg2 ;
-(id<MTLDevice>)device;
-(id<MTLCommandQueue>)commandQueue;
-(id<MTLLibrary>)library;
-(id)initWithDevice:(id)arg1 error:(id*)arg2 ;
-(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 pixelFormat:(unsigned long long)arg2 plane:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)bindPixelBufferToMTL2DTexture:(CVBufferRef)arg1 pixelFormat:(unsigned long long)arg2 textureSize:(CGSize)arg3 plane:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)bindIOSurfaceToMTL2DTexture:(IOSurfaceRef)arg1 pixelFormat:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 plane:(unsigned long long)arg5 error:(id*)arg6 ;
@end

