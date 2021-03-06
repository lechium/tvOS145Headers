/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFAudio/AVFAudio-Structs.h>
@class NSString, NSArray, AVAudioFormat, NSData;

@interface AVAudioConverter : NSObject {

	void* _impl;

}

@property (assign,nonatomic) long long bitRate; 
@property (nonatomic,retain) NSString * bitRateStrategy; 
@property (nonatomic,readonly) long long maximumOutputPacketSize; 
@property (nonatomic,readonly) NSArray * availableEncodeBitRates; 
@property (nonatomic,readonly) NSArray * applicableEncodeBitRates; 
@property (nonatomic,readonly) NSArray * availableEncodeSampleRates; 
@property (nonatomic,readonly) NSArray * applicableEncodeSampleRates; 
@property (nonatomic,readonly) NSArray * availableEncodeChannelLayoutTags; 
@property (nonatomic,readonly) AVAudioFormat * inputFormat; 
@property (nonatomic,readonly) AVAudioFormat * outputFormat; 
@property (nonatomic,retain) NSArray * channelMap; 
@property (nonatomic,retain) NSData * magicCookie; 
@property (assign,nonatomic) BOOL downmix; 
@property (assign,nonatomic) BOOL dither; 
@property (assign,nonatomic) long long sampleRateConverterQuality; 
@property (nonatomic,retain) NSString * sampleRateConverterAlgorithm; 
@property (assign,nonatomic) long long primeMethod; 
@property (assign,nonatomic) AVAudioConverterPrimeInfo primeInfo; 
-(void)dealloc;
-(AVAudioFormat *)outputFormat;
-(void)reset;
-(BOOL)dither;
-(void)setDither:(BOOL)arg1 ;
-(long long)convertToBuffer:(id)arg1 error:(id*)arg2 withInputFromBlock:(/*^block*/id)arg3 ;
-(id)initFromFormat:(id)arg1 toFormat:(id)arg2 ;
-(long long)maximumOutputPacketSize;
-(long long)bitRate;
-(void)setBitRate:(long long)arg1 ;
-(AVAudioFormat *)inputFormat;
-(NSArray *)channelMap;
-(BOOL)convertToBuffer:(id)arg1 fromBuffer:(id)arg2 error:(id*)arg3 ;
-(BOOL)downmix;
-(void)setDownmix:(BOOL)arg1 ;
-(long long)sampleRateConverterQuality;
-(void)setSampleRateConverterQuality:(long long)arg1 ;
-(NSString *)sampleRateConverterAlgorithm;
-(void)setSampleRateConverterAlgorithm:(NSString *)arg1 ;
-(NSData *)magicCookie;
-(void)setMagicCookie:(NSData *)arg1 ;
-(void)setChannelMap:(NSArray *)arg1 ;
-(long long)primeMethod;
-(void)setPrimeMethod:(long long)arg1 ;
-(AVAudioConverterPrimeInfo)primeInfo;
-(void)setPrimeInfo:(AVAudioConverterPrimeInfo)arg1 ;
-(NSString *)bitRateStrategy;
-(void)setBitRateStrategy:(NSString *)arg1 ;
-(NSArray *)availableEncodeBitRates;
-(NSArray *)applicableEncodeBitRates;
-(NSArray *)availableEncodeSampleRates;
-(NSArray *)applicableEncodeSampleRates;
-(NSArray *)availableEncodeChannelLayoutTags;
@end

