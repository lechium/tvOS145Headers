/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIImageProcessorInOut.h>
#import <libobjc.A.dylib/CIImageProcessorOutput.h>

@protocol CIImageProcessorOutput
@property (nonatomic,readonly) CGRect region; 
@property (nonatomic,readonly) unsigned long long bytesPerRow; 
@property (nonatomic,readonly) int format; 
@property (nonatomic,readonly) void* baseAddress; 
@property (nonatomic,readonly) IOSurfaceRef surface; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer; 
@property (nonatomic,readonly) id<MTLTexture> metalTexture; 
@property (nonatomic,readonly) id<MTLCommandBuffer> metalCommandBuffer; 
@required
-(unsigned long long)bytesPerRow;
-(void*)baseAddress;
-(IOSurfaceRef)surface;
-(int)format;
-(CGRect)region;
-(id<MTLCommandBuffer>)metalCommandBuffer;
-(id<MTLTexture>)metalTexture;
-(CVBufferRef)pixelBuffer;

@end


@protocol MTLCommandBuffer;
@interface CIImageProcessorOutput : CIImageProcessorInOut <CIImageProcessorOutput> {

	id<MTLCommandBuffer> _cmdBuffer;

}

@property (nonatomic,readonly) CGRect region; 
@property (nonatomic,readonly) unsigned long long bytesPerRow; 
@property (nonatomic,readonly) int format; 
@property (nonatomic,readonly) void* baseAddress; 
@property (nonatomic,readonly) IOSurfaceRef surface; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer; 
@property (nonatomic,readonly) id<MTLTexture> metalTexture; 
@property (nonatomic,readonly) id<MTLCommandBuffer> metalCommandBuffer; 
-(void)dealloc;
-(unsigned)contextID;
-(void*)baseAddress;
-(id<MTLCommandBuffer>)metalCommandBuffer;
-(id<MTLTexture>)metalTexture;
-(CGColorSpaceRef)workingColorSpace;
-(id)initWithSurface:(IOSurfaceRef)arg1 texture:(Texture*)arg2 allowSRGB:(BOOL)arg3 bounds:(CGRect)arg4 context:(Context*)arg5 ;
-(BOOL)metalCommandBufferRequested;
-(id)metalContext;
@end

