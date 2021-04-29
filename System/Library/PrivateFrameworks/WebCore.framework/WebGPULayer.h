/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CAMetalLayer.h>

@interface WebGPULayer : CAMetalLayer {

	GPUSwapChain* _swapChain;
	float _deviceScaleFactor;

}

@property (assign,nonatomic) GPUSwapChain* swapChain;              //@synthesize swapChain=_swapChain - In the implementation block
-(id)init;
-(GPUSwapChain*)swapChain;
-(CGImageRef)copyImageSnapshotWithColorSpace:(CGColorSpaceRef)arg1 ;
-(void)setSwapChain:(GPUSwapChain*)arg1 ;
@end

