//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCMDMMigrator : NSObject
{
}

+ (id)sharedMigrator;	// IMP=0x00000001000039c8
- (void)_resetManagedAppRemovability;	// IMP=0x0000000100004fc0
- (void)_updateUnlockTokenSecretToClassDIfNeeded;	// IMP=0x0000000100004c84
- (void)_updateSkipBackupKeyForNonStoreBooksDirectory;	// IMP=0x0000000100004aac
- (void)_updateNonStoreBooksManifestForSystemGroupContainer;	// IMP=0x0000000100004494
- (void)_moveNonStoreManagedBooksToSystemGroupContainerFromLegacyPath:(id)arg1;	// IMP=0x0000000100003d64
- (void)_moveNonStoreManagedBooksToSystemGroupContainer;	// IMP=0x0000000100003d20
- (void)migrateMDMWithContext:(int)arg1;	// IMP=0x0000000100003a54

@end

