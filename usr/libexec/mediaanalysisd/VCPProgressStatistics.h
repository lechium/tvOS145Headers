//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPProgressStatistics : NSObject
{
    unsigned long long _unanalyzedWithResourcesCounter[11];	// 8 = 0x8
    unsigned long long _unanalyzedWithoutResourcesCounter[11];	// 96 = 0x60
    unsigned long long _analyzedWithResourcesCounter[11];	// 184 = 0xb8
    unsigned long long _analyzedWithoutResourcesCounter[11];	// 272 = 0x110
    unsigned long long _numAssetsUnanalyzedWithResources;	// 360 = 0x168
    unsigned long long _numAssetsUnanalyzedWithoutResources;	// 368 = 0x170
    unsigned long long _numNewAssetsUnanalyzedWithResources;	// 376 = 0x178
    unsigned long long _numNewAssetsUnanalyzedWithoutResources;	// 384 = 0x180
    unsigned long long _numExistingAssetsUnanalyzedWithResources;	// 392 = 0x188
    unsigned long long _numExistingAssetsUnanalyzedWithoutResources;	// 400 = 0x190
    unsigned long long _numExistingAssetsNotUpdatedWithResources;	// 408 = 0x198
    unsigned long long _numExistingAssetsNotUpdatedWithoutResources;	// 416 = 0x1a0
}

@property(nonatomic) unsigned long long numExistingAssetsNotUpdatedWithoutResources; // @synthesize numExistingAssetsNotUpdatedWithoutResources=_numExistingAssetsNotUpdatedWithoutResources;
@property(nonatomic) unsigned long long numExistingAssetsNotUpdatedWithResources; // @synthesize numExistingAssetsNotUpdatedWithResources=_numExistingAssetsNotUpdatedWithResources;
@property(nonatomic) unsigned long long numExistingAssetsUnanalyzedWithoutResources; // @synthesize numExistingAssetsUnanalyzedWithoutResources=_numExistingAssetsUnanalyzedWithoutResources;
@property(nonatomic) unsigned long long numExistingAssetsUnanalyzedWithResources; // @synthesize numExistingAssetsUnanalyzedWithResources=_numExistingAssetsUnanalyzedWithResources;
@property(nonatomic) unsigned long long numNewAssetsUnanalyzedWithoutResources; // @synthesize numNewAssetsUnanalyzedWithoutResources=_numNewAssetsUnanalyzedWithoutResources;
@property(nonatomic) unsigned long long numNewAssetsUnanalyzedWithResources; // @synthesize numNewAssetsUnanalyzedWithResources=_numNewAssetsUnanalyzedWithResources;
@property(nonatomic) unsigned long long numAssetsUnanalyzedWithoutResources; // @synthesize numAssetsUnanalyzedWithoutResources=_numAssetsUnanalyzedWithoutResources;
@property(nonatomic) unsigned long long numAssetsUnanalyzedWithResources; // @synthesize numAssetsUnanalyzedWithResources=_numAssetsUnanalyzedWithResources;
- (unsigned long long)analyzedWithoutResourcesCounter:(unsigned long long)arg1;	// IMP=0x0000000100021714
- (void)addAnalyzedWithoutResourcesCounter:(unsigned long long)arg1;	// IMP=0x0000000100021700
- (unsigned long long)analyzedWithResourcesCounter:(unsigned long long)arg1;	// IMP=0x00000001000216f4
- (void)addAnalyzedWithResourcesCounter:(unsigned long long)arg1;	// IMP=0x00000001000216e0
- (unsigned long long)unanalyzedWithoutResourcesCounter:(unsigned long long)arg1;	// IMP=0x00000001000216d4
- (void)addUnanalyzedWithoutResourcesCounter:(unsigned long long)arg1;	// IMP=0x00000001000216c0
- (unsigned long long)unanalyzedWithResourcesCounter:(unsigned long long)arg1;	// IMP=0x00000001000216b4
- (void)addUnanalyzedWithResourcesCounter:(unsigned long long)arg1;	// IMP=0x00000001000216a0
- (id)init;	// IMP=0x00000001000215f4

@end

