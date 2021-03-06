/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:52 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNRenderer.h>

@interface SCNOffscreenRenderer : SCNRenderer

@property (nonatomic,readonly) unsigned textureID; 
@property (assign,nonatomic) unsigned long long antialiasingMode; 
@property (assign,nonatomic) CGSize size; 
+(id)offscreenRendererWithDevice:(id)arg1 size:(CGSize)arg2 ;
+(id)offscreenRendererWithContext:(id)arg1 size:(CGSize)arg2 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(id)snapshot;
-(unsigned long long)antialiasingMode;
-(unsigned)textureID;
-(void)setAntialiasingMode:(unsigned long long)arg1 ;
@end

