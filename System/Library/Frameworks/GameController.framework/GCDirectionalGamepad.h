/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/GameController-Structs.h>
#import <GameController/GCMicroGamepad.h>
#import <libobjc.A.dylib/CoalescableMicroGamepad.h>
#import <libobjc.A.dylib/DigitizerValueChangedDelegate.h>
#import <libobjc.A.dylib/DirectionPadValueChangedDelegate.h>

@class GCControllerDirectionPad, NSString;

@interface GCDirectionalGamepad : GCMicroGamepad <CoalescableMicroGamepad, DigitizerValueChangedDelegate, DirectionPadValueChangedDelegate> {

	BOOL _reportsAbsoluteDpadValues;
	float _touchpadRelativeWindowSize;
	float _touchpadRelativeOriginBufferSize;
	unsigned char _directionPadButtonsState;
	long long _touchState;
	BOOL _leftBufferZone;
	BOOL _beganTouchOutsideBounds;
	float _previousButtonState;
	CGPoint _absoluteWindowLocation;
	CGPoint _absolutePosition;
	CGPoint _absoluteTouchDownPosition;
	CGPoint _relativePosition;
	GCControllerDirectionPad* _cardinalDpad;
	unsigned long long _owner;
	long long _deviceType;

}

@property (assign,nonatomic) unsigned long long owner; 
@property (assign,nonatomic) long long deviceType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) GCControllerDirectionPad * dpad; 
-(void)setOwner:(unsigned long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(long long)deviceType;
-(void)setDeviceType:(long long)arg1 ;
-(unsigned long long)owner;
-(BOOL)allowsRotation;
-(void)setAllowsRotation:(BOOL)arg1 ;
-(double)distanceBetweenCGPoint:(CGPoint)arg1 andCGPoint:(CGPoint)arg2 ;
-(CGPoint)mulCGPoint:(CGPoint)arg1 byScalar:(double)arg2 ;
-(CGPoint)normalizeCGPoint:(CGPoint)arg1 ;
-(CGPoint)scaleCGPoint:(CGPoint)arg1 toLength:(double)arg2 ;
-(CGPoint)addCGPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(double)magnitudeForCGPoint:(CGPoint)arg1 ;
-(CGPoint)subCGPoint:(CGPoint)arg1 fromPoint:(CGPoint)arg2 ;
-(CGPoint)clampPoint:(CGPoint)arg1 toLength:(double)arg2 ;
-(BOOL)determineTouchStateWithDigitizerX:(float)arg1 digitizerY:(float)arg2 touchDown:(BOOL)arg3 ;
-(BOOL)calculateRelativePositionWithDigitizerX:(float)arg1 digitizerY:(float)arg2 touchDown:(BOOL)arg3 ;
-(void)reportDigitizerChange:(id)arg1 ;
-(BOOL)ownershipClaimingElementsZero;
-(BOOL)reportsAbsoluteDpadValues;
-(void)digitizerTouchEvent:(id)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4 forceSkipDpadRotation:(BOOL)arg5 ;
-(void)digitizerTouchUp:(id)arg1 timestamp:(unsigned long long)arg2 forceSkipDpadRotation:(BOOL)arg3 ;
-(void)setReportsAbsoluteDpadValues:(BOOL)arg1 ;
-(void)reportDirectionpadChange:(id)arg1 onQueue:(id)arg2 ;
-(void)setDpad:(id)arg1 digitizerX:(double)arg2 digitizerY:(double)arg3 touchDown:(BOOL)arg4 ;
-(id)dpadDirectionEvent:(id)arg1 direction:(unsigned long long)arg2 pressed:(BOOL)arg3 ;
@end

