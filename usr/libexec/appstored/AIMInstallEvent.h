//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AIMEvent.h"

@class NSNumber, NSString;

@interface AIMInstallEvent : AIMEvent
{
    _Bool _deltaPackage;	// 8 = 0x8
}

@property _Bool deltaPackage; // @synthesize deltaPackage=_deltaPackage;
- (id)copyMetricsDictionary;	// IMP=0x0000000100125154
- (void)setPackageURL:(id)arg1;	// IMP=0x0000000100125140
- (id)packageURL;	// IMP=0x000000010012512c
@property(retain) NSString *responsibleClientID;
@property(retain) NSNumber *drmMode;

@end

