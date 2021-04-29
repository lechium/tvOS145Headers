//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableArray, NSMutableDictionary, NSString, W5DiagnosticsManager, W5LogItemRequestInternal, W5StatusManager, WADeviceAnalyticsClient;
@protocol OS_dispatch_queue;

@interface W5LogManager : NSObject
{
    W5StatusManager *_status;	// 8 = 0x8
    W5DiagnosticsManager *_diagnostics;	// 16 = 0x10
    NSString *_model;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSMutableArray *_pendingRequests;	// 40 = 0x28
    W5LogItemRequestInternal *_activeRequest;	// 48 = 0x30
    NSDateFormatter *_dateFormatter;	// 56 = 0x38
    NSMutableDictionary *_taskUUIDMap;	// 64 = 0x40
    NSMutableDictionary *_urlUUIDMap;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_debugLogQueue;	// 80 = 0x50
    NSMutableDictionary *_debugLogMap;	// 88 = 0x58
    NSMutableDictionary *_missingLogItemMap;	// 96 = 0x60
    struct __IOReportSubscriptionCF *_ioReportSubscription;	// 104 = 0x68
    unsigned long long _ioReportBaseMachAbsoluteTime;	// 112 = 0x70
    unsigned long long _ioReportDeltaMachAbsoluteTime;	// 120 = 0x78
    struct __CFDictionary *_ioReportChannels;	// 128 = 0x80
    struct __CFDictionary *_ioReportBase;	// 136 = 0x88
    struct __CFDictionary *_ioReportDelta;	// 144 = 0x90
    NSMutableDictionary *_leewayUUIDMap;	// 152 = 0x98
    NSMutableDictionary *_timestampUUIDMap;	// 160 = 0xa0
    NSMutableDictionary *_cachedSysdiagnoseURLMap;	// 168 = 0xa8
    NSMutableDictionary *_cachedSysdiagnoseBTURLMap;	// 176 = 0xb0
    WADeviceAnalyticsClient *_waDeviceAnalyticsClient;	// 184 = 0xb8
    CDUnknownBlockType _collectedItemCallback;	// 192 = 0xc0
    CDUnknownBlockType _collectLogItemCallback;	// 200 = 0xc8
    CDUnknownBlockType _pingCallback;	// 208 = 0xd0
}

+ (id)__temporaryDirectory;	// IMP=0x0000000100060858
+ (void)__parsePingOutput:(id)arg1 result:(id)arg2;	// IMP=0x000000010005f4ac
+ (id)__logBluetoothStatus:(id)arg1;	// IMP=0x000000010005c454
+ (id)__logWiFiStatus:(id)arg1;	// IMP=0x000000010005b610
+ (id)__logNetworkStatus:(id)arg1;	// IMP=0x000000010005b144
+ (id)__logTxPower:(struct apple80211_per_chain_power_data_get)arg1;	// IMP=0x000000010005b078
+ (id)__logBTCProfile:(struct apple80211_btc_profile_osx)arg1;	// IMP=0x000000010005acf0
+ (id)__logScanResults:(id)arg1;	// IMP=0x000000010005a3a4
+ (id)__descriptionForNetwork:(id)arg1;	// IMP=0x000000010005a01c
@property(copy, nonatomic) CDUnknownBlockType pingCallback; // @synthesize pingCallback=_pingCallback;
@property(copy, nonatomic) CDUnknownBlockType collectLogItemCallback; // @synthesize collectLogItemCallback=_collectLogItemCallback;
@property(copy, nonatomic) CDUnknownBlockType collectedItemCallback; // @synthesize collectedItemCallback=_collectedItemCallback;
- (void)__dumpCoreCaptureLogsWithReason:(id)arg1 component:(id)arg2;	// IMP=0x000000010006059c
- (_Bool)__wlCLIWithArguments:(id)arg1 outputFilePath:(id)arg2 outputData:(id)arg3;	// IMP=0x00000001000604ec
- (void)__wlCLIWithArguments:(id)arg1 outputFileHandle:(id)arg2 addCommand:(_Bool)arg3 addTimestamps:(_Bool)arg4;	// IMP=0x00000001000601e0
- (void)__wlCLIWithArguments:(id)arg1 outputFileHandle:(id)arg2;	// IMP=0x00000001000601cc
- (void)__runToolWithOutputFileHandle:(id)arg1 readFromStandardError:(_Bool)arg2 launchPath:(id)arg3 arguments:(id)arg4 addCommand:(_Bool)arg5 addTimestamps:(_Bool)arg6;	// IMP=0x000000010005f7d4
- (void)__runToolWithOutputFileHandle:(id)arg1 launchPath:(id)arg2 arguments:(id)arg3;	// IMP=0x000000010005f7b4
- (id)__pingUsingIMFoundationWithAddress:(id)arg1 timeout:(long long)arg2;	// IMP=0x000000010005ef64
- (id)__pingUsingCFNetworkWithAddress:(id)arg1 count:(long long)arg2 timeout:(long long)arg3 trafficClass:(id)arg4 networkServiceType:(id)arg5;	// IMP=0x000000010005e990
- (id)__ping6WithAddress:(id)arg1 count:(long long)arg2 wait:(double)arg3 trafficClass:(id)arg4 interfaceName:(id)arg5 dataLength:(unsigned long long)arg6;	// IMP=0x000000010005e4e0
- (id)__pingWithAddress:(id)arg1 count:(long long)arg2 timeout:(double)arg3 wait:(double)arg4 interval:(double)arg5 trafficClass:(id)arg6 interfaceName:(id)arg7 dataLength:(unsigned long long)arg8;	// IMP=0x000000010005df64
- (id)__logAWDLStatus:(id)arg1;	// IMP=0x000000010005cb5c
- (id)__logDiagnosticsTestResults:(id)arg1;	// IMP=0x000000010005aab0
- (id)__logDiagnosticsPingResults:(id)arg1;	// IMP=0x000000010005a67c
- (id)__runDiagnosticsTests:(id)arg1 configuration:(id)arg2 timeout:(long long)arg3 error:(id *)arg4;	// IMP=0x0000000100059a98
- (id)__collectIndividual:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000588f8
- (id)__collectLogItem:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100057bf0
- (id)__collectDatapathStats:(id)arg1;	// IMP=0x0000000100057360
- (id)__collectDeviceAnalyticsStore:(id)arg1;	// IMP=0x00000001000567ec
- (id)__collect3barsCache:(id)arg1;	// IMP=0x00000001000565d8
- (id)__collectWiFiPerfLogs:(id)arg1;	// IMP=0x0000000100056384
- (id)__collectWiFiDeviceConfig:(id)arg1;	// IMP=0x0000000100055588
- (id)__collectWiFiMemoryUsage:(id)arg1;	// IMP=0x0000000100055198
- (id)__collectPreviouslyCollected:(id)arg1;	// IMP=0x0000000100054dd0
- (id)__collectWiFiStatsCLI:(id)arg1;	// IMP=0x0000000100054af0
- (id)__collectWiFiStatsPost:(id)arg1;	// IMP=0x0000000100054764
- (id)__collectWiFiStatsPre:(id)arg1;	// IMP=0x00000001000546a0
- (void)__setupWiFiStats;	// IMP=0x0000000100054188
- (void)__teardownWiFiStats;	// IMP=0x0000000100054128
- (void)__startWiFiStats;	// IMP=0x00000001000540d8
- (void)__endWiFiStats;	// IMP=0x0000000100054058
- (id)__collect_mobilewifitool:(id)arg1;	// IMP=0x0000000100053e20
- (id)__collect_security:(id)arg1;	// IMP=0x0000000100053bc4
- (id)__collectMultiple:(id)arg1;	// IMP=0x0000000100052e28
- (id)__collectAdditionalLog:(id)arg1 url:(id)arg2;	// IMP=0x0000000100052c5c
- (id)__collectEventHistory:(id)arg1;	// IMP=0x0000000100051dac
- (id)__collectCrashesAndSpins24:(id)arg1;	// IMP=0x00000001000518a0
- (id)__collectBluetoothLogs:(id)arg1;	// IMP=0x00000001000515c4
- (id)__collectSharingLogs:(id)arg1;	// IMP=0x00000001000513d4
- (id)__collectWirelessProxLogs:(id)arg1;	// IMP=0x000000010005123c
- (id)__collectAirPlayLogs:(id)arg1;	// IMP=0x0000000100050f8c
- (id)__collectSystemLogs24:(id)arg1;	// IMP=0x0000000100050ee4
- (id)__collectWiFiVelocityLog:(id)arg1;	// IMP=0x0000000100050bc0
- (id)__collectSystemLogs:(id)arg1;	// IMP=0x00000001000507ac
- (id)__collectIPConfigurationLogs:(id)arg1;	// IMP=0x00000001000504fc
- (id)__collectEAP8021XLogs:(id)arg1;	// IMP=0x00000001000501c0
- (id)__collectWiFiLogsDump:(id)arg1;	// IMP=0x000000010005011c
- (id)__collectWiFiLogs:(id)arg1;	// IMP=0x000000010004fd0c
- (id)__collectWiFiLogs24:(id)arg1;	// IMP=0x000000010004f9c0
- (id)__collectFilteredWiFiManagerLogArchiveWithOutputURL:(id)arg1 compress:(_Bool)arg2 age:(unsigned long long)arg3;	// IMP=0x000000010004f7f4
- (void)__dumpWiFiLogs;	// IMP=0x000000010004f778
- (id)__possibleTempWiFiLogPaths;	// IMP=0x000000010004f76c
- (id)__collectNetworkPreferences:(id)arg1;	// IMP=0x000000010004f5d4
- (id)__collectWiFiPreferences:(id)arg1;	// IMP=0x000000010004efa0
- (id)__collectCoreCapture24:(id)arg1;	// IMP=0x000000010004eb7c
- (id)__collectCoreCapture:(id)arg1;	// IMP=0x000000010004e694
- (id)__collectCoreCaptureDump:(id)arg1;	// IMP=0x000000010004e574
- (void)__filterCoreCaptureContent:(id)arg1;	// IMP=0x000000010004e2a0
- (id)__possibleCoreCapturePathsWithComponent:(id)arg1;	// IMP=0x000000010004e17c
- (id)__mostRecentInDirectories:(id)arg1 matchingPrefix:(id)arg2 matchingSuffix:(id)arg3 excludingPrefix:(id)arg4 excludingSuffix:(id)arg5 maxAge:(double)arg6;	// IMP=0x000000010004dd00
- (id)__mostRecentInDirectories:(id)arg1 include:(id)arg2 exclude:(id)arg3 maxAge:(double)arg4;	// IMP=0x000000010004d890
- (id)__collectFileAtURL:(id)arg1 outputDirectory:(id)arg2 maxAge:(double)arg3 maxSize:(unsigned long long)arg4 compress:(_Bool)arg5 remainingSize:(unsigned long long *)arg6;	// IMP=0x000000010004cfd8
- (id)__collectFilesInDirectories:(id)arg1 include:(id)arg2 exclude:(id)arg3 maxAge:(double)arg4 maxCount:(unsigned long long)arg5 maxSize:(unsigned long long)arg6 outputDirectory:(id)arg7 compress:(_Bool)arg8 remainingSize:(unsigned long long *)arg9 contentFilter:(CDUnknownBlockType)arg10;	// IMP=0x000000010004c58c
- (unsigned long long)__calculateSizeAtPath:(id)arg1;	// IMP=0x000000010004c25c
- (id)__collect_pmset:(id)arg1;	// IMP=0x000000010004c0d0
- (id)__collectTCPDump_POST:(id)arg1;	// IMP=0x000000010004be48
- (id)__collectTCPDump_PRE:(id)arg1;	// IMP=0x000000010004b7ec
- (id)__collect_ndp:(id)arg1;	// IMP=0x000000010004b52c
- (id)__collect_sysdiagnose:(id)arg1;	// IMP=0x000000010004b030
- (id)__collect_hosts:(id)arg1;	// IMP=0x000000010004ae9c
- (id)__collect_darwinup:(id)arg1;	// IMP=0x000000010004ad10
- (id)__collect_spindump:(id)arg1;	// IMP=0x000000010004aad8
- (id)__collect_wl_cca_get_stats:(id)arg1;	// IMP=0x000000010004a950
- (id)__collect_wl_curpower:(id)arg1;	// IMP=0x000000010004a7c8
- (id)__collect_configd:(id)arg1;	// IMP=0x000000010004a630
- (id)__collectSystemConfiguration:(id)arg1;	// IMP=0x000000010004a49c
- (id)__collect_netstat:(id)arg1;	// IMP=0x000000010004a104
- (id)__collect_top:(id)arg1;	// IMP=0x0000000100049f78
- (id)__collect_ioreg:(id)arg1;	// IMP=0x0000000100049dec
- (id)__collect_kextstat:(id)arg1;	// IMP=0x0000000100049c64
- (id)__collect_traceroute:(id)arg1;	// IMP=0x0000000100049a28
- (id)__collect_ipconfig:(id)arg1;	// IMP=0x000000010004983c
- (id)__collect_ifconfig:(id)arg1;	// IMP=0x0000000100049628
- (id)__collect_CFNetworkPing:(id)arg1;	// IMP=0x0000000100048964
- (id)__collect_ping:(id)arg1;	// IMP=0x00000001000475a4
- (id)__collect_IMFoundationPing:(id)arg1;	// IMP=0x0000000100046e48
- (id)__collectLogItemCallout:(id)arg1 baseURL:(id *)arg2 error:(id *)arg3;	// IMP=0x0000000100046b74
- (id)__collectSystemProfiler:(id)arg1;	// IMP=0x00000001000469b0
- (id)__collect_arp:(id)arg1;	// IMP=0x000000010004679c
- (id)__collect_swvers:(id)arg1;	// IMP=0x0000000100046614
- (id)__collectBluetoothStatus:(id)arg1;	// IMP=0x0000000100046354
- (id)__collectWiFiStatus:(id)arg1;	// IMP=0x0000000100046094
- (id)__collectNetworkStatus:(id)arg1;	// IMP=0x0000000100045dd4
- (id)__collectAWDLStatus:(id)arg1;	// IMP=0x0000000100045a6c
- (id)__collectBonjourRecords:(id)arg1;	// IMP=0x00000001000455ac
- (id)__resolveBonjourInstance:(id)arg1 serviceType:(id)arg2 duration:(unsigned long long)arg3;	// IMP=0x0000000100045488
- (id)__browseBonjourInstancesWithServiceType:(id)arg1 duration:(unsigned long long)arg2;	// IMP=0x00000001000451e0
- (id)__collectLeakyAPStats:(id)arg1;	// IMP=0x0000000100044f9c
- (id)__collectPerSSIDDiagnosticsHistory:(id)arg1;	// IMP=0x0000000100044ba0
- (id)__collectDiagnostics:(id)arg1;	// IMP=0x0000000100044820
- (id)__collectWiFiScanResults:(id)arg1;	// IMP=0x00000001000445c0
- (void)__runRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100042c44
- (id)__expandLogItems:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000100042854
- (id)__basicWiFiLogsWithFilteredContent:(_Bool)arg1 useMegaWiFiProfileLimits:(_Bool)arg2;	// IMP=0x0000000100041ea4
- (id)__model;	// IMP=0x0000000100041db0
- (id)__logItemsForBTSysdiagnoseWithFilteredContent:(_Bool)arg1;	// IMP=0x00000001000417b4
- (id)__logItemsForSysdiagnoseWithNoTimeoutAndFilteredContent:(_Bool)arg1 useMegaWiFiProfileLimits:(_Bool)arg2;	// IMP=0x0000000100040d14
- (id)__logItemsForSysdiagnoseWithFilteredContent:(_Bool)arg1 useMegaWiFiProfileLimits:(_Bool)arg2;	// IMP=0x000000010003fe74
- (id)__fastConnectivityDiagnosticsLogItemWithTimeout:(double)arg1;	// IMP=0x000000010003fd5c
- (id)__connectivityDiagnosticsLogItemWithTimeout:(double)arg1;	// IMP=0x000000010003f8e8
- (id)__environmentDiagnosticsLogItemWithTimeout:(double)arg1;	// IMP=0x000000010003f64c
- (id)__configurationDiagnosticsLogItemWithTimeout:(double)arg1;	// IMP=0x000000010003f0d8
- (id)__concurrentConnectivityDiagnosticsTest;	// IMP=0x000000010003ecfc
- (id)__logItemsForInternalWiFiSettings;	// IMP=0x000000010003ecf0
- (id)__logItemsForTapToRadar;	// IMP=0x000000010003ece4
- (id)__logItemsForFeedbackAssistant;	// IMP=0x000000010003ecd8
- (id)__logItemsForWiFiDiagnosticsExtension;	// IMP=0x000000010003e2a8
- (id)__logItemsForWiFiDiagnosticsApp;	// IMP=0x000000010003e1d4
- (id)__logItemsForDatapathStallEventWithFilteredContent:(_Bool)arg1;	// IMP=0x000000010003da3c
- (id)__logItemsForBackgroundEventWithReason:(id)arg1 filteredContent:(_Bool)arg2;	// IMP=0x000000010003d550
- (id)__logItemsForABCWithReason:(id)arg1 filteredContent:(_Bool)arg2;	// IMP=0x000000010003d544
- (id)__logItemsForDumpLogsEventWithReason:(id)arg1 filteredContent:(_Bool)arg2;	// IMP=0x000000010003cfd8
- (void)__nextRequest;	// IMP=0x000000010003c350
- (void)__purgeFilesInDirectory:(id)arg1 matching:(id)arg2 maxAge:(unsigned long long)arg3 maxCount:(unsigned long long)arg4;	// IMP=0x000000010003bdc0
- (id)__pendingRequestWithUUID:(id)arg1;	// IMP=0x000000010003bc80
- (void)teardownAndNotify:(CDUnknownBlockType)arg1;	// IMP=0x000000010003babc
- (void)cancelRequestWithUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003b88c
- (void)addRequest:(id)arg1;	// IMP=0x0000000100039cbc
- (_Bool)__logItems:(id)arg1 containsID:(long long)arg2;	// IMP=0x0000000100039b9c
- (void)__replyWithCachedSysdiagnoseContentForRequest:(id)arg1 temporaryURL:(id)arg2;	// IMP=0x0000000100039818
- (void)dealloc;	// IMP=0x0000000100039474
- (id)initWithStatusManager:(id)arg1 diagnosticsManager:(id)arg2;	// IMP=0x00000001000392a0

@end
