/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ARUIRendering.h>
#import <libobjc.A.dylib/ARUIPrecompiledRendering.h>

@protocol MTLRenderPipelineState;
@class NSString;

@interface ARUISpriteParticleRenderState : NSObject <ARUIRendering, ARUIPrecompiledRendering> {

	id<MTLRenderPipelineState> _renderPipelineState;

}

@property (nonatomic,retain) id<MTLRenderPipelineState> renderPipelineState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)name;
-(void)setRenderPipelineState:(id<MTLRenderPipelineState>)arg1 ;
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(id<MTLRenderPipelineState>)renderPipelineState;
-(id)renderPipelineDescriptorFromLibrary:(id)arg1 ;
-(id)initWithPipelineLibrary:(id)arg1 ;
@end

