/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicBehavior.h>

@class NSMutableArray, PKPhysicsBody;

@interface UISnapBehavior : UIDynamicBehavior {

	CGPoint _anchorPoint;
	double _damping;
	double _distance;
	double _frequency;
	struct {
		unsigned attachedToView : 1;
		unsigned dampingSet : 1;
		unsigned frequencySet : 1;
		unsigned lengthSet : 1;
	}  _stateFlags;
	NSMutableArray* _joints;
	PKPhysicsBody* _anchorBody;

}

@property (assign,nonatomic) CGPoint snapPoint; 
@property (assign,nonatomic) double damping;                 //@synthesize damping=_damping - In the implementation block
+(BOOL)_isPrimitiveBehavior;
-(id)description;
-(id)init;
-(void)setDamping:(double)arg1 ;
-(double)damping;
-(double)_distance;
-(double)_frequency;
-(id)initWithItem:(id)arg1 snapToPoint:(CGPoint)arg2 ;
-(void)_associate;
-(void)_dissociate;
-(void)_setDistance:(double)arg1 ;
-(void)_setFrequency:(double)arg1 ;
-(void)setSnapPoint:(CGPoint)arg1 ;
-(CGPoint)snapPoint;
@end

