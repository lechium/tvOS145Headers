//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MSDSignedManifest.h"

@class NSSet;

@interface MSDSignedManifestV7 : MSDSignedManifest
{
    NSSet *_nonContainerizedContentRoots;	// 8 = 0x8
}

+ (id)signedManifestFromManifestData:(id)arg1;	// IMP=0x0000000100002900
- (void).cxx_destruct;	// IMP=0x0000000100005770
@property(retain) NSSet *nonContainerizedContentRoots; // @synthesize nonContainerizedContentRoots=_nonContainerizedContentRoots;
- (id)parseSectionForContentRoot:(id)arg1;	// IMP=0x00000001000053e4
- (void)parseNonContainerizedContentRootSet;	// IMP=0x00000001000051cc
- (id)getContainerTypeFromComponentName:(id)arg1;	// IMP=0x00000001000050c4
- (id)getManifestDataForContainerType:(id)arg1 andIdenitifer:(id)arg2 withSection:(id *)arg3;	// IMP=0x0000000100004f48
- (_Bool)isPathUnderNonContainerizedContentRoot:(id)arg1;	// IMP=0x0000000100004c88
- (id)getDataSectionKeys;	// IMP=0x0000000100004c6c
- (id)originServerForComponent:(id)arg1 andApp:(id)arg2;	// IMP=0x0000000100004bac
- (id)getUserDataList;	// IMP=0x0000000100004b50
- (id)getSharedDataList;	// IMP=0x0000000100004af4
- (id)getSystemAppDataList;	// IMP=0x0000000100004a98
- (id)getComponentDataList:(id)arg1;	// IMP=0x0000000100004988
- (_Bool)checkPlatformTypeForAllComponents;	// IMP=0x0000000100004418
- (id)getInstallationOrderSystemApps;	// IMP=0x000000010000440c
- (id)getInstallationOrderAppsPrefix;	// IMP=0x0000000100004400
- (id)getAppList;	// IMP=0x00000001000043a4
- (id)getStandAlonePackageList;	// IMP=0x0000000100004348
- (id)getStandAlonePackageVersion:(id)arg1;	// IMP=0x00000001000040b8
- (id)getComponentVersion:(id)arg1;	// IMP=0x0000000100003e28
- (id)mergedBackupManifest:(struct _NSRange)arg1;	// IMP=0x0000000100003a88
- (id)getAppFileSize:(id)arg1;	// IMP=0x0000000100003960
- (long long)getAppType:(id)arg1;	// IMP=0x0000000100003760
- (id)getSystemAppDependecies:(id)arg1;	// IMP=0x0000000100003668
- (id)getAppDependecies:(id)arg1;	// IMP=0x0000000100003570
- (id)getBackupList;	// IMP=0x0000000100003514
- (id)standAlonePackageIdentifierFromOrderItem:(id)arg1;	// IMP=0x000000010000348c
- (id)appIdentifierFromOrderItem:(id)arg1;	// IMP=0x0000000100003404
- (_Bool)isItemStandAlonePackage:(id)arg1;	// IMP=0x00000001000033ec
- (_Bool)isItemApp:(id)arg1;	// IMP=0x00000001000033d4
- (_Bool)isItemSystemAppData:(id)arg1;	// IMP=0x00000001000033bc
- (_Bool)isItemConfigurationProfileBackup:(id)arg1;	// IMP=0x00000001000033a4
- (_Bool)isItemProvisioningProfileBackup:(id)arg1;	// IMP=0x000000010000338c
- (_Bool)isItemSystemContainerBackup:(id)arg1;	// IMP=0x0000000100003374
- (_Bool)isItemBaseBackup:(id)arg1;	// IMP=0x000000010000335c
- (_Bool)isItemBackup:(id)arg1;	// IMP=0x0000000100003344
- (id)initWithManifestData:(id)arg1;	// IMP=0x0000000100002954

@end
