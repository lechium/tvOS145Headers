//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MSDAnalyticsEventHandler : NSObject
{
    NSString *_storeID;	// 8 = 0x8
    NSDictionary *_rawDataKeyMapping;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000010002ef4c
- (void).cxx_destruct;	// IMP=0x0000000100030414
@property(retain) NSDictionary *rawDataKeyMapping; // @synthesize rawDataKeyMapping=_rawDataKeyMapping;
@property(retain) NSString *storeID; // @synthesize storeID=_storeID;
- (int)getDownloadSizeBucket:(long long)arg1;	// IMP=0x00000001000303d0
- (id)prepareCAData;	// IMP=0x0000000100030334
- (void)sendNetworkRawDataEvent:(id)arg1 forServerType:(id)arg2;	// IMP=0x000000010002feac
- (void)sendNetworkAverageBandwidthEvent:(long long)arg1 forServerType:(id)arg2;	// IMP=0x000000010002fda8
- (void)sendNetworkPacketLossEvent:(long long)arg1 forServerType:(id)arg2;	// IMP=0x000000010002fca4
- (void)sendNetworkAverageRTTEvent:(long long)arg1 forServerType:(id)arg2;	// IMP=0x000000010002fba0
- (void)sendFileDownloadSourceEvent:(id)arg1;	// IMP=0x000000010002faec
- (void)sendBgDownloadPausedEvent:(long long)arg1 forReason:(id)arg2;	// IMP=0x000000010002f9e8
- (void)sendContentUpdateCompletedEvent:(long long)arg1 withTimeTaken:(double)arg2 cachingHubAvailable:(_Bool)arg3 andComponentSuccess:(long long)arg4;	// IMP=0x000000010002f7d8
- (void)sendCachingHubAvailableEvent:(_Bool)arg1;	// IMP=0x000000010002f718
- (void)sendNetworkFailureEvent:(id)arg1 forServerType:(id)arg2;	// IMP=0x000000010002f5e0
- (void)sendEnrollmentFailureEvent:(id)arg1;	// IMP=0x000000010002f4e4
- (void)sendFMHFailureEvent:(id)arg1;	// IMP=0x000000010002f3e8
- (void)sendOSUpdateFailureEvent:(id)arg1;	// IMP=0x000000010002f2ec
- (void)sendiCloudSigninFailureEvent:(id)arg1;	// IMP=0x000000010002f1f0
- (void)sendContentUpdateFailureEvent:(id)arg1 isFatal:(_Bool)arg2;	// IMP=0x000000010002f0a4
- (id)init;	// IMP=0x000000010002efb8

@end

