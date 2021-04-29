/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLBuffer;
@class ARUISpriteRenderState, ARUISpriteUniformsCache;

@interface ARUISpritesRenderer : NSObject {

	id<MTLBuffer> _spriteVertexBuffer;
	id<MTLBuffer> _spriteIndexBuffer;
	unsigned long long _numIndicies;
	ARUISpriteRenderState* _spriteRenderState;
	ARUISpriteUniformsCache* _cache;

}
+(void)clearCaches;
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(id)initWithDeviceSPI:(id)arg1 librarySPI:(id)arg2 ;
-(void)renderSpriteSheet:(id)arg1 intoContext:(id)arg2 withCommandEncoder:(id)arg3 ;
-(void)_sharedInitWithDevice:(id)arg1 ;
@end
