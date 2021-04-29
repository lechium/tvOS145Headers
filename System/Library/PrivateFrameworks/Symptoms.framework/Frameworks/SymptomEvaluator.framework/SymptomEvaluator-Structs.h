/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FlowClassification;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned timestamp : 1;
	unsigned totalActiveTimeSeconds : 1;
	unsigned totalInferredSleepTimeSeconds : 1;
	unsigned totalQuiesceTimeSeconds : 1;
	unsigned totalTimeSeconds : 1;
} SCD_Struct_AW1;

typedef struct {
	unsigned list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_AW2;

typedef struct {
	unsigned durationSeconds : 1;
	unsigned timestamp : 1;
	unsigned pollIntervalVersion : 1;
} SCD_Struct_AW3;

typedef struct {
	unsigned timestamp : 1;
	unsigned dataStalls : 1;
	unsigned lQM : 1;
	unsigned lastReportedRSSI : 1;
	unsigned loadedLQM : 1;
	unsigned networkType : 1;
	unsigned isLowInternetDL : 1;
	unsigned isLowInternetUL : 1;
	unsigned isNetworkReliable : 1;
} SCD_Struct_AW4;

typedef struct {
	unsigned limConnTimeoutRatePercent : 1;
	unsigned limDLMaxBWBps : 1;
	unsigned limPacketLossRatePercent : 1;
	unsigned limPacketOOORatePercent : 1;
	unsigned limRTTAvgMilliseconds : 1;
	unsigned limRTTMinMilliseconds : 1;
	unsigned limRTTVarMilliseconds : 1;
	unsigned limULMaxBWBps : 1;
	unsigned timestamp : 1;
	unsigned limDLDetected : 1;
	unsigned limInterfaceType : 1;
	unsigned limULDetected : 1;
} SCD_Struct_AW5;

typedef struct __CFString* CFStringRef;

typedef struct {
	int list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_AW7;

typedef struct {
	unsigned adviceHeldForSecs : 1;
	unsigned timestamp : 1;
	unsigned activationIdentifier : 1;
	unsigned advice : 1;
	unsigned advisor : 1;
	unsigned bailOutOf : 1;
	unsigned cellularDataUsage : 1;
	unsigned comingFromState : 1;
	unsigned egressMobilityCode : 1;
	unsigned egressTrigger : 1;
	unsigned egressTriggerMultiplier : 1;
	unsigned egressTriggerOn : 1;
	unsigned egressTriggerPercentagex100 : 1;
	unsigned ingressMobilityCode : 1;
	unsigned ingressTrigger : 1;
	unsigned ingressTriggerMultiplier : 1;
	unsigned ingressTriggerOn : 1;
	unsigned ingressTriggerPercentagex100 : 1;
	unsigned policy : 1;
	unsigned transitionsSuppressedByMobility : 1;
	unsigned kernelProbingActivated : 1;
} SCD_Struct_AW8;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
} SCD_Struct_NO9;

typedef struct {
	unsigned val[8];
} SCD_Struct_Ev10;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	char* relayName;
	BOOL symptomLike;
	BOOL scalarValues;
} SCD_Struct_Sy12;

typedef struct {
	unsigned lifetimeOldestItemSecs : 1;
	unsigned modelGraphPullups : 1;
	unsigned modelRecalls : 1;
	unsigned predictionQueries : 1;
	unsigned timeSinceLastTrainedSecs : 1;
	unsigned timestamp : 1;
	unsigned uniquePredictionClients : 1;
	unsigned calendarTypeMarker : 1;
	unsigned dayAlikeGroups : 1;
	unsigned networkType : 1;
	unsigned predictionErrorOver24hr1000 : 1;
	unsigned timeZoneMarker : 1;
	unsigned trainingCompletionCode : 1;
	unsigned trainingProgress1000 : 1;
} SCD_Struct_AW13;

typedef struct {
	unsigned bytesIn : 1;
	unsigned bytesOut : 1;
	unsigned connAttempts : 1;
	unsigned connSuccess : 1;
	unsigned cumulInternetOutageSecs : 1;
	unsigned lastReportedL2TxFail : 1;
	unsigned lastReportedL2TxFrames : 1;
	unsigned lastReportedL2TxReTry : 1;
	unsigned packetsIn : 1;
	unsigned packetsOut : 1;
	unsigned rttMinUsecs : 1;
	unsigned timestamp : 1;
	unsigned arpThreshold : 1;
	unsigned dnsServers : 1;
	unsigned lastReportedLQM : 1;
	unsigned lastReportedRSSI : 1;
	unsigned networkType : 1;
	unsigned penalizedDnsServers : 1;
	unsigned rxSignalThreshold : 1;
	unsigned arpThresholded : 1;
	unsigned hasInternetConn : 1;
	unsigned rxSignalThresholded : 1;
	unsigned supportsIPv4 : 1;
	unsigned supportsIPv6 : 1;
} SCD_Struct_AW14;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct {
	unsigned bytesIn : 1;
	unsigned bytesOut : 1;
	unsigned egressDlThroughputBps : 1;
	unsigned egressUlThroughputBps : 1;
	unsigned ingressDlThroughputBps : 1;
	unsigned ingressUlThroughputBps : 1;
	unsigned lastDisconnectedSecs : 1;
	unsigned packetsIn : 1;
	unsigned packetsOut : 1;
	unsigned periodDurationTCEnabledUsecs : 1;
	unsigned periodDurationUsecs : 1;
	unsigned timestamp : 1;
	unsigned uniqueActiveAppCount : 1;
	unsigned anyListener : 1;
	unsigned backgroundListeners : 1;
	unsigned countLQMTransitions : 1;
	unsigned egressLQM : 1;
	unsigned ingressLQM : 1;
	unsigned periodType : 1;
	unsigned tcCountFlowDispositionBURST : 1;
	unsigned tcCountFlowDispositionDefault : 1;
	unsigned tcCountFlowDispositionDrop : 1;
	unsigned tcCountFlowDispositionFGFacetime : 1;
	unsigned tcCountFlowDispositionFGIMSG : 1;
	unsigned tcCountFlowDispositionKNOWNOTHER : 1;
	unsigned tcCountFlowDispositionLARGE : 1;
	unsigned tcCountFlowDispositionLARGEDL : 1;
	unsigned tcCountFlowDispositionLARGEUL : 1;
	unsigned tcCountFlowDispositionMail : 1;
	unsigned tcCountFlowDispositionMaps : 1;
	unsigned tcCountFlowDispositionMediaserverd : 1;
	unsigned tcCountFlowDispositionMusic : 1;
	unsigned tcCountFlowDispositionNSURLSessiond : 1;
	unsigned tcCountFlowDispositionNews : 1;
	unsigned tcCountFlowDispositionPUSH : 1;
	unsigned tcCountFlowDispositionPodcasts : 1;
	unsigned tcCountFlowDispositionRTCReportingd : 1;
	unsigned tcCountFlowDispositionSIRI : 1;
	unsigned tcCountFlowDispositionSafari : 1;
	unsigned tcCountFlowDispositionStocks : 1;
	unsigned tcCountFlowDispositionTCAV : 1;
	unsigned tcCountFlowDispositionTCBK : 1;
	unsigned tcCountFlowDispositionTCBKSYS : 1;
	unsigned tcCountFlowDispositionTCCTL : 1;
	unsigned tcCountFlowDispositionTCOAM : 1;
	unsigned tcCountFlowDispositionTCRD : 1;
	unsigned tcCountFlowDispositionTCRV : 1;
	unsigned tcCountFlowDispositionTCVI : 1;
	unsigned tcCountFlowDispositionTCVO : 1;
	unsigned tcCountFlowDispositionUNKNOWNOTHER : 1;
	unsigned tcCountFlowDispositionUndefined : 1;
	unsigned tcCountFlowDispositionWeather : 1;
	unsigned tcCountFlowDispositionWebkit : 1;
	unsigned tcDampeningSuppressed : 1;
	unsigned tcUpdates : 1;
} SCD_Struct_AW16;

typedef struct {
	unsigned trafficClass;
	FlowClassification* flowClassification;
} SCD_Struct_Tr17;

typedef struct {
	unsigned timestamp : 1;
} SCD_Struct_AW18;

typedef struct __NStatManager* NStatManagerRef;

typedef struct __CTServerConnection* CTServerConnectionRef;

typedef struct __CFData* CFDataRef;

typedef struct __NStatSource* NStatSourceRef;

typedef struct {
	unsigned timestamp : 1;
	unsigned action : 1;
	unsigned networkType : 1;
	unsigned networksShownAtLeastOnceInLast24Hrs : 1;
	unsigned popUpShownForSecs : 1;
	unsigned timeSinceShownOnSameNetworkSecs : 1;
	unsigned timesShownOnAnyNetworkLast24Hrs : 1;
} SCD_Struct_AW23;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct timeval {
	long long tv_sec;
	int tv_usec;
} timeval;

typedef struct {
	unsigned dlPriorThroughputBytesPerSec : 1;
	unsigned dlSubsequentThroughputBytesPerSec : 1;
	unsigned newAdviceAdditionalFlags : 1;
	unsigned previousAdviceDuration : 1;
	unsigned timestamp : 1;
	unsigned ulPriorThroughputBytesPerSec : 1;
	unsigned ulSubsequentThroughputBytesPerSec : 1;
	unsigned newAdvice : 1;
	unsigned newAdviceCause : 1;
	unsigned previousAdvice : 1;
	unsigned previousAdviceCause : 1;
	unsigned previousAdviceInitialCause : 1;
	unsigned newScreenIsDark : 1;
	unsigned newScreenIsLocked : 1;
	unsigned previousScreenIsDark : 1;
	unsigned previousScreenIsLocked : 1;
} SCD_Struct_AW26;

typedef struct {
	unsigned lifetimeOldestItemSecs : 1;
	unsigned numberEntriesWithHomeLOI : 1;
	unsigned numberEntriesWithUnapprovedLOI : 1;
	unsigned numberEntriesWithUndefinedLOI : 1;
	unsigned numberEntriesWithWorkLOI : 1;
	unsigned scoredEntries : 1;
	unsigned scoredKnownGood : 1;
	unsigned timeSinceLastScoringSecs : 1;
	unsigned timestamp : 1;
	unsigned networkType : 1;
	unsigned scoringCompletionCode : 1;
} SCD_Struct_AW27;

typedef struct {
	unsigned timestamp : 1;
	unsigned networkType : 1;
} SCD_Struct_AW28;

typedef struct {
	unsigned ndfCount : 1;
	unsigned ndfDampeningFactor : 1;
	unsigned ndfDuration : 1;
	unsigned ndfLQM : 1;
	unsigned ndfSymptomPoint : 1;
	unsigned timestamp : 1;
	unsigned ndfSessionType : 1;
	unsigned ndfTriggerType : 1;
} SCD_Struct_AW29;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
	long long field4;
} SCD_Struct_Ne30;

typedef struct {
	_NSRange field1;
	char field2;
	int field3;
	int field4;
	long long field5;
	char field6;
} SCD_Struct_Ne31;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
	double field4;
	double field5;
	unsigned long long field6;
	unsigned long long field7;
	double field8;
	double field9;
	unsigned long long field10;
	unsigned long long field11;
	double field12;
	double field13;
} SCD_Struct_Ne32;

typedef struct __CFHost* CFHostRef;

typedef struct __CFSocket* CFSocketRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct wifiPropertyCounts {
	unsigned classCounter[32];
	unsigned classFlags;
	unsigned everSetClassFlags;
	unsigned everReportedClassFlags;
	unsigned lastReportedClassFlags;
	unsigned latencyPropertyCounter[8];
	unsigned jitterPropertyCounter[8];
	unsigned lossTolerancePropertyCounter[8];
	unsigned durationPropertyCounter[8];
	unsigned requiredBandwidthPropertyCounter[8];
	unsigned preferredBandwidthPropertyCounter[8];
	unsigned long long currentCombinedFlags;
	unsigned long long lastReportedCombinedFlags;
	unsigned long long everSetCombinedFlags;
	unsigned long long everReportedCombinedFlags;
} wifiPropertyCounts;

typedef struct BonjourBrowser* BonjourBrowserRef;

typedef struct _DNSServiceRef_t* DNSServiceRef_tRef;

typedef struct _transport_connection_s* transport_connection_sRef;

typedef struct __WiFiManagerClient* WiFiManagerClientRef;

typedef struct __WiFiDeviceClient* WiFiDeviceClientRef;

typedef struct {
	int re_magic;
	unsigned long long re_nsub;
	char* re_endp;
	const e_guts re_g;
} SCD_Struct_CL43;

typedef struct {
	int field1;
	unsigned long long field2;
	char* field3;
	const e_guts field4;
} SCD_Struct_CL44;

typedef struct _CCCryptor* CCCryptorRef;
