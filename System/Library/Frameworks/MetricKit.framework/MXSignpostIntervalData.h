/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MXHistogram, NSMeasurement, MXAverage, NSMeasurementFormatter;

@interface MXSignpostIntervalData : NSObject <NSSecureCoding> {

	MXHistogram* _histogrammedSignpostDuration;
	NSMeasurement* _cumulativeCPUTime;
	MXAverage* _averageMemory;
	NSMeasurement* _cumulativeLogicalWrites;
	NSMeasurementFormatter* _measurementFormatter;
	NSMeasurement* _peakMemory;

}

@property (retain) NSMeasurementFormatter * measurementFormatter;              //@synthesize measurementFormatter=_measurementFormatter - In the implementation block
@property (readonly) NSMeasurement * peakMemory;                               //@synthesize peakMemory=_peakMemory - In the implementation block
@property (readonly) MXHistogram * histogrammedSignpostDuration;               //@synthesize histogrammedSignpostDuration=_histogrammedSignpostDuration - In the implementation block
@property (readonly) NSMeasurement * cumulativeCPUTime;                        //@synthesize cumulativeCPUTime=_cumulativeCPUTime - In the implementation block
@property (readonly) MXAverage * averageMemory;                                //@synthesize averageMemory=_averageMemory - In the implementation block
@property (readonly) NSMeasurement * cumulativeLogicalWrites;                  //@synthesize cumulativeLogicalWrites=_cumulativeLogicalWrites - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(NSMeasurementFormatter *)measurementFormatter;
-(NSMeasurement *)cumulativeLogicalWrites;
-(id)initWithHistogramDurationData:(id)arg1 withCumulativeCPUTime:(id)arg2 withAverageMemory:(id)arg3 withCumulativeLogicalWrites:(id)arg4 ;
-(id)initWithHistogramDurationData:(id)arg1 withCumulativeCPUTime:(id)arg2 withPeakMemory:(id)arg3 withAverageMemory:(id)arg4 withCumulativeLogicalWrites:(id)arg5 ;
-(MXHistogram *)histogrammedSignpostDuration;
-(NSMeasurement *)cumulativeCPUTime;
-(MXAverage *)averageMemory;
-(void)setMeasurementFormatter:(NSMeasurementFormatter *)arg1 ;
-(NSMeasurement *)peakMemory;
@end

