/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString;

@interface CADistanceFieldLayer : CALayer

@property (copy) NSString * renderMode; 
@property (assign) BOOL invertsShape; 
@property (assign) CGColorRef foregroundColor; 
@property (assign) double offset; 
@property (assign) double sharpness; 
@property (assign) double lineWidth; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(double)offset;
-(void)setOffset:(double)arg1 ;
-(NSString *)renderMode;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)_colorSpaceDidChange;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(void)setRenderMode:(NSString *)arg1 ;
-(CGColorRef)foregroundColor;
-(void)setForegroundColor:(CGColorRef)arg1 ;
-(unsigned)_renderImageCopyFlags;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(BOOL)invertsShape;
-(double)sharpness;
-(void)setInvertsShape:(BOOL)arg1 ;
-(void)setSharpness:(double)arg1 ;
@end

