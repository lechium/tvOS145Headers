//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLPhotoLibrary;

@interface PLDeletePersistentHistoryMaintenanceTask : NSObject
{
    PLPhotoLibrary *_library;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100004058
- (long long)historyPercentThreshold;	// IMP=0x0000000100003f1c
- (long long)daysOfHistoryToKeep;	// IMP=0x0000000100003de0
- (void)deletePersistentHistoryWithContext:(id)arg1;	// IMP=0x0000000100003838
- (void)runTaskWithTransaction:(id)arg1;	// IMP=0x00000001000037d8
- (id)initWithLibrary:(id)arg1;	// IMP=0x00000001000036e0

@end

