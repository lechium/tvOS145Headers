/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SoundAnalysis/SoundAnalysis-Structs.h>
#import <libobjc.A.dylib/SNTimeConversionDictionaryProviding.h>
#import <libobjc.A.dylib/SNTimeRangeProvidingWritable.h>
#import <libobjc.A.dylib/SNTimeRangeProviding.h>

@class NSDictionary, NSString;

@interface SNAudioCorrelationResult : NSObject <SNTimeConversionDictionaryProviding, SNTimeRangeProvidingWritable, SNTimeRangeProviding> {

	double _peakValue;
	long long _channelIndex;
	SCD_Struct_SN3 _peakTime;
	SCD_Struct_SN4 timeRange;

}

@property (assign,nonatomic) double peakValue;                             //@synthesize peakValue=_peakValue - In the implementation block
@property (assign,nonatomic) SCD_Struct_SN3 peakTime;                      //@synthesize peakTime=_peakTime - In the implementation block
@property (assign,nonatomic) long long channelIndex;                       //@synthesize channelIndex=_channelIndex - In the implementation block
@property (readonly) NSDictionary * timeConversionDictionary; 
@property (assign,nonatomic) SCD_Struct_SN4 timeRange; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTimeRange:(SCD_Struct_SN4)arg1 ;
-(SCD_Struct_SN4)timeRange;
-(double)peakValue;
-(void)setPeakValue:(double)arg1 ;
-(void)setChannelIndex:(long long)arg1 ;
-(void)setPeakTime:(SCD_Struct_SN3)arg1 ;
-(NSDictionary *)timeConversionDictionary;
-(SCD_Struct_SN3)peakTime;
-(long long)channelIndex;
@end

