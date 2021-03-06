/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLCommandBuffer, MTLRenderCommandEncoder;
#import <RenderBox/RenderBox-Structs.h>
@class MTLRenderPassDescriptor;

@interface RBMetalRenderState : NSObject {

	unsigned _flags;
	int _blendMode;
	float _alpha;
	id<MTLCommandBuffer> _commandBuffer;
	MTLRenderPassDescriptor* _descriptor;
	unsigned long long _formatKey;
	id<MTLRenderCommandEncoder> _encoder;
	CGSize _size;
	SCD_Struct_RB64 _bounds;
	CGAffineTransform _CTM;

}

@property (assign,nonatomic) unsigned flags;                                    //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) int blendMode;                                     //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) float alpha;                                       //@synthesize alpha=_alpha - In the implementation block
@property (nonatomic,retain) id<MTLCommandBuffer> commandBuffer;                //@synthesize commandBuffer=_commandBuffer - In the implementation block
@property (nonatomic,retain) MTLRenderPassDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (assign,nonatomic) unsigned long long formatKey;                      //@synthesize formatKey=_formatKey - In the implementation block
@property (nonatomic,retain) id<MTLRenderCommandEncoder> encoder;               //@synthesize encoder=_encoder - In the implementation block
@property (assign,nonatomic) CGSize size;                                       //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) SCD_Struct_RB64 bounds;                            //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) CGAffineTransform CTM;                             //@synthesize CTM=_CTM - In the implementation block
-(void)dealloc;
-(unsigned)flags;
-(CGSize)size;
-(MTLRenderPassDescriptor *)descriptor;
-(id<MTLCommandBuffer>)commandBuffer;
-(void)setSize:(CGSize)arg1 ;
-(float)alpha;
-(void)setFlags:(unsigned)arg1 ;
-(SCD_Struct_RB64)bounds;
-(void)setDescriptor:(MTLRenderPassDescriptor *)arg1 ;
-(void)setBounds:(SCD_Struct_RB64)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(CGAffineTransform)CTM;
-(void)setCTM:(CGAffineTransform)arg1 ;
-(void)setCommandBuffer:(id<MTLCommandBuffer>)arg1 ;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(void)setEncoder:(id<MTLRenderCommandEncoder>)arg1 ;
-(id<MTLRenderCommandEncoder>)encoder;
-(void)setFormatKey:(unsigned long long)arg1 ;
-(unsigned long long)formatKey;
@end

