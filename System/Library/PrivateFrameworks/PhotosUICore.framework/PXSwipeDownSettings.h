/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PXSwipeDownSettings : PXSettings {

	BOOL _rotationOnHorizontalMotion;
	BOOL _rotationOnVerticalMotion;
	double _downGestureToleranceAngle;
	double _upGestureToleranceAngle;
	long long _horizontalMotionType;
	double _horizontalResistanceDistance;
	long long _downMotionType;
	double _downResistanceDistance;
	long long _upMotionType;
	double _upResistanceDistance;
	double _scaleDownFactor;
	double _scaleDownDistance;
	double _rotationHorizontalMotionFactor;
	double _rotationHorizontalMotionHysteresisDistance;
	double _rotationVerticalMotionAngle;
	double _rotationVerticalMotionResistanceDistance;
	double _rotationMaximumAngle;
	double _transitionDistance;

}

@property (assign,nonatomic) double downGestureToleranceAngle;                               //@synthesize downGestureToleranceAngle=_downGestureToleranceAngle - In the implementation block
@property (assign,nonatomic) double upGestureToleranceAngle;                                 //@synthesize upGestureToleranceAngle=_upGestureToleranceAngle - In the implementation block
@property (assign,nonatomic) long long horizontalMotionType;                                 //@synthesize horizontalMotionType=_horizontalMotionType - In the implementation block
@property (assign,nonatomic) double horizontalResistanceDistance;                            //@synthesize horizontalResistanceDistance=_horizontalResistanceDistance - In the implementation block
@property (assign,nonatomic) long long downMotionType;                                       //@synthesize downMotionType=_downMotionType - In the implementation block
@property (assign,nonatomic) double downResistanceDistance;                                  //@synthesize downResistanceDistance=_downResistanceDistance - In the implementation block
@property (assign,nonatomic) long long upMotionType;                                         //@synthesize upMotionType=_upMotionType - In the implementation block
@property (assign,nonatomic) double upResistanceDistance;                                    //@synthesize upResistanceDistance=_upResistanceDistance - In the implementation block
@property (assign,nonatomic) double scaleDownFactor;                                         //@synthesize scaleDownFactor=_scaleDownFactor - In the implementation block
@property (assign,nonatomic) double scaleDownDistance;                                       //@synthesize scaleDownDistance=_scaleDownDistance - In the implementation block
@property (assign,nonatomic) BOOL rotationOnHorizontalMotion;                                //@synthesize rotationOnHorizontalMotion=_rotationOnHorizontalMotion - In the implementation block
@property (assign,nonatomic) double rotationHorizontalMotionFactor;                          //@synthesize rotationHorizontalMotionFactor=_rotationHorizontalMotionFactor - In the implementation block
@property (assign,nonatomic) double rotationHorizontalMotionHysteresisDistance;              //@synthesize rotationHorizontalMotionHysteresisDistance=_rotationHorizontalMotionHysteresisDistance - In the implementation block
@property (assign,nonatomic) BOOL rotationOnVerticalMotion;                                  //@synthesize rotationOnVerticalMotion=_rotationOnVerticalMotion - In the implementation block
@property (assign,nonatomic) double rotationVerticalMotionAngle;                             //@synthesize rotationVerticalMotionAngle=_rotationVerticalMotionAngle - In the implementation block
@property (assign,nonatomic) double rotationVerticalMotionResistanceDistance;                //@synthesize rotationVerticalMotionResistanceDistance=_rotationVerticalMotionResistanceDistance - In the implementation block
@property (assign,nonatomic) double rotationMaximumAngle;                                    //@synthesize rotationMaximumAngle=_rotationMaximumAngle - In the implementation block
@property (assign,nonatomic) double transitionDistance;                                      //@synthesize transitionDistance=_transitionDistance - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(id)parentSettings;
-(double)downGestureToleranceAngle;
-(void)setDownGestureToleranceAngle:(double)arg1 ;
-(double)upGestureToleranceAngle;
-(void)setUpGestureToleranceAngle:(double)arg1 ;
-(long long)horizontalMotionType;
-(void)setHorizontalMotionType:(long long)arg1 ;
-(double)horizontalResistanceDistance;
-(void)setHorizontalResistanceDistance:(double)arg1 ;
-(long long)downMotionType;
-(void)setDownMotionType:(long long)arg1 ;
-(double)downResistanceDistance;
-(void)setDownResistanceDistance:(double)arg1 ;
-(long long)upMotionType;
-(void)setUpMotionType:(long long)arg1 ;
-(double)upResistanceDistance;
-(void)setUpResistanceDistance:(double)arg1 ;
-(double)scaleDownFactor;
-(void)setScaleDownFactor:(double)arg1 ;
-(double)scaleDownDistance;
-(void)setScaleDownDistance:(double)arg1 ;
-(BOOL)rotationOnHorizontalMotion;
-(void)setRotationOnHorizontalMotion:(BOOL)arg1 ;
-(double)rotationHorizontalMotionFactor;
-(void)setRotationHorizontalMotionFactor:(double)arg1 ;
-(double)rotationHorizontalMotionHysteresisDistance;
-(void)setRotationHorizontalMotionHysteresisDistance:(double)arg1 ;
-(BOOL)rotationOnVerticalMotion;
-(void)setRotationOnVerticalMotion:(BOOL)arg1 ;
-(double)rotationVerticalMotionAngle;
-(void)setRotationVerticalMotionAngle:(double)arg1 ;
-(double)rotationVerticalMotionResistanceDistance;
-(void)setRotationVerticalMotionResistanceDistance:(double)arg1 ;
-(double)rotationMaximumAngle;
-(void)setRotationMaximumAngle:(double)arg1 ;
-(double)transitionDistance;
-(void)setTransitionDistance:(double)arg1 ;
@end
