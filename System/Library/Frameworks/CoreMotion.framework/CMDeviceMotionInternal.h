/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CMAttitude;

@interface CMDeviceMotionInternal : NSObject <NSCopying> {

	SCD_Struct_CM9 fGravity;
	SCD_Struct_CM9 fUserAcceleration;
	SCD_Struct_CM9 fRotationRate;
	CMAttitude* fAttitude;
	SCD_Struct_CM9 fMagneticField;
	int fMagneticFieldCalibrationLevel;
	BOOL fDoingYawCorrection;
	BOOL fDoingBiasEstimation;
	float fHeading;
	float fHeadingAccuracy;
	long long fSensorLocation;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setDeviceMotion:(SCD_Struct_CM11)arg1 internal:(SCD_Struct_CM12)arg2 ;
-(id)initWithDeviceMotion:(SCD_Struct_CM11)arg1 internal:(SCD_Struct_CM12)arg2 ;
@end

