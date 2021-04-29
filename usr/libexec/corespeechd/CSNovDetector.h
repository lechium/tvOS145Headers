//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSNovDetector : NSObject
{
    void *_novDetect;	// 8 = 0x8
}

- (id)getOptionValue:(id)arg1;	// IMP=0x000000010006a99c
- (id)getSuperVectorWithEndPoint:(unsigned long long)arg1;	// IMP=0x000000010006a94c
- (id)getAnalyzedResultForPhraseId:(unsigned int)arg1;	// IMP=0x000000010006a854
- (unsigned int)numResultsAvailable;	// IMP=0x000000010006a84c
- (void)analyzeWavFloatData:(id)arg1 numSamples:(unsigned long long)arg2;	// IMP=0x000000010006a80c
- (void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2;	// IMP=0x000000010006a7cc
- (void)resetBest;	// IMP=0x000000010006a7c4
- (void)reset;	// IMP=0x000000010006a7bc
- (void)dealloc;	// IMP=0x000000010006a76c
- (id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2;	// IMP=0x000000010006a5a8

@end
