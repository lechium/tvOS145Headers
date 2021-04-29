//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ADOfflineMetricsMap;
@protocol OS_dispatch_queue;

@interface ADOfflineMetricsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ADOfflineMetricsMap *_map;	// 16 = 0x10
}

+ (id)_buildOfflineMetricsMap;	// IMP=0x00000001001b4704
+ (void)_deleteLegacyOfflineMetricsFiles;	// IMP=0x00000001001b4488
- (void).cxx_destruct;	// IMP=0x00000001001b4d88
- (void)deleteAllMetrics;	// IMP=0x00000001001b4c90
- (void)fetchNextMetricsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001b4aa4
- (void)deleteMetricsWithOfflineIdentifier:(id)arg1;	// IMP=0x00000001001b4968
- (void)insertMetrics:(id)arg1;	// IMP=0x00000001001b47a8
- (id)init;	// IMP=0x00000001001b4348

@end

