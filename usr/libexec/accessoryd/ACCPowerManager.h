//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ACCPowerManager : NSObject
{
    NSMutableArray *_featurePowerMode;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010004c0d0
@property(readonly, nonatomic) NSMutableArray *featurePowerMode; // @synthesize featurePowerMode=_featurePowerMode;
- (_Bool)getCurrentConnectionIsHighPowerMode;	// IMP=0x000000010004c010
- (_Bool)connectionPowerModeChangedForFeaturePowerModeUpdate:(int)arg1 withObject:(_Bool)arg2;	// IMP=0x000000010004bf48
- (void)dealloc;	// IMP=0x000000010004bef8
- (id)init;	// IMP=0x000000010004bdf0

@end

