//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileInstallation/MIStoreMetadata.h>

@interface MIStoreMetadata (Legacy)
+ (id)legacy_metadataWithActivity:(id)arg1;	// IMP=0x0000000100222e0c
+ (id)lib_metadataWithStoreItem:(id)arg1;	// IMP=0x000000010025e5d8
+ (id)lib_metadataFromDatabaseRepresentation:(id)arg1 error:(id *)arg2;	// IMP=0x000000010025e52c
+ (id)lib_metadataFromBundleContainerURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000010025e488
+ (id)lib_metadataFromApplicationRecord:(id)arg1 error:(id *)arg2;	// IMP=0x000000010025e360
+ (id)lib_metadataFromApplication:(id)arg1 error:(id *)arg2;	// IMP=0x000000010025e13c
- (void)legacy_setPropertiesWithActivity:(id)arg1;	// IMP=0x0000000100222e60
- (_Bool)lib_updateMetadataForApplication:(id)arg1 error:(id *)arg2;	// IMP=0x000000010025f0b0
- (void)lib_setPropertiesWithStoreItem:(id)arg1;	// IMP=0x000000010025e9a0
- (void)lib_setPropertiesWithSINFData:(id)arg1 isVPP:(_Bool)arg2;	// IMP=0x000000010025e89c
- (void)lib_setPropertiesWithSINFData:(id)arg1;	// IMP=0x000000010025e88c
- (void)lib_setPropertiesWithPurchaseInfo:(id)arg1;	// IMP=0x000000010025e790
- (void)lib_setPropertiesWithAccount:(id)arg1;	// IMP=0x000000010025e6b4
- (id)lib_databaseRepresentationError:(id *)arg1;	// IMP=0x000000010025e62c
@end
