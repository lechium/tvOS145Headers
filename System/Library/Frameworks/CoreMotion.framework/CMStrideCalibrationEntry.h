/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CMStrideCalibrationEntry : NSObject <NSSecureCoding, NSCopying> {

	SCD_Struct_CM53 _strideCalStruct;

}

@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) double endTime; 
@property (nonatomic,readonly) double distance; 
@property (nonatomic,readonly) int steps; 
@property (nonatomic,readonly) double speed; 
@property (nonatomic,readonly) double percentGrade; 
@property (nonatomic,readonly) long long gpsSource; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)session;
-(double)startTime;
-(double)score;
-(double)speed;
-(double)distance;
-(unsigned)pacebin;
-(double)kvalue;
-(double)kvalueTrack;
-(double)endTime;
-(int)steps;
-(double)percentGrade;
-(long long)gpsSource;
-(id)initWithCLStrideCalEntry:(SCD_Struct_CM53)arg1 ;
@end

