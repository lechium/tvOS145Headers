//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CSAudioConverter, NSArray;

@protocol CSAudioConverterDelegate <NSObject>
- (void)audioConverterDidConvertPackets:(CSAudioConverter *)arg1 packets:(NSArray *)arg2 durationInSec:(float)arg3 timestamp:(unsigned long long)arg4 arrivalTimestampToAudioRecorder:(unsigned long long)arg5;
@end

