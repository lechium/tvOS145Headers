//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MigratorTask.h"

@interface MigratorODRTask : MigratorTask
{
}

- (void)_swapKeysInDictionary:(id)arg1 usingMapping:(id)arg2;	// IMP=0x00000001001c9ca4
- (_Bool)_importMemoryEntity:(id)arg1 usingDatastore:(id)arg2;	// IMP=0x00000001001c99ec
- (_Bool)_importManifestForBundleID:(id)arg1 usingConnection:(id)arg2 andDatabaseStore:(id)arg3;	// IMP=0x00000001001c9474
- (_Bool)_importDownloadedAssetPacksWithManifestID:(id)arg1 andBundleID:(id)arg2 usingConnection:(id)arg3 andDatabaseStore:(id)arg4;	// IMP=0x00000001001c88f4
- (void)_importBundleTagManifest:(id)arg1 withApplication:(id)arg2 andDatabaseStore:(id)arg3;	// IMP=0x00000001001c8820
- (id)_allIDsWithDownloadedAssetPacksUsingConnection:(id)arg1;	// IMP=0x00000001001c85e8
- (void)main;	// IMP=0x00000001001c7f20
- (id)migratorType;	// IMP=0x00000001001c7f14
- (id)copyConfiguration;	// IMP=0x00000001001c7ee8
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000001001c7eb4

@end
