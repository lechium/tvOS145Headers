/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@interface SKMove : SKAction {

	SKCMove* _mycaction;

}
+(BOOL)supportsSecureCoding;
+(id)moveBy:(CGPoint)arg1 duration:(double)arg2 ;
+(id)moveTo:(CGPoint)arg1 duration:(double)arg2 ;
+(id)moveByX:(double)arg1 y:(double)arg2 duration:(double)arg3 ;
+(id)moveToX:(double)arg1 duration:(double)arg2 ;
+(id)moveToY:(double)arg1 duration:(double)arg2 ;
+(id)moveToX:(double)arg1 y:(double)arg2 duration:(double)arg3 ;
+(id)moveByX:(double)arg1 duration:(double)arg2 ;
+(id)moveByY:(double)arg1 duration:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)reversedAction;
@end

