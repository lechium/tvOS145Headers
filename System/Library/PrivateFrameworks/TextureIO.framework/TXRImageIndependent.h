/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextureIO/TextureIO-Structs.h>
#import <TextureIO/TXRImage.h>

@interface TXRImageIndependent : TXRImage {

	unsigned long long _pixelFormat;
	unsigned long long _alphaInfo;
	 _dimensions;

}

@property (nonatomic,readonly) unsigned long long pixelFormat;              //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign,nonatomic) unsigned long long alphaInfo;                  //@synthesize alphaInfo=_alphaInfo - In the implementation block
@property (nonatomic,readonly)  dimensions;                                 //@synthesize dimensions=_dimensions - In the implementation block
-(unsigned long long)pixelFormat;
-()dimensions;
-(unsigned long long)alphaInfo;
-(id)initWithDimensions:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 alphaInfo:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 bytesPerImage:(id)arg5 buffer:(unsigned long long)arg6 ;
-(id)initWithDimensions:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 alphaInfo:(id)arg3 ;
-(id)initWithImage:(id)arg1 dimensions:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 ;
-(void)setAlphaInfo:(unsigned long long)arg1 ;
-(id)initWithImage:(id)arg1 dimensions:(unsigned long long)arg2 ;
-(id)initWithCGImage:(CGImageRef)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)initWithCGImage:(CGImageRef)arg1 pixelFormat:(unsigned long long)arg2 bufferAllocator:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(BOOL)exportToURL:(id)arg1 uttype:(const CFStringRef)arg2 error:(id*)arg3 ;
-(CGImageRef)newCGImageWithColorSpace:(CGColorSpaceRef)arg1 error:(id*)arg2 ;
@end

