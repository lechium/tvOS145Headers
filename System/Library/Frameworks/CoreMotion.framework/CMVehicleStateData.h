/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CMMotionTimeRange, NSString;

@interface CMVehicleStateData : NSObject <NSSecureCoding, NSCopying> {

	CMMotionTimeRange* fTimeRange;
	NSString* fDeviceId;

}

@property (nonatomic,readonly) CMMotionTimeRange * timeRange; 
@property (nonatomic,readonly) NSString * deviceId; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CMMotionTimeRange *)timeRange;
-(NSString *)deviceId;
-(id)initWithTimeRange:(id)arg1 deviceId:(id)arg2 ;
@end

