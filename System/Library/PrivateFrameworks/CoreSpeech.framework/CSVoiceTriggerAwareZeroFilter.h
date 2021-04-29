/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CSVoiceTriggerAwareZeroFilterDelegate;
@class CSAudioZeroFilter;

@interface CSVoiceTriggerAwareZeroFilter : NSObject {

	float _sampleRate;
	id<CSVoiceTriggerAwareZeroFilterDelegate> _delegate;
	unsigned long long _vtEndInSampleCount;
	unsigned long long _numSamplesProcessed;
	CSAudioZeroFilter* _zeroFilter;

}

@property (assign,nonatomic) float sampleRate;                                                       //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) unsigned long long vtEndInSampleCount;                                  //@synthesize vtEndInSampleCount=_vtEndInSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long numSamplesProcessed;                                 //@synthesize numSamplesProcessed=_numSamplesProcessed - In the implementation block
@property (nonatomic,retain) CSAudioZeroFilter * zeroFilter;                                         //@synthesize zeroFilter=_zeroFilter - In the implementation block
@property (assign,nonatomic,__weak) id<CSVoiceTriggerAwareZeroFilterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<CSVoiceTriggerAwareZeroFilterDelegate>)delegate;
-(void)setDelegate:(id<CSVoiceTriggerAwareZeroFilterDelegate>)arg1 ;
-(void)flush;
-(id)metrics;
-(float)sampleRate;
-(void)setSampleRate:(float)arg1 ;
-(void)resetWithSampleRate:(float)arg1 containsVoiceTrigger:(BOOL)arg2 voiceTriggerInfo:(id)arg3 ;
-(CSAudioZeroFilter *)zeroFilter;
-(void)processBuffer:(id)arg1 atTime:(unsigned long long)arg2 ;
-(void)setZeroFilter:(CSAudioZeroFilter *)arg1 ;
-(unsigned long long)vtEndInSampleCount;
-(void)setVtEndInSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)numSamplesProcessed;
-(void)setNumSamplesProcessed:(unsigned long long)arg1 ;
@end

