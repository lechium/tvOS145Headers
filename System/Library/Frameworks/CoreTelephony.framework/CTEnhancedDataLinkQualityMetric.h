/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <CoreTelephony/CTEnhancedLinkQualityMetric.h>

@interface CTEnhancedDataLinkQualityMetric : CTEnhancedLinkQualityMetric {

	long long _metricType;

}

@property (assign,nonatomic) long long metricType;              //@synthesize metricType=_metricType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)metricType;
-(void)setMetricType:(long long)arg1 ;
-(id)initWithType:(long long)arg1 enhancedLinkQuality:(id)arg2 ;
@end

