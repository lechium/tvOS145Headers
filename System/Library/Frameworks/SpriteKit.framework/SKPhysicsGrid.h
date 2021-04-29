/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SpriteKit/SpriteKit-Structs.h>
@interface SKPhysicsGrid : NSObject {

	float _width;
	float _height;

}

@property (nonatomic,readonly) float width;               //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) float height;              //@synthesize height=_height - In the implementation block
+(id)vectorGridFromTexture:(id)arg1 accuracy:(float)arg2 ;
+(id)gridFromTexture:(id)arg1 alphaThreshold:(float)arg2 accuracy:(float)arg3 ;
+(id)gridFromOccupancyArray:(const char*)arg1 width:(int)arg2 height:(int)arg3 ;
-(float)width;
-(float)height;
-(void)spritesFromGrid:(id)arg1 gridSize:(CGSize)arg2 zPosition:(double)arg3 edgeColor:(id)arg4 interiorColor:(id)arg5 spriteSize:(CGSize)arg6 physicsBody:(id)arg7 ;
-(void)spritesFromGrid:(id)arg1 xDivisions:(int)arg2 zPosition:(double)arg3 spriteSize:(CGSize)arg4 texture:(id)arg5 physicsBody:(id)arg6 ;
@end

