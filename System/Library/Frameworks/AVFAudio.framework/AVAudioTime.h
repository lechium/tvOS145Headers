/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFAudio/AVFAudio-Structs.h>
@interface AVAudioTime : NSObject {

	AudioTimeStamp _ats;
	double _sampleRate;
	void* _reserved;

}

@property (getter=isHostTimeValid,nonatomic,readonly) BOOL hostTimeValid; 
@property (nonatomic,readonly) unsigned long long hostTime; 
@property (getter=isSampleTimeValid,nonatomic,readonly) BOOL sampleTimeValid; 
@property (nonatomic,readonly) long long sampleTime; 
@property (nonatomic,readonly) double sampleRate; 
@property (nonatomic,readonly) AudioTimeStamp audioTimeStamp; 
+(double)secondsForHostTime:(unsigned long long)arg1 ;
+(id)timeWithAudioTimeStamp:(const AudioTimeStamp*)arg1 sampleRate:(double)arg2 ;
+(id)timeWithHostTime:(unsigned long long)arg1 ;
+(id)timeWithSampleTime:(long long)arg1 atRate:(double)arg2 ;
+(id)timeWithHostTime:(unsigned long long)arg1 sampleTime:(long long)arg2 atRate:(double)arg3 ;
+(unsigned long long)hostTimeForSeconds:(double)arg1 ;
-(id)description;
-(id)init;
-(double)sampleRate;
-(id)initWithHostTime:(unsigned long long)arg1 ;
-(unsigned long long)hostTime;
-(long long)sampleTime;
-(id)initWithSampleTime:(long long)arg1 atRate:(double)arg2 ;
-(id)initWithHostTime:(unsigned long long)arg1 sampleTime:(long long)arg2 atRate:(double)arg3 ;
-(BOOL)isHostTimeValid;
-(BOOL)isSampleTimeValid;
-(id)extrapolateTimeFromAnchor:(id)arg1 ;
-(id)initWithAudioTimeStamp:(const AudioTimeStamp*)arg1 sampleRate:(double)arg2 ;
-(AudioTimeStamp)audioTimeStamp;
@end

