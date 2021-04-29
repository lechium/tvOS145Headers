//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "WAAWDMessageSubmitterConfigChangedDelegate-Protocol.h"
#import "WAIOReporterPersistenceDelegate-Protocol.h"
#import "WAIOReporterPopulatorMessageDelegate-Protocol.h"
#import "WAQueryableMessageDelegate-Protocol.h"
#import "WAXPCConnectionDelegate-Protocol.h"

@class AnalyticsProcessor, DPSQuickRecoveryRecommendationEngine, DatapathMetricStream, ManagedConfiguration, NSDate, NSMutableArray, NSMutableDictionary, NSString, NSURL, NSXPCListener, RecommendationEngine, WACoreCapture, WAIOReporterMessagePopulator, WAMessageAWDStore;
@protocol OS_dispatch_queue;

@interface WAEngine : NSObject <WAQueryableMessageDelegate, WAIOReporterPopulatorMessageDelegate, WAAWDMessageSubmitterConfigChangedDelegate, WAIOReporterPersistenceDelegate, NSXPCListenerDelegate, WAXPCConnectionDelegate>
{
    _Bool _dpsStudyInProgress;	// 8 = 0x8
    _Bool _dpsCurrentlyGatheringConsecutiveSamples;	// 9 = 0x9
    _Bool _slowWiFiStudyInProgress;	// 10 = 0xa
    _Bool _analyticsProcessorIsReady;	// 11 = 0xb
    int _dpsAction;	// 12 = 0xc
    int _keybagToken;	// 16 = 0x10
    NSMutableDictionary *_submitterMap;	// 24 = 0x18
    NSMutableDictionary *_queryableMessageRegistrationMap;	// 32 = 0x20
    NSMutableDictionary *_processTokenToGroupTypeMap;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_engineQ;	// 48 = 0x30
    WAMessageAWDStore *_messageStore;	// 56 = 0x38
    WAIOReporterMessagePopulator *_iorMessagePopulator;	// 64 = 0x40
    NSXPCListener *_listener;	// 72 = 0x48
    NSMutableDictionary *_processTokenToXPCConnectionMap;	// 80 = 0x50
    NSMutableArray *_pendingUntokenedConnections;	// 88 = 0x58
    NSMutableDictionary *_cachedModelObjectsKeyToMessageMap;	// 96 = 0x60
    NSMutableDictionary *_interfaceNameToApple80211InstanceMap;	// 104 = 0x68
    NSString *_infraInterfaceName;	// 112 = 0x70
    RecommendationEngine *_recommendationEngine;	// 120 = 0x78
    DPSQuickRecoveryRecommendationEngine *_dpsQuickRecoveryEngine;	// 128 = 0x80
    NSString *_wifiChipSet;	// 136 = 0x88
    NSDate *_dpsNotificationRecievedTime;	// 144 = 0x90
    WACoreCapture *_coreCaptureControl;	// 152 = 0x98
    NSObject<OS_dispatch_queue> *_studyQueue;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_dpsReadWriteSerialQueue;	// 168 = 0xa8
    NSMutableArray *_dpsnToAppend;	// 176 = 0xb0
    NSMutableArray *_dpsapToAppend;	// 184 = 0xb8
    NSMutableArray *_dpscsToAppend;	// 192 = 0xc0
    NSMutableArray *_assocDiffToAppend;	// 200 = 0xc8
    NSMutableArray *_swfnToAppend;	// 208 = 0xd0
    NSObject<OS_dispatch_queue> *_fileHandlingQ;	// 216 = 0xd8
    NSURL *_wifianalyticsTmpDir;	// 224 = 0xe0
    NSObject<OS_dispatch_queue> *_mutexQueue;	// 232 = 0xe8
    AnalyticsProcessor *_analyticsProcessor;	// 240 = 0xf0
    double _analyticsProcessingTimeIntervalSecs;	// 248 = 0xf8
    double _analyticsAgeOutTimeIntervalSecs;	// 256 = 0x100
    NSObject<OS_dispatch_queue> *_manageConfigQueue;	// 264 = 0x108
    ManagedConfiguration *_managedConfiguration;	// 272 = 0x110
    DatapathMetricStream *_datapathMetricStream;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x0000000100055aa4
@property(retain, nonatomic) DatapathMetricStream *datapathMetricStream; // @synthesize datapathMetricStream=_datapathMetricStream;
@property(retain, nonatomic) ManagedConfiguration *managedConfiguration; // @synthesize managedConfiguration=_managedConfiguration;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *manageConfigQueue; // @synthesize manageConfigQueue=_manageConfigQueue;
@property(nonatomic) int keybagToken; // @synthesize keybagToken=_keybagToken;
@property(nonatomic) _Bool analyticsProcessorIsReady; // @synthesize analyticsProcessorIsReady=_analyticsProcessorIsReady;
@property(nonatomic) double analyticsAgeOutTimeIntervalSecs; // @synthesize analyticsAgeOutTimeIntervalSecs=_analyticsAgeOutTimeIntervalSecs;
@property(nonatomic) double analyticsProcessingTimeIntervalSecs; // @synthesize analyticsProcessingTimeIntervalSecs=_analyticsProcessingTimeIntervalSecs;
@property(retain, nonatomic) AnalyticsProcessor *analyticsProcessor; // @synthesize analyticsProcessor=_analyticsProcessor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mutexQueue; // @synthesize mutexQueue=_mutexQueue;
@property(retain, nonatomic) NSURL *wifianalyticsTmpDir; // @synthesize wifianalyticsTmpDir=_wifianalyticsTmpDir;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fileHandlingQ; // @synthesize fileHandlingQ=_fileHandlingQ;
@property(nonatomic) int dpsAction; // @synthesize dpsAction=_dpsAction;
@property(retain, nonatomic) NSMutableArray *swfnToAppend; // @synthesize swfnToAppend=_swfnToAppend;
@property(retain, nonatomic) NSMutableArray *assocDiffToAppend; // @synthesize assocDiffToAppend=_assocDiffToAppend;
@property(retain, nonatomic) NSMutableArray *dpscsToAppend; // @synthesize dpscsToAppend=_dpscsToAppend;
@property(retain, nonatomic) NSMutableArray *dpsapToAppend; // @synthesize dpsapToAppend=_dpsapToAppend;
@property(retain, nonatomic) NSMutableArray *dpsnToAppend; // @synthesize dpsnToAppend=_dpsnToAppend;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dpsReadWriteSerialQueue; // @synthesize dpsReadWriteSerialQueue=_dpsReadWriteSerialQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *studyQueue; // @synthesize studyQueue=_studyQueue;
@property(retain, nonatomic) WACoreCapture *coreCaptureControl; // @synthesize coreCaptureControl=_coreCaptureControl;
@property(retain, nonatomic) NSDate *dpsNotificationRecievedTime; // @synthesize dpsNotificationRecievedTime=_dpsNotificationRecievedTime;
@property(retain, nonatomic) NSString *wifiChipSet; // @synthesize wifiChipSet=_wifiChipSet;
@property(retain, nonatomic) DPSQuickRecoveryRecommendationEngine *dpsQuickRecoveryEngine; // @synthesize dpsQuickRecoveryEngine=_dpsQuickRecoveryEngine;
@property(nonatomic) _Bool slowWiFiStudyInProgress; // @synthesize slowWiFiStudyInProgress=_slowWiFiStudyInProgress;
@property(nonatomic) _Bool dpsCurrentlyGatheringConsecutiveSamples; // @synthesize dpsCurrentlyGatheringConsecutiveSamples=_dpsCurrentlyGatheringConsecutiveSamples;
@property(nonatomic) _Bool dpsStudyInProgress; // @synthesize dpsStudyInProgress=_dpsStudyInProgress;
@property(retain, nonatomic) RecommendationEngine *recommendationEngine; // @synthesize recommendationEngine=_recommendationEngine;
@property(retain, nonatomic) NSString *infraInterfaceName; // @synthesize infraInterfaceName=_infraInterfaceName;
@property(retain, nonatomic) NSMutableDictionary *interfaceNameToApple80211InstanceMap; // @synthesize interfaceNameToApple80211InstanceMap=_interfaceNameToApple80211InstanceMap;
@property(retain, nonatomic) NSMutableDictionary *cachedModelObjectsKeyToMessageMap; // @synthesize cachedModelObjectsKeyToMessageMap=_cachedModelObjectsKeyToMessageMap;
@property(retain, nonatomic) NSMutableArray *pendingUntokenedConnections; // @synthesize pendingUntokenedConnections=_pendingUntokenedConnections;
@property(retain, nonatomic) NSMutableDictionary *processTokenToXPCConnectionMap; // @synthesize processTokenToXPCConnectionMap=_processTokenToXPCConnectionMap;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) WAIOReporterMessagePopulator *iorMessagePopulator; // @synthesize iorMessagePopulator=_iorMessagePopulator;
@property(retain, nonatomic) WAMessageAWDStore *messageStore; // @synthesize messageStore=_messageStore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *engineQ; // @synthesize engineQ=_engineQ;
@property(retain, nonatomic) NSMutableDictionary *processTokenToGroupTypeMap; // @synthesize processTokenToGroupTypeMap=_processTokenToGroupTypeMap;
@property(retain, nonatomic) NSMutableDictionary *queryableMessageRegistrationMap; // @synthesize queryableMessageRegistrationMap=_queryableMessageRegistrationMap;
@property(retain, nonatomic) NSMutableDictionary *submitterMap; // @synthesize submitterMap=_submitterMap;
- (void)processWiFiAnalyticsMessageJSONFilesInTmpDir;	// IMP=0x0000000100054ec4
- (_Bool)canProcessWiFiAnalyticsMessageJSONFiles:(id)arg1;	// IMP=0x0000000100054bf8
- (id)_summarizeDeviceAnalyticsForNetwork:(id)arg1 maxAgeInDays:(unsigned long long)arg2;	// IMP=0x0000000100054b70
- (id)getValueForKeyFromUserDefaults:(id)arg1;	// IMP=0x0000000100054a4c
- (void)setValueForKeyToUserDefaults:(id)arg1 forKey:(id)arg2;	// IMP=0x000000010005490c
- (id)_getDeviceAnalyticsConfiguration;	// IMP=0x000000010005470c
- (id)_setDeviceAnalyticsConfiguration:(id)arg1;	// IMP=0x000000010005407c
- (void)_trigger11AXPerfStudyAndReply:(CDUnknownBlockType)arg1 forProcessWithToken:(id)arg2 forInterface:(id)arg3;	// IMP=0x0000000100052bf0
- (void)persist;	// IMP=0x0000000100052be4
- (void)configDidChangeForGroupType:(long long)arg1 withConfiguredMetricIDs:(id)arg2 andInterestedMetricIDs:(id)arg3;	// IMP=0x0000000100052478
- (id)getNewMessageForKey:(id)arg1 groupType:(long long)arg2 forProcessWithToken:(id)arg3;	// IMP=0x00000001000522c4
- (void)_triggerDatapathDiagnosticsAndCollectUpdates:(long long)arg1 forProcessToken:(id)arg2 waMessage:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x000000010005206c
- (void)_triggerSlowWiFiStudy:(long long)arg1 forProcessToken:(id)arg2 waMessage:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x000000010005195c
- (void)gatherConsecutiveLinkQualitySamples:(long long)arg1 forProcessToken:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010005015c
- (void)_triggerDPSStudy:(long long)arg1 forProcessToken:(id)arg2 waMessage:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x000000010004ef2c
- (void)gatherConsecutiveDatapathReadings:(long long)arg1 forProcessToken:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010004b6a4
- (void)populateChannelInfo:(id)arg1;	// IMP=0x000000010004b338
- (void)_triggerQueryForNWActivity:(long long)arg1 forProcessToken:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100049f8c
- (void)_examinePeerMessageForIntegrity:(id)arg1;	// IMP=0x0000000100049928
- (void)_trapFWWithReason:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000495fc
- (void)_trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010004934c
- (void)_purgeGroupTypeIfNecessary:(long long)arg1;	// IMP=0x0000000100048ed0
- (void)_informQueryableHandlersOfConnectionWithProcessToken:(id)arg1;	// IMP=0x0000000100048d44
- (void)_clearMessageStoreAndReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100048cb8
- (void)_killDaemonAndReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100048c38
- (id)_registerForQueryableMessageWithidentifierDict:(id)arg1 groupType:(long long)arg2 forProcessToken:(id)arg3;	// IMP=0x0000000100048414
- (id)_getMessageByUUID:(id)arg1 forProcessToken:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000482a0
- (id)_submitWiFiAnalyticsMessage:(id)arg1;	// IMP=0x0000000100048094
- (void)_processWAMessageForLogging:(id)arg1;	// IMP=0x0000000100047cc8
- (void)_processWAMessageForCoreAnalytics:(id)arg1;	// IMP=0x0000000100047944
- (id)_submitMessage:(id)arg1 groupType:(long long)arg2 forProcessToken:(id)arg3;	// IMP=0x0000000100047480
- (id)_ingestMessage:(id)arg1 forProcessToken:(id)arg2;	// IMP=0x00000001000473a4
- (void)_getNewMessageForKey:(id)arg1 groupType:(long long)arg2 forProcessToken:(id)arg3 shouldCheckForPrePopulation:(_Bool)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x0000000100046fe0
- (id)_cachedModelObjectsMessageForGroupType:(long long)arg1 key:(id)arg2;	// IMP=0x0000000100046c28
- (id)_getMessagesModelForProcessToken:(id)arg1 groupType:(long long)arg2 andError:(id *)arg3;	// IMP=0x0000000100046670
- (void)_initSubmitterAndQueryableRegistrationForProcessToken:(id)arg1 andGroupType:(long long)arg2;	// IMP=0x0000000100045cd4
- (void)_removePersistenceFile;	// IMP=0x0000000100045738
- (void)_unpersist;	// IMP=0x0000000100043770
- (void)_persist;	// IMP=0x00000001000422e0
- (void)_prepareToTerminate;	// IMP=0x0000000100042068
- (void)prepareToTerminateAnyReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100041e60
- (void)sendWakeUpNotificationForProcessWithName:(id)arg1;	// IMP=0x0000000100041c18
- (id)getXPCConnectionForProcessToken:(id)arg1;	// IMP=0x0000000100041a7c
- (void)xpcConnection:(id)arg1 summarizeDeviceAnalyticsForNetwork:(id)arg2 maxAgeInDays:(unsigned long long)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100041704
- (void)xpcConnection:(id)arg1 getDeviceAnalyticsConfigurationAndReply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000413d4
- (void)xpcConnection:(id)arg1 setDeviceAnalyticsConfiguration:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100041080
- (void)xpcConnection:(id)arg1 trigger11axPerfStudyAndReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100040c6c
- (void)xpcConnection:(id)arg1 clientConfigChangeDelegateSetForGroupType:(long long)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100040878
- (void)xpcConnection:(id)arg1 triggerDatapathDiagnosticsAndCollectUpdates:(long long)arg2 waMessage:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x00000001000404d0
- (void)xpcConnection:(id)arg1 triggerQueryForNWActivity:(long long)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100040158
- (void)xpcConnection:(id)arg1 trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010003fd9c
- (void)xpcConnection:(id)arg1 clearMessageStoreAndReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003fa0c
- (void)xpcConnection:(id)arg1 killDaemonAndReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003f648
- (void)xpcConnection:(id)arg1 getMessageForUUID:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010003f2cc
- (void)xpcConnection:(id)arg1 getNewMessageForKey:(id)arg2 groupType:(long long)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x000000010003ee54
- (void)xpcConnection:(id)arg1 registerMessageGroup:(long long)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010003e604
- (void)xpcConnection:(id)arg1 registerForQueryableMessageWithidentifierDict:(id)arg2 groupType:(long long)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x000000010003e30c
- (void)xpcConnection:(id)arg1 getMessagesModelForGroupType:(long long)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010003df1c
- (void)xpcConnection:(id)arg1 ingestMessage:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010003dbc0
- (void)xpcConnection:(id)arg1 submitWiFiAnalyticsMessage:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010003d86c
- (void)xpcConnection:(id)arg1 submitMessage:(id)arg2 groupType:(long long)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x000000010003d45c
- (void)xpcConnection:(id)arg1 establishConnectionWithToken:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010003c6d0
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010003c424
- (_Bool)queryInfraInterfaceInstanceAndChip;	// IMP=0x000000010003bcbc
- (void)run;	// IMP=0x000000010003bbc4
- (id)wifianalyticsTmpDirectory;	// IMP=0x000000010003b8a0
- (void)getDiagnosticMetricsAndReply:(long long)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010003b5fc
- (id)init;	// IMP=0x000000010003afe8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
