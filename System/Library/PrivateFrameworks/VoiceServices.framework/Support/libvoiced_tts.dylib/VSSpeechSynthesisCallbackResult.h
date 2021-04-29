/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
@class NSError, NSString, NSMutableArray;

@interface VSSpeechSynthesisCallbackResult : NSObject {

	vector<unsigned char, std::__1::allocator<unsigned char>> _samples;
	vector<TTSSynthesizer::Marker, std::__1::allocator<TTSSynthesizer::Marker>>* _markers;
	BOOL _neuralDidFallback;
	BOOL _hasAlignmentStall;
	BOOL _hasAudioClick;
	long long _state;
	NSError* _error;
	NSString* _text;
	long long _stopMark;
	/*^block*/id _callback;
	NSMutableArray* _wordTimings;
	unsigned long long _samplesProcessed;
	unsigned long long _lastUTF8Offset;
	unsigned long long _lastUTF16Offset;
	unsigned long long _numOfPromptsTriggered;
	AudioStreamBasicDescription _asbd;

}

@property (nonatomic,retain) NSString * text;                                       //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long stopMark;                                    //@synthesize stopMark=_stopMark - In the implementation block
@property (nonatomic,copy) id callback;                                             //@synthesize callback=_callback - In the implementation block
@property (assign,nonatomic) long long state;                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSMutableArray * wordTimings;                          //@synthesize wordTimings=_wordTimings - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription asbd;                      //@synthesize asbd=_asbd - In the implementation block
@property (assign,nonatomic) unsigned long long samplesProcessed;                   //@synthesize samplesProcessed=_samplesProcessed - In the implementation block
@property (assign,nonatomic) unsigned long long lastUTF8Offset;                     //@synthesize lastUTF8Offset=_lastUTF8Offset - In the implementation block
@property (assign,nonatomic) unsigned long long lastUTF16Offset;                    //@synthesize lastUTF16Offset=_lastUTF16Offset - In the implementation block
@property (assign,nonatomic) unsigned long long numOfPromptsTriggered;              //@synthesize numOfPromptsTriggered=_numOfPromptsTriggered - In the implementation block
@property (assign,nonatomic) BOOL neuralDidFallback;                                //@synthesize neuralDidFallback=_neuralDidFallback - In the implementation block
@property (assign,nonatomic) BOOL hasAlignmentStall;                                //@synthesize hasAlignmentStall=_hasAlignmentStall - In the implementation block
@property (assign,nonatomic) BOOL hasAudioClick;                                    //@synthesize hasAudioClick=_hasAudioClick - In the implementation block
-(NSError *)error;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(id)initWithCallback:(/*^block*/id)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(vector<unsigned char, std::__1::allocator<unsigned char>>*)sampleBuffer;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSMutableArray *)wordTimings;
-(void)setWordTimings:(NSMutableArray *)arg1 ;
-(AudioStreamBasicDescription)asbd;
-(void)setAsbd:(AudioStreamBasicDescription)arg1 ;
-(id)phonemes;
-(id)pcmData;
-(int)synthesisCallback:(int)arg1 ;
-(id)mutablePCMData;
-(BOOL)neuralDidFallback;
-(BOOL)hasAudioClick;
-(unsigned long long)numOfPromptsTriggered;
-(id)wordTimingInfos;
-(BOOL)hasAlignmentStall;
-(void)processMarkerBuffer;
-(unsigned long long)utf8BytesForChar:(unsigned short)arg1 ;
-(unsigned long long)utf16OffsetFromUTF8:(unsigned long long)arg1 ;
-(vector<TTSSynthesizer::Marker, std::__1::allocator<TTSSynthesizer::Marker>>*)markerBuffer;
-(long long)stopMark;
-(void)setStopMark:(long long)arg1 ;
-(unsigned long long)samplesProcessed;
-(void)setSamplesProcessed:(unsigned long long)arg1 ;
-(unsigned long long)lastUTF8Offset;
-(void)setLastUTF8Offset:(unsigned long long)arg1 ;
-(unsigned long long)lastUTF16Offset;
-(void)setLastUTF16Offset:(unsigned long long)arg1 ;
-(void)setNumOfPromptsTriggered:(unsigned long long)arg1 ;
-(void)setNeuralDidFallback:(BOOL)arg1 ;
-(void)setHasAlignmentStall:(BOOL)arg1 ;
-(void)setHasAudioClick:(BOOL)arg1 ;
@end

