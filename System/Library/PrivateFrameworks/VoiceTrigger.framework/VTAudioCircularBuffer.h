/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <VoiceTrigger/VoiceTrigger-Structs.h>
@class NSObject;

@interface VTAudioCircularBuffer : NSObject {

	unique_ptr<voicetrigger::VTAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<voicetrigger::VTAudioCircularBufferImpl<unsigned short>>>* _vtAudioCircularBufferImpl;
	unsigned long long _bufferLength;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned long long bufferLength;              //@synthesize bufferLength=_bufferLength - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)reset;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)sampleCount;
-(id)copySamplesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 withNumSamplesCopiedIn:(unsigned long long*)arg3 ;
-(id)initWithNumChannels:(unsigned long long)arg1 recordingDuration:(unsigned long long)arg2 samplingRate:(unsigned long long)arg3 ;
-(void)addSamples:(void*)arg1 numSamples:(unsigned long long)arg2 ;
-(id)copyBufferWithNumSamplesCopiedIn:(unsigned long long*)arg1 ;
-(void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3 ;
-(unsigned long long)bufferLength;
-(void)setBufferLength:(unsigned long long)arg1 ;
@end

