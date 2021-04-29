//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MIFilesystemScannerDelegate-Protocol.h"

@class NSMutableSet;

@interface MILaunchServicesDatabaseGatherer : NSObject <MIFilesystemScannerDelegate>
{
    _Bool _shouldUpdatePluginContainersWithParentID;	// 8 = 0x8
    NSMutableSet *_coreServices;	// 16 = 0x10
    NSMutableSet *_systemApps;	// 24 = 0x18
    NSMutableSet *_userApps;	// 32 = 0x20
    NSMutableSet *_internalApps;	// 40 = 0x28
    NSMutableSet *_pluginKitPlugins;	// 48 = 0x30
    NSMutableSet *_vpnPlugins;	// 56 = 0x38
    NSMutableSet *_frameworks;	// 64 = 0x40
    NSMutableSet *_systemAppPlaceholders;	// 72 = 0x48
    CDUnknownBlockType _enumerator;	// 80 = 0x50
}

+ (id)fetchInfoForBundle:(id)arg1 inContainer:(id)arg2 withError:(id *)arg3;	// IMP=0x0000000100003ea4
+ (id)entryForBundle:(id)arg1 inContainer:(id)arg2 withError:(id *)arg3;	// IMP=0x0000000100003bf0
+ (_Bool)enumeratePluginKitPluginsInBundle:(id)arg1 updatingPluginParentID:(_Bool)arg2 ensurePluginsAreExecutable:(_Bool)arg3 installProfiles:(_Bool)arg4 error:(id *)arg5 enumerator:(CDUnknownBlockType)arg6;	// IMP=0x000000010000353c
- (void).cxx_destruct;	// IMP=0x0000000100004d50
@property(readonly, nonatomic) _Bool shouldUpdatePluginContainersWithParentID; // @synthesize shouldUpdatePluginContainersWithParentID=_shouldUpdatePluginContainersWithParentID;
@property(readonly, nonatomic) CDUnknownBlockType enumerator; // @synthesize enumerator=_enumerator;
@property(readonly, nonatomic) NSMutableSet *systemAppPlaceholders; // @synthesize systemAppPlaceholders=_systemAppPlaceholders;
@property(readonly, nonatomic) NSMutableSet *frameworks; // @synthesize frameworks=_frameworks;
@property(readonly, nonatomic) NSMutableSet *vpnPlugins; // @synthesize vpnPlugins=_vpnPlugins;
@property(readonly, nonatomic) NSMutableSet *pluginKitPlugins; // @synthesize pluginKitPlugins=_pluginKitPlugins;
@property(readonly, nonatomic) NSMutableSet *internalApps; // @synthesize internalApps=_internalApps;
@property(readonly, nonatomic) NSMutableSet *userApps; // @synthesize userApps=_userApps;
@property(readonly, nonatomic) NSMutableSet *systemApps; // @synthesize systemApps=_systemApps;
@property(readonly, nonatomic) NSMutableSet *coreServices; // @synthesize coreServices=_coreServices;
- (_Bool)performGatherWithError:(id *)arg1;	// IMP=0x0000000100004b54
- (void)errorOccurred:(id)arg1;	// IMP=0x0000000100004ac8
- (_Bool)scanExecutableBundle:(id)arg1 inContainer:(id)arg2 withError:(id *)arg3;	// IMP=0x000000010000476c
- (id)_setForEntry:(id)arg1;	// IMP=0x0000000100004544
- (_Bool)_scanBundle:(id)arg1 inBundleContainer:(id)arg2 withError:(id *)arg3;	// IMP=0x00000001000042b0
- (id)initWithEnumerator:(CDUnknownBlockType)arg1;	// IMP=0x0000000100003380

@end

