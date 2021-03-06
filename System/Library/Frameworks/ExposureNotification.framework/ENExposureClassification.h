/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, ENRegion, NSNumber;

@interface ENExposureClassification : NSObject <NSSecureCoding> {

	unsigned char _index;
	NSString* _name;
	NSDate* _date;
	ENRegion* _region;
	NSNumber* _confirmedTestPerDaySumERVAboveThreshold;
	NSNumber* _clinicalDiagnosisPerDaySumERVAboveThreshold;
	NSNumber* _selfReportPerDaySumERVAboveThreshold;
	NSNumber* _recursivePerDaySumERVAboveThreshold;
	NSNumber* _perDayMaxERVAboveThreshold;
	NSNumber* _perDaySumERVAboveThreshold;
	NSNumber* _weightedDurationAtAttenuationAboveThreshold;

}

@property (nonatomic,copy) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDate * date;                                                       //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned char index;                                               //@synthesize index=_index - In the implementation block
@property (nonatomic,copy) ENRegion * region;                                                   //@synthesize region=_region - In the implementation block
@property (nonatomic,copy) NSNumber * confirmedTestPerDaySumERVAboveThreshold;                  //@synthesize confirmedTestPerDaySumERVAboveThreshold=_confirmedTestPerDaySumERVAboveThreshold - In the implementation block
@property (nonatomic,copy) NSNumber * clinicalDiagnosisPerDaySumERVAboveThreshold;              //@synthesize clinicalDiagnosisPerDaySumERVAboveThreshold=_clinicalDiagnosisPerDaySumERVAboveThreshold - In the implementation block
@property (nonatomic,copy) NSNumber * selfReportPerDaySumERVAboveThreshold;                     //@synthesize selfReportPerDaySumERVAboveThreshold=_selfReportPerDaySumERVAboveThreshold - In the implementation block
@property (nonatomic,copy) NSNumber * recursivePerDaySumERVAboveThreshold;                      //@synthesize recursivePerDaySumERVAboveThreshold=_recursivePerDaySumERVAboveThreshold - In the implementation block
@property (nonatomic,copy) NSNumber * perDayMaxERVAboveThreshold;                               //@synthesize perDayMaxERVAboveThreshold=_perDayMaxERVAboveThreshold - In the implementation block
@property (nonatomic,copy) NSNumber * perDaySumERVAboveThreshold;                               //@synthesize perDaySumERVAboveThreshold=_perDaySumERVAboveThreshold - In the implementation block
@property (nonatomic,copy) NSNumber * weightedDurationAtAttenuationAboveThreshold;              //@synthesize weightedDurationAtAttenuationAboveThreshold=_weightedDurationAtAttenuationAboveThreshold - In the implementation block
@property (nonatomic,readonly) BOOL anyThresholdsExceeded; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(void)setName:(NSString *)arg1 ;
-(unsigned char)index;
-(void)setIndex:(unsigned char)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(ENRegion *)region;
-(void)setRegion:(ENRegion *)arg1 ;
-(BOOL)anyThresholdsExceeded;
-(NSNumber *)confirmedTestPerDaySumERVAboveThreshold;
-(void)setConfirmedTestPerDaySumERVAboveThreshold:(NSNumber *)arg1 ;
-(NSNumber *)clinicalDiagnosisPerDaySumERVAboveThreshold;
-(void)setClinicalDiagnosisPerDaySumERVAboveThreshold:(NSNumber *)arg1 ;
-(NSNumber *)selfReportPerDaySumERVAboveThreshold;
-(void)setSelfReportPerDaySumERVAboveThreshold:(NSNumber *)arg1 ;
-(NSNumber *)recursivePerDaySumERVAboveThreshold;
-(void)setRecursivePerDaySumERVAboveThreshold:(NSNumber *)arg1 ;
-(NSNumber *)perDayMaxERVAboveThreshold;
-(void)setPerDayMaxERVAboveThreshold:(NSNumber *)arg1 ;
-(NSNumber *)perDaySumERVAboveThreshold;
-(void)setPerDaySumERVAboveThreshold:(NSNumber *)arg1 ;
-(NSNumber *)weightedDurationAtAttenuationAboveThreshold;
-(void)setWeightedDurationAtAttenuationAboveThreshold:(NSNumber *)arg1 ;
@end

