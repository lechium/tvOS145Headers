//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ContextObject.h"

@class ACAccount, AIMPurchaseEvent, AMSBuyParams, AMSProcessInfo, ASDPurchase, AppInstallLogKey, IXAppInstallCoordinator, NSDictionary, NSNumber, NSString, NSURL, NSUUID, StoreItemResponse, XDCDevice, XPCRequestToken;

@interface PurchaseInfo : ContextObject
{
    _Bool _arcade;	// 8 = 0x8
    _Bool _requireVendorID;	// 9 = 0x9
    NSString *_batchLogKey;	// 16 = 0x10
    unsigned long long _signpostID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001001dfaec
@property(readonly) unsigned long long signpostID; // @synthesize signpostID=_signpostID;
@property _Bool requireVendorID; // @synthesize requireVendorID=_requireVendorID;
@property(retain) NSString *batchLogKey; // @synthesize batchLogKey=_batchLogKey;
@property(getter=isArcade) _Bool arcade; // @synthesize arcade=_arcade;
- (void)updateGeneratedProperties;	// IMP=0x00000001001df3e0
@property unsigned long long coordinatorIntent;
@property unsigned long long coordinatorImportance;
@property unsigned long long autoInstallOverride;
@property(retain) IXAppInstallCoordinator *coordinator;
- (void)setCoordinatorID:(id)arg1;	// IMP=0x00000001001df194
- (id)coordinatorID;	// IMP=0x00000001001df180
- (void)setWatchType:(long long)arg1;	// IMP=0x00000001001df124
- (long long)watchType;	// IMP=0x00000001001df0d0
@property _Bool useLocalAuthAndSystemDialogs;
@property _Bool useJSONContentType;
@property long long updateType;
@property _Bool suppressEvaluatorDialogs;
@property _Bool suppressDialogs;
@property _Bool requireUniversal;
@property(getter=isRemoteInstall) _Bool remoteInstall;
@property long long purchaseType;
@property long long purchaseState;
@property _Bool purchaseOnly;
@property long long priority;
@property _Bool postMetrics;
@property(getter=isMachineBased) _Bool machineBased;
@property _Bool ignoreRequirePasswordRestriction;
@property _Bool generatedVendorID;
@property _Bool expectsIOSAppOnMac;
@property long long expectedSoftwarePlatform;
@property(getter=isDiscretionary) _Bool discretionary;
@property _Bool discoveredUpdate;
@property long long clientType;
@property(retain) NSString *vendorName;
@property(retain) NSString *temporaryBundleID;
@property(retain) XPCRequestToken *requestToken;
@property(retain) NSNumber *refreshInstallID;
@property(retain) NSString *referrerURL;
@property(retain) NSString *referrerName;
@property(retain) NSNumber *purchaseID;
@property(retain) AIMPurchaseEvent *purchaseEvent;
@property(retain) ASDPurchase *purchase;
@property(retain) NSURL *preflightURL;
@property(retain) NSNumber *originalPurchaserDSID;
@property(retain) NSNumber *metricsType;
@property(retain) AppInstallLogKey *logKey;
@property NSString *logCode;
@property(retain) NSNumber *itemID;
@property(retain) NSString *installedVariantID;
@property(retain) NSNumber *installedExternalVersionID;
@property(retain) StoreItemResponse *itemResponse;
@property(retain) NSString *itemName;
@property(retain) NSUUID *externalID;
@property(retain) XDCDevice *device;
@property(retain) NSString *companionBundleID;
@property(retain) AMSProcessInfo *clientInfo;
@property(retain) AMSBuyParams *buyParams;
@property(retain) NSURL *bundleURL;
@property(retain) NSString *bundleID;
@property(retain) NSDictionary *additionalHeaders;
@property(retain) ACAccount *account;
- (void)purchase_addVendorIDForApplication:(id)arg1;	// IMP=0x0000000100172f10
- (void)purchase_addThinningHeaders;	// IMP=0x0000000100172df0

@end

