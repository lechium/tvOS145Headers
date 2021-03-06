//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPLivePhotoStatistics : NSObject
{
    unsigned long long _gatingDecisionCounter[32];	// 8 = 0x8
    unsigned long long _activityDecisionCounter[12];	// 264 = 0x108
    unsigned long long _stablizeResultsCounter[8];	// 360 = 0x168
    unsigned long long _firstFailedSubClassifierCounter[8];	// 424 = 0x1a8
    unsigned long long _assetCountWithLivePhotoEffectsAnalyzed;	// 488 = 0x1e8
    unsigned long long _analyzedPhotos;	// 496 = 0x1f0
    unsigned long long _analyzedMovies;	// 504 = 0x1f8
    unsigned long long _recommended;	// 512 = 0x200
    unsigned long long _recommended1Sec;	// 520 = 0x208
    unsigned long long _recommended2Sec;	// 528 = 0x210
    unsigned long long _recommended3Sec;	// 536 = 0x218
    double _recommendedSec;	// 544 = 0x220
}

@property(nonatomic) double recommendedSec; // @synthesize recommendedSec=_recommendedSec;
@property(nonatomic) unsigned long long recommended3Sec; // @synthesize recommended3Sec=_recommended3Sec;
@property(nonatomic) unsigned long long recommended2Sec; // @synthesize recommended2Sec=_recommended2Sec;
@property(nonatomic) unsigned long long recommended1Sec; // @synthesize recommended1Sec=_recommended1Sec;
@property(nonatomic) unsigned long long recommended; // @synthesize recommended=_recommended;
@property(nonatomic) unsigned long long analyzedMovies; // @synthesize analyzedMovies=_analyzedMovies;
@property(nonatomic) unsigned long long analyzedPhotos; // @synthesize analyzedPhotos=_analyzedPhotos;
- (unsigned long long)assetCountWithLivePhotoEffectsAnalyzed;	// IMP=0x000000010002157c
- (unsigned long long)firstFailedSubClassifierCounter:(unsigned long long)arg1;	// IMP=0x0000000100021570
- (unsigned long long)stablizeResultsCounter:(unsigned long long)arg1;	// IMP=0x0000000100021564
- (unsigned long long)activityDecisionCounter:(unsigned long long)arg1;	// IMP=0x0000000100021558
- (unsigned long long)gatingDecisionCounter:(unsigned long long)arg1;	// IMP=0x000000010002154c
- (void)addLivePhotoEffectsAnalyzedCount:(unsigned long long)arg1;	// IMP=0x000000010002153c
- (void)addCount:(unsigned long long)arg1 toFirstFailedSubClassifierCounter:(unsigned long long)arg2;	// IMP=0x0000000100021528
- (void)addCount:(unsigned long long)arg1 toStablizeResultsCounter:(unsigned long long)arg2;	// IMP=0x0000000100021514
- (void)addCount:(unsigned long long)arg1 toActivityDecisionCounter:(unsigned long long)arg2;	// IMP=0x0000000100021500
- (void)addCount:(unsigned long long)arg1 toGatingDecisionCounter:(unsigned long long)arg2;	// IMP=0x00000001000214ec
- (id)init;	// IMP=0x000000010002142c

@end

