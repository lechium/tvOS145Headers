/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SNTimeRangeProvidingWritable.h>
#import <libobjc.A.dylib/SNTimeRangeProviding.h>

@class NSString;

@interface SNSpeechDistanceResult : NSObject <NSCopying, NSSecureCoding, SNTimeRangeProvidingWritable, SNTimeRangeProviding> {

	double _currentFrameValue;
	double _meanValue;
	double _standardDeviation;
	SCD_Struct_SN4 _timeRange;

}

@property (assign,nonatomic) double currentFrameValue;              //@synthesize currentFrameValue=_currentFrameValue - In the implementation block
@property (assign,nonatomic) double meanValue;                      //@synthesize meanValue=_meanValue - In the implementation block
@property (assign,nonatomic) double standardDeviation;              //@synthesize standardDeviation=_standardDeviation - In the implementation block
@property (assign,nonatomic) SCD_Struct_SN4 timeRange;              //@synthesize timeRange=_timeRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)standardDeviation;
-(void)setStandardDeviation:(double)arg1 ;
-(void)setTimeRange:(SCD_Struct_SN4)arg1 ;
-(SCD_Struct_SN4)timeRange;
-(double)meanValue;
-(double)currentFrameValue;
-(void)setCurrentFrameValue:(double)arg1 ;
-(void)setMeanValue:(double)arg1 ;
-(BOOL)isEqualToSpeechDistanceResult:(id)arg1 ;
@end

