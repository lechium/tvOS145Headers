//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;
@protocol CSAudioConverterDelegate;

@interface CSAudioConverter : NSObject
{
    struct OpaqueAudioConverter *_opusConverter;	// 8 = 0x8
    NSMutableData *_bufferedLPCM;	// 16 = 0x10
    unsigned int _recordBasePacketsPerSecond;	// 24 = 0x18
    struct AudioStreamBasicDescription _opusOutASBD;	// 32 = 0x20
    unsigned int _convertPacketCount;	// 72 = 0x48
    unsigned int _convertAudioCapacity;	// 76 = 0x4c
    unsigned long long _lastTimestamp;	// 80 = 0x50
    unsigned long long _lastArrivalTimestampToAudioRecorder;	// 88 = 0x58
    float _outPacketSizeInSec;	// 96 = 0x60
    id <CSAudioConverterDelegate> _delegate;	// 104 = 0x68
}

+ (id)narrowBandOpusConverter;	// IMP=0x00000001000d4d94
+ (id)opusConverter;	// IMP=0x00000001000d4d20
- (void).cxx_destruct;	// IMP=0x00000001000d5e68
@property __weak id <CSAudioConverterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_configureAudioConverter:(struct OpaqueAudioConverter *)arg1;	// IMP=0x00000001000d590c
- (void)reset;	// IMP=0x00000001000d5848
- (void)_convertBufferedLPCM:(id)arg1 allowPartial:(_Bool)arg2 timestamp:(unsigned long long)arg3 arrivalTimestampToAudioRecorder:(unsigned long long)arg4;	// IMP=0x00000001000d5160
- (void)flush;	// IMP=0x00000001000d5148
- (void)addSamples:(id)arg1 timestamp:(unsigned long long)arg2 arrivalTimestampToAudioRecorder:(unsigned long long)arg3;	// IMP=0x00000001000d5078
- (void)dealloc;	// IMP=0x00000001000d5028
- (id)initWithInASBD:(struct AudioStreamBasicDescription)arg1 outASBD:(struct AudioStreamBasicDescription)arg2;	// IMP=0x00000001000d4e08

@end

