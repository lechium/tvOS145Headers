/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalKit/MetalKit-Structs.h>
#import <MetalKit/MTKTextureLoaderData.h>

@class MDLTexture;

@interface MTKTextureLoaderMDL : MTKTextureLoaderData {

	MDLTexture* _texture;
	MTLPixelFormatInfo _pixelFormatInfo;

}
-(void)dealloc;
-(id)getDataForArrayElement:(unsigned long long)arg1 face:(unsigned long long)arg2 level:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 bytesPerRow:(unsigned long long*)arg5 bytesPerImage:(unsigned long long*)arg6 ;
-(BOOL)determineFormatFromChannelEncoding:(long long)arg1 channelCount:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithMDLTexture:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
@end

