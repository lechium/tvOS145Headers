/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ExposureNotification/ExposureNotification-Structs.h>
#import <libobjc.A.dylib/CUXPCCodable.h>

@class NSData;

@interface ENTemporaryExposureKey : NSObject <CUXPCCodable> {

	unsigned char _transmissionRiskLevel;
	unsigned _rollingPeriod;
	unsigned _rollingStartNumber;
	unsigned _diagnosisReportType;
	NSData* _keyData;
	long long _daysSinceOnsetOfSymptoms;

}

@property (assign,nonatomic) long long daysSinceOnsetOfSymptoms;               //@synthesize daysSinceOnsetOfSymptoms=_daysSinceOnsetOfSymptoms - In the implementation block
@property (assign,nonatomic) unsigned diagnosisReportType;                     //@synthesize diagnosisReportType=_diagnosisReportType - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,copy) NSData * keyData;                                   //@synthesize keyData=_keyData - In the implementation block
@property (assign,nonatomic) unsigned rollingPeriod;                           //@synthesize rollingPeriod=_rollingPeriod - In the implementation block
@property (assign,nonatomic) unsigned rollingStartNumber;                      //@synthesize rollingStartNumber=_rollingStartNumber - In the implementation block
@property (assign,nonatomic) unsigned char transmissionRiskLevel;              //@synthesize transmissionRiskLevel=_transmissionRiskLevel - In the implementation block
-(id)description;
-(id)init;
-(BOOL)isValid;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithXPCObject:(id)arg1 ;
-(NSData *)keyData;
-(void)setKeyData:(NSData *)arg1 ;
-(unsigned)rollingStartNumber;
-(unsigned char)transmissionRiskLevel;
-(unsigned)rollingPeriod;
-(long long)daysSinceOnsetOfSymptoms;
-(unsigned)diagnosisReportType;
-(void)deriveRollingProximityIdentifiersWithBuffer:(SCD_Struct_EN0*)arg1 count:(unsigned long long)arg2 ;
-(void)getAEMBytes:(void*)arg1 input:(const void*)arg2 length:(unsigned long long)arg3 RPI:(const SCD_Struct_EN0*)arg4 ;
-(void)setRollingPeriod:(unsigned)arg1 ;
-(void)setRollingStartNumber:(unsigned)arg1 ;
-(void)setTransmissionRiskLevel:(unsigned char)arg1 ;
-(void)setDaysSinceOnsetOfSymptoms:(long long)arg1 ;
-(void)setDiagnosisReportType:(unsigned)arg1 ;
@end

