/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Speech.framework/Speech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Speech/Speech-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SFVoiceAnalytics;

@interface SFSpeechRecognitionMetadata : NSObject <NSCopying, NSSecureCoding> {

	double _speakingRate;
	double _averagePauseDuration;
	double _speechStartTimestamp;
	double _speechDuration;
	SFVoiceAnalytics* _voiceAnalytics;

}

@property (nonatomic,readonly) double speakingRate;                            //@synthesize speakingRate=_speakingRate - In the implementation block
@property (nonatomic,readonly) double averagePauseDuration;                    //@synthesize averagePauseDuration=_averagePauseDuration - In the implementation block
@property (nonatomic,readonly) double speechStartTimestamp;                    //@synthesize speechStartTimestamp=_speechStartTimestamp - In the implementation block
@property (nonatomic,readonly) double speechDuration;                          //@synthesize speechDuration=_speechDuration - In the implementation block
@property (nonatomic,readonly) SFVoiceAnalytics * voiceAnalytics;              //@synthesize voiceAnalytics=_voiceAnalytics - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)speechDuration;
-(double)speakingRate;
-(id)_initWithSpeechStartTimestamp:(double)arg1 speechDuration:(double)arg2 voiceAnalytics:(id)arg3 speakingRate:(double)arg4 averagePauseDuration:(double)arg5 ;
-(SFVoiceAnalytics *)voiceAnalytics;
-(double)averagePauseDuration;
-(double)speechStartTimestamp;
@end

