/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _GCMotionEvent <NSCopying,NSObject>
@property (readonly) BOOL hasGyro; 
@property (readonly) double gyroPitch; 
@property (readonly) double gyroYaw; 
@property (readonly) double gyroRoll; 
@property (readonly) BOOL hasAccelerometer; 
@property (readonly) double accelerometerX; 
@property (readonly) double accelerometerY; 
@property (readonly) double accelerometerZ; 
@property (readonly) BOOL hasAttitude; 
@property (readonly) double attitudeW; 
@property (readonly) double attitudeX; 
@property (readonly) double attitudeY; 
@property (readonly) double attitudeZ; 
@required
-(BOOL)hasAttitude;
-(BOOL)hasGyro;
-(double)gyroPitch;
-(double)gyroYaw;
-(double)gyroRoll;
-(BOOL)hasAccelerometer;
-(double)accelerometerX;
-(double)accelerometerY;
-(double)accelerometerZ;
-(double)attitudeW;
-(double)attitudeX;
-(double)attitudeY;
-(double)attitudeZ;

@end

