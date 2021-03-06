//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ACCPluginManager.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface ACCFeaturePluginManager : ACCPluginManager
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x00000001000a250c
- (void).cxx_destruct;	// IMP=0x00000001000a25cc
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (unsigned long long)stopAllPlugIns;	// IMP=0x00000001000a23f0
- (unsigned long long)startAllPlugIns;	// IMP=0x00000001000a22d4
- (unsigned long long)initAllPlugIns;	// IMP=0x00000001000a211c
- (unsigned long long)loadAllBundles;	// IMP=0x00000001000a1f5c
- (unsigned long long)addFeaturePlugInBundleSearchPaths;	// IMP=0x00000001000a1e78
- (id)init;	// IMP=0x00000001000a1dd0

@end

