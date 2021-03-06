/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEOComposedRouteEVStepInfo : NSObject <NSSecureCoding> {

	unsigned _remainingBatteryPercentage;
	unsigned _remainingBatteryCharge;
	double _remainingTravelRange;

}

@property (nonatomic,readonly) unsigned remainingBatteryCharge;                  //@synthesize remainingBatteryCharge=_remainingBatteryCharge - In the implementation block
@property (nonatomic,readonly) unsigned remainingBatteryPercentage;              //@synthesize remainingBatteryPercentage=_remainingBatteryPercentage - In the implementation block
@property (nonatomic,readonly) double remainingTravelRange;                      //@synthesize remainingTravelRange=_remainingTravelRange - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithEVStateInfo:(id)arg1 ;
-(id)initWithGeoStep:(id)arg1 ;
-(unsigned)remainingBatteryPercentage;
-(unsigned)remainingBatteryCharge;
-(double)remainingTravelRange;
-(id)initWithGeoETAStep:(id)arg1 ;
@end

