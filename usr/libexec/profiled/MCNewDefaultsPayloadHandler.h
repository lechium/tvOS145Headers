//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@class NSMutableSet;

@interface MCNewDefaultsPayloadHandler : MCNewPayloadHandler
{
    NSMutableSet *_changedDomains;	// 32 = 0x20
}

+ (void)removeDefaults:(id)arg1 forDomain:(id)arg2;	// IMP=0x0000000100057d10
+ (void)removeDefaults:(id)arg1 forManagedDomain:(id)arg2;	// IMP=0x0000000100057b60
+ (_Bool)addDefaults:(id)arg1 toManagedDomain:(id)arg2;	// IMP=0x0000000100057a78
+ (_Bool)setDefaults:(id)arg1 forManagedDomain:(id)arg2;	// IMP=0x000000010005791c
+ (id)defaultsForManagedDomain:(id)arg1;	// IMP=0x0000000100057840
+ (id)_managedSettingsFolder;	// IMP=0x000000010005783c
- (void).cxx_destruct;	// IMP=0x00000001000586fc
- (void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x00000001000586f0
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x00000001000586e4
- (void)_sendCFPreferenceNotification;	// IMP=0x0000000100058674
- (void)migrateDefaults;	// IMP=0x000000010005849c
- (void)unsetAside;	// IMP=0x0000000100058490
- (void)setAside;	// IMP=0x0000000100058484
- (void)remove;	// IMP=0x0000000100058410
- (void)_remove;	// IMP=0x0000000100058184
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010005809c
- (_Bool)_install;	// IMP=0x0000000100057d8c
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x00000001000577d0

@end
