/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface UIAccessibilityLoader : NSObject
+(void)_didLoadSystemAppAccessibilityBundle;
+(void)_accessibilityStartMiniServer;
+(void)_performInitialAccessibilityBundleLoad:(BOOL)arg1 monitorForFutureLoadEvents:(BOOL)arg2 trackingMode:(long long)arg3 ;
+(void)_accessibilityInitializeRuntimeOverrides;
+(void)_stringLocalizationStarted:(id)arg1 ;
+(void)_accessibilityInitializeSubclassRuntimeOverrides;
+(void)loadAccessibilityBundleForBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 forceLoad:(BOOL)arg3 loadSubbundles:(BOOL)arg4 loadAllAccessibilityInfo:(BOOL)arg5 ;
+(void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 loadSubbundles:(BOOL)arg3 ;
+(id)_accessibilityBundlesForBundle:(id)arg1 ;
+(void)loadAccessibilityBundleForBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 ;
+(void)loadAccessibilityBundleForBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 force:(BOOL)arg3 loadAllAccessibilityInfo:(BOOL)arg4 ;
+(void)_accessibilityStartServer;
+(void)_accessibilityReenabled;
+(void)_accessibilityStopServer;
+(BOOL)_accessibilityServerStarted;
+(BOOL)_accessibilityUIKitBundleLoaded;
+(BOOL)_accessibilityStringLocalizationCategoriesLoaded;
+(void)_didLoadPreboardAccessibilityBundle;
+(void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 ;
+(void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 force:(BOOL)arg3 loadAllAccessibilityInfo:(BOOL)arg4 ;
+(void)loadActualAccessibilityBundle:(id)arg1 didLoadCallback:(/*^block*/id)arg2 loadSubbundles:(BOOL)arg3 ;
@end

