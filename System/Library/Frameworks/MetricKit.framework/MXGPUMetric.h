/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricKit/MXMetric.h>

@class NSMeasurement;

@interface MXGPUMetric : MXMetric {

	NSMeasurement* _cumulativeGPUTime;

}

@property (readonly) NSMeasurement * cumulativeGPUTime;              //@synthesize cumulativeGPUTime=_cumulativeGPUTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithCumulativeGPUTimeMeasurement:(id)arg1 ;
-(NSMeasurement *)cumulativeGPUTime;
@end

