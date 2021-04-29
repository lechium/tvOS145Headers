/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface AVAudioDeviceTestResult : NSObject <NSSecureCoding> {

	long long _inputID;
	long long _outputID;
	NSData* _data;
	double _sampleRate;
	double _correlationValue;

}

@property (assign,nonatomic) long long outputID;                   //@synthesize outputID=_outputID - In the implementation block
@property (assign,nonatomic) long long inputID;                    //@synthesize inputID=_inputID - In the implementation block
@property (assign,nonatomic) double sampleRate;                    //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) double correlationValue;              //@synthesize correlationValue=_correlationValue - In the implementation block
@property (nonatomic,readonly) NSData * data;                      //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)sampleRate;
-(void)setSampleRate:(double)arg1 ;
-(long long)inputID;
-(void)setInputID:(long long)arg1 ;
-(id)initWithData:(id)arg1 inputID:(long long)arg2 outputID:(long long)arg3 sampleRate:(double)arg4 correlationValue:(double)arg5 ;
-(long long)outputID;
-(void)setOutputID:(long long)arg1 ;
-(double)correlationValue;
-(void)setCorrelationValue:(double)arg1 ;
@end

