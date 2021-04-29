//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDDemoManifestCheck, NSArray, NSDictionary, NSString;

@interface MSDSignedManifest : NSObject
{
    _Bool _staggeredContentUpdateEnabled;	// 8 = 0x8
    NSString *_signingKey;	// 16 = 0x10
    NSArray *_installationOrder;	// 24 = 0x18
    NSArray *_criticalComponents;	// 32 = 0x20
    NSDictionary *_payload;	// 40 = 0x28
    MSDDemoManifestCheck *_manifestVerifier;	// 48 = 0x30
}

+ (id)getComponentFromPath:(id)arg1 forManifestVersion:(id)arg2;	// IMP=0x000000010006df88
+ (id)appsPrefixForManifestVersion:(id)arg1;	// IMP=0x000000010006df48
+ (id)signedManifestFromManifestData:(id)arg1;	// IMP=0x000000010006c5a8
+ (void)setSignedManifest:(id)arg1;	// IMP=0x000000010006c598
+ (id)signedManifest;	// IMP=0x000000010006c58c
- (void).cxx_destruct;	// IMP=0x00000001000706d8
@property _Bool staggeredContentUpdateEnabled; // @synthesize staggeredContentUpdateEnabled=_staggeredContentUpdateEnabled;
@property(retain) MSDDemoManifestCheck *manifestVerifier; // @synthesize manifestVerifier=_manifestVerifier;
@property(retain) NSDictionary *payload; // @synthesize payload=_payload;
@property(retain) NSArray *criticalComponents; // @synthesize criticalComponents=_criticalComponents;
@property(retain) NSArray *installationOrder; // @synthesize installationOrder=_installationOrder;
@property(retain, nonatomic) NSString *signingKey; // @synthesize signingKey=_signingKey;
- (_Bool)validateInstallationOrder;	// IMP=0x000000010007048c
- (void)parseInstallationOrder;	// IMP=0x00000001000702a8
- (_Bool)isManualSigning:(id)arg1;	// IMP=0x000000010007008c
- (_Bool)verifySignature:(id)arg1 forData:(id)arg2 withKey:(struct __SecKey *)arg3;	// IMP=0x000000010006ff28
- (struct __SecKey *)createPublicKey:(id)arg1 usingPolicy:(struct __SecPolicy *)arg2 anchors:(id)arg3;	// IMP=0x000000010006fa2c
- (struct __SecKey *)createPublicKeyForDevelopmentSigningStandard:(id)arg1;	// IMP=0x000000010006f940
- (struct __SecKey *)createPublicKeyAppleISTSigning:(id)arg1;	// IMP=0x000000010006f358
- (struct __SecKey *)createPublicKeyForDevelopmentSigning:(id)arg1;	// IMP=0x000000010006f2bc
- (struct __SecKey *)createPublicKeyForStrongSigning:(id)arg1;	// IMP=0x000000010006f184
- (id)verifyManifestSignature:(id)arg1;	// IMP=0x000000010006e3b8
- (id)getDataSectionKeys;	// IMP=0x000000010006e39c
- (id)getStandAlonePackageVersion:(id)arg1;	// IMP=0x000000010006e2f8
- (id)getComponentVersion:(id)arg1;	// IMP=0x000000010006e198
- (id)standAlonePackageIdentifierFromOrderItem:(id)arg1;	// IMP=0x000000010006df40
- (id)appIdentifierFromOrderItem:(id)arg1;	// IMP=0x000000010006deb8
- (_Bool)isItemStandAlonePackage:(id)arg1;	// IMP=0x000000010006deb0
- (_Bool)isItemApp:(id)arg1;	// IMP=0x000000010006de98
- (_Bool)isItemSystemAppData:(id)arg1;	// IMP=0x000000010006de80
- (_Bool)isItemConfigurationProfileBackup:(id)arg1;	// IMP=0x000000010006de78
- (_Bool)isItemProvisioningProfileBackup:(id)arg1;	// IMP=0x000000010006de60
- (_Bool)isItemSystemContainerBackup:(id)arg1;	// IMP=0x000000010006de48
- (_Bool)isItemBaseBackup:(id)arg1;	// IMP=0x000000010006de30
- (_Bool)isItemBackup:(id)arg1;	// IMP=0x000000010006de18
- (id)originServerForApp:(id)arg1;	// IMP=0x000000010006dd48
- (id)originServerForBackupManifest:(struct _NSRange)arg1;	// IMP=0x000000010006dc4c
- (_Bool)hasSystemContainerBackupInRange:(struct _NSRange)arg1;	// IMP=0x000000010006db18
- (id)mergedBackupManifest:(struct _NSRange)arg1;	// IMP=0x000000010006d760
- (struct _NSRange)rangeOfGroupedBackups:(long long)arg1;	// IMP=0x000000010006d730
- (id)itemAtIndexInManifest:(long long)arg1;	// IMP=0x000000010006d6d4
@property(readonly, getter=getBackupList) NSDictionary *backupList;
@property(readonly, getter=getBackup) NSDictionary *backup;
- (id)getOriginServerForContainerType:(id)arg1 andIdenitifer:(id)arg2;	// IMP=0x000000010006d4ec
- (id)getManifestDataForContainerType:(id)arg1 andIdenitifer:(id)arg2 withSection:(id *)arg3;	// IMP=0x000000010006d3c8
- (_Bool)isContainerizedComponent:(id)arg1;	// IMP=0x000000010006d344
- (id)getDataForApp:(id)arg1 fromDataSection:(id)arg2;	// IMP=0x000000010006d270
- (id)getContainerTypeFromComponentName:(id)arg1;	// IMP=0x000000010006d268
- (_Bool)isPathUnderNonContainerizedContentRoot:(id)arg1;	// IMP=0x000000010006d260
@property(readonly, getter=getSystemAppDataList) NSDictionary *systemAppDataList;
- (id)getComponentDataList:(id)arg1;	// IMP=0x000000010006d250
@property(readonly, getter=getUserDataList) NSDictionary *userDataList;
@property(readonly, getter=getSharedDataList) NSDictionary *sharedDataList;
- (id)getAppFileSize:(id)arg1;	// IMP=0x000000010006d238
- (long long)getAppType:(id)arg1;	// IMP=0x000000010006d230
- (id)getSystemAppDependecies:(id)arg1;	// IMP=0x000000010006d228
- (id)getAppDependecies:(id)arg1;	// IMP=0x000000010006d220
@property(readonly, getter=getPlugInDataList) NSDictionary *plugInDataList;
@property(readonly, getter=getGroupDataList) NSDictionary *groupDataList;
@property(readonly, getter=getAppDataList) NSDictionary *appDataList;
@property(readonly, getter=getAppList) NSDictionary *appList;
@property(readonly, getter=getInfo) NSDictionary *info;
@property(readonly, getter=getVersion) int version;
@property(readonly, getter=getInstallationOrderSystemApps) NSString *installationOrderSystemApps;
@property(readonly, getter=getInstallationOrderAppsPrefix) NSString *installationOrderAppsPrefix;
- (void)dealloc;	// IMP=0x000000010006cf74
- (id)initWithManifestData:(id)arg1;	// IMP=0x000000010006c5fc

@end

