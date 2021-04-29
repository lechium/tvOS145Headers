//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MaxLoadIndexTableSection.h"

@interface MaxLoadIndexTableSectionPiecewiseLinear : MaxLoadIndexTableSection
{
    unsigned long long _controlEfforts[12];	// 40 = 0x28
    unsigned long long _maxLIs[12];	// 136 = 0x88
    unsigned long long _unconstrainedMaxLI;	// 232 = 0xe8
    unsigned long long _pointCount;	// 240 = 0xf0
}

- (unsigned long long)getControlEffortForMaxLI:(unsigned long long)arg1;	// IMP=0x000000010003c580
- (unsigned long long)getReleaseMaxLI:(_Bool)arg1 releaseRate:(int)arg2;	// IMP=0x000000010003c54c
- (unsigned long long)getMaxLI:(unsigned long long)arg1;	// IMP=0x000000010003c484
- (id)initWithDecisionTreeSectionControlEfforts:(id)arg1 maxLIs:(id)arg2 unconstrainedMaxLI:(unsigned long long)arg3;	// IMP=0x000000010003c204

@end
