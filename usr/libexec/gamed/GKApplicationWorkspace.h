//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LSApplicationWorkspace;

@interface GKApplicationWorkspace : NSObject
{
    LSApplicationWorkspace *_lsWorkspace;	// 8 = 0x8
}

+ (id)defaultWorkspace;	// IMP=0x00000001000b4204
- (void).cxx_destruct;	// IMP=0x00000001000b50e8
@property(retain, nonatomic) LSApplicationWorkspace *lsWorkspace; // @synthesize lsWorkspace=_lsWorkspace;
- (_Bool)wasProductionSignedForProcess:(int)arg1;	// IMP=0x00000001000b4f70
- (_Bool)allowProductionForProcess:(int)arg1;	// IMP=0x00000001000b4f68
- (id)availableGamesAndIdentifiers;	// IMP=0x00000001000b4d7c
- (id)availableGameIdentifiers;	// IMP=0x00000001000b4af8
- (id)gameDescriptorsWithInstalledBundleVersionsForGameDescriptors:(id)arg1;	// IMP=0x00000001000b4960
- (id)gameDescriptorsWithInstalledBundleVersionsForBundleIDs:(id)arg1;	// IMP=0x00000001000b46ac
- (_Bool)applicationIsInstalled:(id)arg1;	// IMP=0x00000001000b4660
- (void)openGameCenterSettings;	// IMP=0x00000001000b4654
- (void)openURL:(id)arg1;	// IMP=0x00000001000b448c
- (void)openICloudSettings;	// IMP=0x00000001000b442c
- (void)openSettings;	// IMP=0x00000001000b43cc
- (id)applicationProxyForBundleID:(id)arg1;	// IMP=0x00000001000b4378
- (id)initWithWorkspace:(id)arg1;	// IMP=0x00000001000b4304

@end
