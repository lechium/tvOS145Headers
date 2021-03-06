/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNTextureCoreAnimationSource.h>

@class UIWindow, UIView, CALayer;

@interface SCNTextureUIKitSource : SCNTextureCoreAnimationSource {

	BOOL _windowReady;
	id _source;
	UIWindow* _uiWindow;
	UIView* _uiView;
	CGSize _sizeCache;
	unsigned _textureID;
	CALayer* _uiWindowLayer;
	BOOL _isOpaque;
	C3DEngineContextRef _engineContext;
	_C3DTextureSampler* _textureSampler;

}

@property (nonatomic,retain) UIView * uiView;                      //@synthesize uiView=_uiView - In the implementation block
@property (nonatomic,retain) UIWindow * uiWindow;                  //@synthesize uiWindow=_uiWindow - In the implementation block
@property (nonatomic,retain) CALayer * uiWindowLayer;              //@synthesize uiWindowLayer=_uiWindowLayer - In the implementation block
@property (nonatomic,retain) id source;                            //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL isOpaque;                        //@synthesize isOpaque=_isOpaque - In the implementation block
-(void)dealloc;
-(id)source;
-(void)setSource:(id)arg1 ;
-(BOOL)isOpaque;
-(id)layer;
-(void)setup;
-(BOOL)requiresMainThreadUpdates;
-(id)layerToFocusForRenderedLayer:(id)arg1 ;
-(BOOL)shouldFlip;
-(float)clearValue;
-(void)cleanup:(_C3DRendererContext*)arg1 ;
-(CGSize)layerSizeInPixels;
-(BOOL)supportsMetal;
-(double)layerContentsScaleFactor;
-(C3DTextureRef)textureWithEngineContext:(C3DEngineContextRef)arg1 textureSampler:(_C3DTextureSampler*)arg2 nextFrameTime:(double*)arg3 ;
-(void)setIsOpaque:(BOOL)arg1 ;
-(void)setUiView:(UIView *)arg1 ;
-(void)setUiWindow:(UIWindow *)arg1 ;
-(UIView *)uiView;
-(UIWindow *)uiWindow;
-(void)setUiWindowLayer:(CALayer *)arg1 ;
-(void)_layerTreeDidUpdate;
-(CALayer *)uiWindowLayer;
@end

