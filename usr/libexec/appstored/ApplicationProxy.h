//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LSApplicationProxy, LSApplicationRecord, MIStoreMetadata, NSArray, NSData, NSNumber, NSString, NSURL, Optional, PurchaseOwner;

@interface ApplicationProxy : NSObject
{
    LSApplicationProxy *_proxy;	// 8 = 0x8
    LSApplicationRecord *_record;	// 16 = 0x10
    unsigned short _signingFlags;	// 24 = 0x18
    NSNumber *_appClipIsConfiguredForIAPValue;	// 32 = 0x20
    Optional *_extensionReceiptURLs;	// 40 = 0x28
    Optional *_storeMetadata;	// 48 = 0x30
    _Bool _appClip;	// 56 = 0x38
    _Bool _appClipIsConfiguredForIAP;	// 57 = 0x39
    _Bool _wrapped;	// 58 = 0x3a
    _Bool _appleSigned;	// 59 = 0x3b
    _Bool _profileValidated;	// 60 = 0x3c
    _Bool _hasMIDBasedSINF;	// 61 = 0x3d
    _Bool _missingRequiredSINF;	// 62 = 0x3e
    _Bool _installed;	// 63 = 0x3f
    _Bool _offloaded;	// 64 = 0x40
    _Bool _placeholder;	// 65 = 0x41
    _Bool _arcade;	// 66 = 0x42
    _Bool _beta;	// 67 = 0x43
    _Bool _ocelot;	// 68 = 0x44
    _Bool _storeOriginated;	// 69 = 0x45
    NSNumber *_downloaderDSID;	// 72 = 0x48
    NSNumber *_familyID;	// 80 = 0x50
    NSNumber *_purchaserDSID;	// 88 = 0x58
    NSString *_parentApplicationBundleID;	// 96 = 0x60
    NSString *_bundleID;	// 104 = 0x68
    NSString *_bundlePath;	// 112 = 0x70
    NSURL *_bundleURL;	// 120 = 0x78
    NSString *_bundleVersion;	// 128 = 0x80
    NSString *_canonicalExecutablePath;	// 136 = 0x88
    NSString *_localizedName;	// 144 = 0x90
    NSString *_shortVersionString;	// 152 = 0x98
    NSString *_vendorName;	// 160 = 0xa0
    unsigned long long _applicationType;	// 168 = 0xa8
    long long _betaExternalVersionID;	// 176 = 0xb0
    NSString *_deviceIdentifierForVendor;	// 184 = 0xb8
    NSString *_storeCohort;	// 192 = 0xc0
    long long _storeExternalVersionID;	// 200 = 0xc8
    NSNumber *_storefront;	// 208 = 0xd0
    long long _storeItemID;	// 216 = 0xd8
    NSString *_thinningVariantID;	// 224 = 0xe0
    unsigned long long _updateAvailability;	// 232 = 0xe8
    NSString *_companionBundleID;	// 240 = 0xf0
}

+ (void)enumerateApplicationsOfType:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100250c38
+ (id)proxyForBundleURL:(id)arg1;	// IMP=0x000000010024fa90
+ (id)proxyForItemID:(id)arg1;	// IMP=0x000000010024fa2c
+ (id)proxyForBundleID:(id)arg1;	// IMP=0x000000010024f9c8
- (void).cxx_destruct;	// IMP=0x0000000100251068
@property(retain, nonatomic) NSString *companionBundleID; // @synthesize companionBundleID=_companionBundleID;
@property(nonatomic) unsigned long long updateAvailability; // @synthesize updateAvailability=_updateAvailability;
@property(retain, nonatomic) NSString *thinningVariantID; // @synthesize thinningVariantID=_thinningVariantID;
@property(nonatomic, getter=isStoreOriginated) _Bool storeOriginated; // @synthesize storeOriginated=_storeOriginated;
@property(nonatomic) long long storeItemID; // @synthesize storeItemID=_storeItemID;
@property(retain, nonatomic) NSNumber *storefront; // @synthesize storefront=_storefront;
@property(nonatomic) long long storeExternalVersionID; // @synthesize storeExternalVersionID=_storeExternalVersionID;
@property(retain, nonatomic) NSString *storeCohort; // @synthesize storeCohort=_storeCohort;
@property(nonatomic, getter=isOcelot) _Bool ocelot; // @synthesize ocelot=_ocelot;
@property(retain, nonatomic) NSString *deviceIdentifierForVendor; // @synthesize deviceIdentifierForVendor=_deviceIdentifierForVendor;
@property(nonatomic) long long betaExternalVersionID; // @synthesize betaExternalVersionID=_betaExternalVersionID;
@property(nonatomic, getter=isBeta) _Bool beta; // @synthesize beta=_beta;
@property(nonatomic, getter=isArcade) _Bool arcade; // @synthesize arcade=_arcade;
@property(nonatomic, getter=isPlaceholder) _Bool placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic, getter=isOffloaded) _Bool offloaded; // @synthesize offloaded=_offloaded;
@property(nonatomic, getter=isInstalled) _Bool installed; // @synthesize installed=_installed;
@property(nonatomic) unsigned long long applicationType; // @synthesize applicationType=_applicationType;
@property(nonatomic) _Bool missingRequiredSINF; // @synthesize missingRequiredSINF=_missingRequiredSINF;
@property(nonatomic) _Bool hasMIDBasedSINF; // @synthesize hasMIDBasedSINF=_hasMIDBasedSINF;
@property(nonatomic, getter=isProfileValidated) _Bool profileValidated; // @synthesize profileValidated=_profileValidated;
@property(nonatomic, getter=isAppleSigned) _Bool appleSigned; // @synthesize appleSigned=_appleSigned;
@property(readonly, getter=isWrapped) _Bool wrapped; // @synthesize wrapped=_wrapped;
@property(retain, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(retain, nonatomic) NSString *shortVersionString; // @synthesize shortVersionString=_shortVersionString;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(retain, nonatomic) NSString *canonicalExecutablePath; // @synthesize canonicalExecutablePath=_canonicalExecutablePath;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(retain, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) _Bool appClipIsConfiguredForIAP; // @synthesize appClipIsConfiguredForIAP=_appClipIsConfiguredForIAP;
@property(retain, nonatomic) NSString *parentApplicationBundleID; // @synthesize parentApplicationBundleID=_parentApplicationBundleID;
@property(nonatomic, getter=isAppClip) _Bool appClip; // @synthesize appClip=_appClip;
@property(retain, nonatomic) NSNumber *purchaserDSID; // @synthesize purchaserDSID=_purchaserDSID;
@property(retain, nonatomic) NSNumber *familyID; // @synthesize familyID=_familyID;
@property(retain, nonatomic) NSNumber *downloaderDSID; // @synthesize downloaderDSID=_downloaderDSID;
- (id)description;	// IMP=0x0000000100250dbc
@property(readonly) _Bool isFactoryInstall;
@property(readonly) _Bool isConfiguratorInstall;
@property(readonly) MIStoreMetadata *storeMetadata;
@property(readonly) NSURL *receiptURL;
@property(readonly) NSNumber *ratingRank;
@property(readonly) NSArray *extensionReceiptURLs;
@property(readonly) NSString *appStoreToolsBuildVersion;
@property(readonly) NSNumber *installFailureReason;
@property(readonly, copy) NSData *sinf;
@property(readonly, nonatomic) NSString *sinfPath;
@property(readonly, copy) NSString *md5;
@property(readonly, nonatomic) unsigned int codeSignatureVersion;
@property(readonly) PurchaseOwner *purchaseOwner;
@property(readonly) NSString *shortDescription;
- (id)_initWithLSApplicationProxy:(id)arg1;	// IMP=0x000000010024fcec
- (id)initWithBundleURL:(id)arg1;	// IMP=0x000000010024fb54
- (id)initWithBundlePath:(id)arg1;	// IMP=0x000000010024faf4

@end

