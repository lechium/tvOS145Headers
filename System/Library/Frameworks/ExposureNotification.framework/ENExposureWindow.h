/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CUXPCCodable.h>

@class NSDate, NSArray;

@interface ENExposureWindow : NSObject <CUXPCCodable> {

	unsigned char _calibrationConfidence;
	unsigned _diagnosisReportType;
	unsigned _infectiousness;
	NSDate* _date;
	NSArray* _scanInstances;

}

@property (assign,nonatomic) unsigned char calibrationConfidence;              //@synthesize calibrationConfidence=_calibrationConfidence - In the implementation block
@property (nonatomic,copy) NSDate * date;                                      //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned diagnosisReportType;                     //@synthesize diagnosisReportType=_diagnosisReportType - In the implementation block
@property (assign,nonatomic) unsigned infectiousness;                          //@synthesize infectiousness=_infectiousness - In the implementation block
@property (nonatomic,copy) NSArray * scanInstances;                            //@synthesize scanInstances=_scanInstances - In the implementation block
-(id)description;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithXPCObject:(id)arg1 ;
-(unsigned)diagnosisReportType;
-(void)setDiagnosisReportType:(unsigned)arg1 ;
-(unsigned char)calibrationConfidence;
-(void)setCalibrationConfidence:(unsigned char)arg1 ;
-(unsigned)infectiousness;
-(void)setInfectiousness:(unsigned)arg1 ;
-(NSArray *)scanInstances;
-(void)setScanInstances:(NSArray *)arg1 ;
@end

