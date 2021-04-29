/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <PassKitUIFoundation/PKRenderLoop.h>

@protocol CAMetalDrawable, MTLDevice;
@class CAMetalLayer, CALayer;

@interface PKMetalRenderLoop : PKRenderLoop {

	CAMetalLayer* _layer;
	BOOL _drawableSizeDirty;
	id<CAMetalDrawable> _currentDrawable;
	unsigned long long _pixelFormat;
	id<MTLDevice> _device;
	CGSize _drawableSize;

}

@property (nonatomic,readonly) unsigned long long pixelFormat;                           //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (nonatomic,readonly) id<MTLDevice> device;                                     //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) CALayer * layer; 
@property (assign,nonatomic) BOOL framebufferOnly; 
@property (assign,nonatomic) CGSize drawableSize;                                        //@synthesize drawableSize=_drawableSize - In the implementation block
@property (assign,nonatomic,__weak) id<PKMetalRenderLoopDelegate> delegate; 
-(id)init;
-(void)invalidate;
-(unsigned long long)pixelFormat;
-(id<MTLDevice>)device;
-(BOOL)framebufferOnly;
-(void)setFramebufferOnly:(BOOL)arg1 ;
-(CALayer *)layer;
-(BOOL)isDrawableAvailable;
-(CGSize)drawableSize;
-(void)setDrawableSize:(CGSize)arg1 ;
-(id)currentDrawable;
-(void)_willDraw;
-(void)_didDraw;
-(BOOL)_subclassPreferredPauseState;
-(id)initWithPixelFormat:(unsigned long long)arg1 forDevice:(id)arg2 ;
@end

