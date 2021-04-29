//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary;

@interface ADDictationOnDeviceSampling : NSObject
{
    _Bool _isRequestConsideredForSampling;	// 8 = 0x8
    long long _numberOfRequestsTillNow;	// 16 = 0x10
    NSDate *_currentSamplingDate;	// 24 = 0x18
    NSMutableDictionary *_dictationSamplingVaribles;	// 32 = 0x20
}

+ (id)_readDictationSampledPlist;	// IMP=0x00000001001ccd08
+ (id)sharedManager;	// IMP=0x00000001001cc8d4
- (void).cxx_destruct;	// IMP=0x00000001001cd070
@property(nonatomic) _Bool isRequestConsideredForSampling; // @synthesize isRequestConsideredForSampling=_isRequestConsideredForSampling;
@property(retain, nonatomic) NSMutableDictionary *dictationSamplingVaribles; // @synthesize dictationSamplingVaribles=_dictationSamplingVaribles;
@property(retain, nonatomic) NSDate *currentSamplingDate; // @synthesize currentSamplingDate=_currentSamplingDate;
@property(nonatomic) long long numberOfRequestsTillNow; // @synthesize numberOfRequestsTillNow=_numberOfRequestsTillNow;
- (void)_writeDictationSamplingVariblesToFile:(id)arg1;	// IMP=0x00000001001ccfb0
- (void)_createDictationSampledPlistIfItDoesNotExist;	// IMP=0x00000001001cce60
- (_Bool)isRequestSelectedForSampling;	// IMP=0x00000001001ccd00
- (_Bool)isSamplingDateCurrent;	// IMP=0x00000001001ccc44
- (void)updateDateToCurrent;	// IMP=0x00000001001ccbd4
- (void)setRequestCount:(long long)arg1;	// IMP=0x00000001001ccb64
- (void)decrementRequestCount;	// IMP=0x00000001001cca9c
- (void)updateRequestCountWithFlag:(_Bool)arg1;	// IMP=0x00000001001cca84
- (void)incrementRequestCount;	// IMP=0x00000001001cca6c
- (void)resetRequestCount;	// IMP=0x00000001001cca5c
- (id)init;	// IMP=0x00000001001cc940

@end
