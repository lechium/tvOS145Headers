//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TimeWindow;

@interface AppInstallPolicy : NSObject
{
    NSMutableDictionary *_dictionary;	// 8 = 0x8
}

+ (id)defaultInstallPolicy;	// IMP=0x0000000100235c4c
- (void).cxx_destruct;	// IMP=0x0000000100236478
- (id)copyDictionaryRepresentation;	// IMP=0x0000000100236468
@property _Bool requiresTermination;
@property _Bool requiresPowerPluggedIn;
@property _Bool requiresNetwork;
@property _Bool requiresMigrationComplete;
@property _Bool requiresDeviceSecurity;
@property(copy) TimeWindow *optimalDownloadWindow;
@property long long constrainedResult;
@property long long cellularResult;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100235ce8
- (id)init;	// IMP=0x0000000100235c88

@end

