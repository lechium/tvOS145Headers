/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class HKQuantityType, NSDate, HKDevice;

@interface HKQuantitySeriesSampleBuilderTaskServerConfiguration : HKTaskConfiguration {

	HKQuantityType* _quantityType;
	NSDate* _startDate;
	HKDevice* _device;

}

@property (nonatomic,copy) HKQuantityType * quantityType;              //@synthesize quantityType=_quantityType - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) HKDevice * device;                          //@synthesize device=_device - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(HKDevice *)device;
-(void)setDevice:(HKDevice *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(HKQuantityType *)quantityType;
-(void)setQuantityType:(HKQuantityType *)arg1 ;
-(id)initWithQuantityType:(id)arg1 startDate:(id)arg2 device:(id)arg3 ;
@end
