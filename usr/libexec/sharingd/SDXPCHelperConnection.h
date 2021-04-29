//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSXPCConnection, UISUIActivityViewControllerConfiguration;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SDXPCHelperConnection : NSObject
{
    _Bool _activated;	// 8 = 0x8
    _Bool _needsTransactionRelease;	// 9 = 0x9
    _Bool _invalidateCalled;	// 10 = 0xa
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSXPCConnection *_connectionToService;	// 24 = 0x18
    unsigned long long _intervalID;	// 32 = 0x20
    NSString *_signpostName;	// 40 = 0x28
    long long _cacheAccessCount;	// 48 = 0x30
    NSMutableDictionary *_cacheAccessDict;	// 56 = 0x38
    struct os_unfair_lock_s _cacheAccessLock;	// 64 = 0x40
    NSMutableArray *_queuedBlocks;	// 72 = 0x48
    UISUIActivityViewControllerConfiguration *_latestHostConfig;	// 80 = 0x50
    CDUnknownBlockType _interruptionHandler;	// 88 = 0x58
    CDUnknownBlockType _invalidationHandler;	// 96 = 0x60
}

+ (id)identifierForColor:(id)arg1;	// IMP=0x000000010017dd94
+ (id)makeActivatedConnection;	// IMP=0x00000001001799b8
+ (void)updateCacheFromSFCGImageData:(id)arg1 cacheKey:(id)arg2 contactIDs:(id)arg3;	// IMP=0x0000000100179384
- (void).cxx_destruct;	// IMP=0x000000010017e414
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
- (void)setSessionKeepAliveTransactionIdentifier:(id)arg1;	// IMP=0x000000010017e2d8
- (void)_updateShareSheetHostConfiguration;	// IMP=0x000000010017e0fc
- (void)updateShareSheetHostConfiguration:(id)arg1;	// IMP=0x000000010017e0f0
- (id)keyDerivedFromRelevantTraitCollectionPropertiesWithOppositeUserInterfaceStyle;	// IMP=0x000000010017df78
- (id)keyDerivedFromRelevantTraitCollectionProperties;	// IMP=0x000000010017de08
- (id)loadBatchImageCacheData:(id)arg1 cacheKey:(CDUnknownBlockType)arg2 mapCacheHitImage:(CDUnknownBlockType)arg3 runProxy:(CDUnknownBlockType)arg4 type:(id)arg5;	// IMP=0x000000010017d870
- (struct CGImage *)CGImgForNearbyBadgeWithCount:(long long)arg1;	// IMP=0x000000010017d51c
- (struct CGImage *)CGImgForActionPlatterWithTitle:(id)arg1 tintColor:(id)arg2;	// IMP=0x000000010017d168
- (id)CGImgDataForActivityMoreListEntryForActivityTitle:(id)arg1 labelColor:(id)arg2 processOppositeColor:(_Bool)arg3;	// IMP=0x000000010017cbf0
- (struct CGImage *)CGImgForNameLabelWithString:(id)arg1 textColor:(id)arg2 maxNumberOfLines:(unsigned long long)arg3 isAirDrop:(_Bool)arg4 ignoreNameWrapping:(_Bool)arg5 processOppositeColor:(_Bool)arg6;	// IMP=0x000000010017c538
- (void)sendShareSheetInvocationMetricsWithAppBundleID:(id)arg1 numSuggestions:(long long)arg2 suggestionDisplayNames:(id)arg3 extensionsCacheResult:(id)arg4 isDarkMode:(_Bool)arg5 duration:(long long)arg6;	// IMP=0x000000010017c148
- (id)MD5HashOfStrings:(id)arg1;	// IMP=0x000000010017bf94
- (struct CGImage *)CGImageWithCacheKey:(id)arg1 contactIDs:(id)arg2 type:(id)arg3;	// IMP=0x000000010017be48
- (id)CGImgForUIActivityTitles:(id)arg1 foregroundColor:(id)arg2 processOppositeColor:(_Bool)arg3;	// IMP=0x000000010017b42c
- (id)getOppositeColor:(id)arg1;	// IMP=0x000000010017b240
- (id)monogramImagesForMultipleContacts:(id)arg1 style:(long long)arg2 diameter:(double)arg3 monogramsAsFlatImages:(_Bool)arg4;	// IMP=0x000000010017aa20
- (id)urlToCGImgDataForCallHandoffIconWithAppIconImageData:(id)arg1 contact:(id)arg2;	// IMP=0x000000010017a780
- (id)groupMonogramImageDataForContacts:(id)arg1 style:(long long)arg2 diameter:(double)arg3 monogramsAsFlatImages:(_Bool)arg4 processOppositeBackgroundStyle:(_Bool)arg5;	// IMP=0x000000010017a068
- (id)_loadGroupContactIdentityImage:(id)arg1;	// IMP=0x000000010017a060
- (id)copyConversationIdentityImageIconDataForImage:(id)arg1 forConversationIdentifier:(id)arg2 style:(long long)arg3 diameter:(double)arg4 monogramsAsFlatImages:(_Bool)arg5 isContactImage:(_Bool *)arg6;	// IMP=0x000000010017a058
- (id)monogramImageDataForContact:(id)arg1 style:(long long)arg2 diameter:(double)arg3 monogramsAsFlatImages:(_Bool)arg4 isContactImage:(_Bool *)arg5;	// IMP=0x0000000100179a68
- (id)whitelistedDownloadsFolderURL;	// IMP=0x0000000100179a60
- (void)dealloc;	// IMP=0x00000001001798d4
- (void)invalidate;	// IMP=0x0000000100179608
- (void)activate;	// IMP=0x0000000100179510
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000100179440

@end
