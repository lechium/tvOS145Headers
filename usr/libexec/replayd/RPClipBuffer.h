//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface RPClipBuffer : NSObject <NSCopying>
{
    _Bool _firstSampleReceived;	// 8 = 0x8
    float _oldestSeconds;	// 12 = 0xc
    float _newestSeconds;	// 16 = 0x10
    NSMutableArray *_bufferArray;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100006670
@property(nonatomic) _Bool firstSampleReceived; // @synthesize firstSampleReceived=_firstSampleReceived;
@property(nonatomic) float newestSeconds; // @synthesize newestSeconds=_newestSeconds;
@property(nonatomic) float oldestSeconds; // @synthesize oldestSeconds=_oldestSeconds;
@property(retain, nonatomic) NSMutableArray *bufferArray; // @synthesize bufferArray=_bufferArray;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100006470
- (void)flushBuffer;	// IMP=0x0000000100006338
- (unsigned long long)getTotalNumberOfSamples;	// IMP=0x0000000100006328
- (id)getSamplesForSeconds:(double)arg1;	// IMP=0x0000000100006010
- (const struct opaqueCMFormatDescription *)getFormatDescription;	// IMP=0x0000000100005fa8
- (void)addFrameToBuffer:(struct opaqueCMSampleBuffer *)arg1 isKeyFrame:(_Bool)arg2;	// IMP=0x0000000100005c90
- (id)init;	// IMP=0x0000000100005c14

@end

