//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ACCPluginManager.h"

@interface ACCPlatformPluginManager : ACCPluginManager
{
}

+ (id)sharedManager;	// IMP=0x00000001000898e0
- (id)initClass:(Class)arg1;	// IMP=0x00000001000898ac
- (id)pluginInstancesWithProtocol:(id)arg1 includeTransportPlugins:(_Bool)arg2;	// IMP=0x0000000100089660
- (id)pluginInstanceWithProtocol:(id)arg1 fallbackToTransportPlugins:(_Bool)arg2;	// IMP=0x00000001000891d4
- (unsigned long long)stopAllPlugIns;	// IMP=0x00000001000890b8
- (unsigned long long)startAllPlugIns;	// IMP=0x0000000100088f9c
- (unsigned long long)initAllPlugIns;	// IMP=0x0000000100088de4
- (unsigned long long)loadAllBundles;	// IMP=0x0000000100088c24
- (unsigned long long)addPlatformPlugInBundleSearchPaths;	// IMP=0x0000000100088b40
- (id)init;	// IMP=0x0000000100088ae8

@end

