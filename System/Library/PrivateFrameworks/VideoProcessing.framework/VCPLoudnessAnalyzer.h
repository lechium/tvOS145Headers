/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@class AVAudioPCMBuffer, NSMutableArray;

@interface VCPLoudnessAnalyzer : NSObject {

	AVAudioPCMBuffer* _pcmBuffer;
	long long _framePosition;
	LkFsMeasure* _loudnessAnalyzer;
	CAStreamBasicDescription* _processFormat;
	float _sampleRate;
	vector<double, std::__1::allocator<double>>* _peakValues;
	vector<double, std::__1::allocator<double>>* _momentaryEnergyValues;
	vector<float, std::__1::allocator<float>>* _loudnessSampleBuffer;
	NSMutableArray* _loudnessResults;
	unsigned _samplesFor100ms;
	AUOutputBL* _samplesForProcessingBufferList;

}
-(id)init;
-(void)dealloc;
-(id)results;
-(int)setupWithSample:(opaqueCMSampleBufferRef)arg1 andSampleBatchSize:(int)arg2 ;
-(int)processAudioSamples:(AudioBufferList*)arg1 timestamp:(AudioTimeStamp)arg2 ;
-(int)finalizeAnalysisAtTime:(const SCD_Struct_VC6*)arg1 ;
@end

