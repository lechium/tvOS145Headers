//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLPhotoLibrary;

@interface PLExcessiveHistoryMaintenaceTask : NSObject
{
    PLPhotoLibrary *_photoLibrary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000f3e8
- (id)isHistorySizeExcessiveWithError:(id *)arg1;	// IMP=0x000000010000f090
- (void)runTaskWithTransaction:(id)arg1;	// IMP=0x000000010000ed80
- (id)initWithLibrary:(id)arg1;	// IMP=0x000000010000ed08
- (id)new;	// IMP=0x000000010000ec8c
- (id)init;	// IMP=0x000000010000ec08

@end

