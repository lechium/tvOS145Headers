/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned duration : 1;
	unsigned timestamp : 1;
	unsigned closeReason : 1;
	unsigned deviceType : 1;
	unsigned errorCode : 1;
	unsigned role : 1;
} SCD_Struct_AW1;

typedef struct {
	unsigned isImportingFromPhotoLibraryEnabled : 1;
	unsigned isOwner : 1;
	unsigned isSharingFaceClassificationsEnabled : 1;
} SCD_Struct_AW2;

typedef struct {
	unsigned homeKitMultiUserSettingsValueInteger : 1;
	unsigned type : 1;
} SCD_Struct_AW3;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	unsigned timestamp : 1;
	unsigned duration : 1;
	unsigned resultErrorCode : 1;
	unsigned source : 1;
	unsigned wasNewUpdateFetched : 1;
} SCD_Struct_AW5;

typedef struct {
	unsigned timestamp : 1;
	unsigned certified : 1;
	unsigned consecutiveFailureCount : 1;
	unsigned duration : 1;
	unsigned errorCode : 1;
	unsigned source : 1;
	unsigned timeElapsedSinceFirstFailure : 1;
	unsigned transportType : 1;
	unsigned underlyingErrorCode : 1;
	unsigned isCached : 1;
	unsigned isNoeAccessory : 1;
	unsigned isRemote : 1;
	unsigned isRemoteAccessAllowed : 1;
	unsigned isRemotelyReachable : 1;
	unsigned isResidentAvailable : 1;
	unsigned isSentOverNoe : 1;
	unsigned isTimedWrite : 1;
	unsigned isWrite : 1;
} SCD_Struct_AW6;

typedef struct {
	unsigned containsValue : 1;
} SCD_Struct_AW7;

typedef struct {
	unsigned timestamp : 1;
	unsigned certified : 1;
	unsigned command : 1;
	unsigned transportType : 1;
} SCD_Struct_AW8;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_HM10;

typedef struct CGImage* CGImageRef;

typedef struct HMFRate {
	unsigned long long value;
	double period;
} HMFRate;

typedef struct {
	unsigned receivedConnSetup : 1;
	unsigned receivedNegotiationRequest : 1;
	unsigned receivedStartRequest : 1;
	unsigned sentConnSetup : 1;
	unsigned sentNegotiationRequest : 1;
	unsigned sentNegotiationResponse : 1;
	unsigned sentStartRequest : 1;
	unsigned sentStartResponse : 1;
} SCD_Struct_AW13;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct {
	unsigned duration : 1;
	unsigned startupDelay : 1;
	unsigned timestamp : 1;
	unsigned certified : 1;
	unsigned errorCode : 1;
	unsigned receivedFirstFrame : 1;
	unsigned resolutionOnClose : 1;
	unsigned underlyingErrorCode : 1;
	unsigned isLocal : 1;
	unsigned isStreamStarted : 1;
} SCD_Struct_AW15;

typedef struct {
	unsigned timestamp : 1;
	unsigned dataSyncState : 1;
	unsigned fetchCount : 1;
	unsigned homeDataMegabytesFetched : 1;
	unsigned homeDataMegabytesPushed : 1;
	unsigned homeManagerFetchCount : 1;
	unsigned homeManagerUploadCount : 1;
	unsigned homeZoneFetchCount : 1;
	unsigned homeZoneUploadCount : 1;
	unsigned legacyHomeDataMegabytesFetched : 1;
	unsigned legacyHomeDataMegabytesPushed : 1;
	unsigned pushCount : 1;
	unsigned uploadCount : 1;
	unsigned uploadErrorCount : 1;
	unsigned hasDecryptionFailed : 1;
	unsigned lastDecryptionFailed : 1;
	unsigned uploadMaximumDelayReached : 1;
} SCD_Struct_AW16;

typedef struct hmf_unfair_data_lock_s {
	os_unfair_lock_s lock;
} hmf_unfair_data_lock_s;

typedef struct {
	unsigned timestamp : 1;
	unsigned acceptedXPCRequestsCount : 1;
	unsigned activeDay : 1;
	unsigned activeDaysPerMonthCount : 1;
	unsigned averageSampledProcessMemoryUsage : 1;
	unsigned erroredXPCRequestsCount : 1;
	unsigned filteredXPCNotificationsCount : 1;
	unsigned hapBTLEConnectionPerReasonsCount : 1;
	unsigned hapBTLEConnectionsCount : 1;
	unsigned hapBTLEDiscoveriesCount : 1;
	unsigned hapIPInvalidationCount : 1;
	unsigned hapIPReceivedHTTPEventCount : 1;
	unsigned hapIPReceivedHTTPResponsesCount : 1;
	unsigned hapIPSentHTTPRequestsCount : 1;
	unsigned jetsamReasonHighwaterCount : 1;
	unsigned jetsamReasonOtherCount : 1;
	unsigned jetsamReasonProcessLimitCount : 1;
	unsigned jetsamReasonUnknownKillCount : 1;
	unsigned peakSampledProcessMemoryUsage : 1;
	unsigned processLaunchCount : 1;
	unsigned processMemoryPressureStateCriticalCount : 1;
	unsigned processMemoryPressureStateWarningCount : 1;
	unsigned remoteMessagesReceivedCount : 1;
	unsigned remoteMessagesSentCount : 1;
	unsigned sentXPCNotificationsCount : 1;
} SCD_Struct_AW18;

typedef union {
	unsigned char __u6_addr8[16];
	unsigned short __u6_addr16[8];
	unsigned __u6_addr32[4];
} SCD_Union_HM19;

typedef struct sockaddr {
	unsigned char sa_len;
	unsigned char sa_family;
	char sa_data[14];
} sockaddr;

typedef struct in_addr {
	unsigned s_addr;
} in_addr;

typedef struct in6_addr {
	SCD_Union_HM19 __u6_addr;
} in6_addr;

typedef struct sockaddr_in6 {
	unsigned char sin6_len;
	unsigned char sin6_family;
	unsigned short sin6_port;
	unsigned sin6_flowinfo;
	in6_addr sin6_addr;
	unsigned sin6_scope_id;
} sockaddr_in6;

typedef struct sockaddr_in {
	unsigned char sin_len;
	unsigned char sin_family;
	unsigned short sin_port;
	in_addr sin_addr;
	char sin_zero[8];
} sockaddr_in;

typedef union {
	sockaddr sa;
	sockaddr_in v4;
	sockaddr_in6 v6;
} SCD_Union_HM25;

typedef struct {
	unsigned currentMediaAccessoryFallbackMediaUserType : 1;
	unsigned enabledResidentsDeviceCapabilities : 1;
	unsigned firstHAPAccessoryAddedCohortWeek : 1;
	unsigned homeCreationCohortWeek : 1;
	unsigned homepodSynchLatency : 1;
	unsigned networkProtectionStatus : 1;
	unsigned numAccessories : 1;
	unsigned numAccessoriesNetworkProtectionAutoFullAccess : 1;
	unsigned numAccessoriesNetworkProtectionAutoProtectedHomeKitLAN : 1;
	unsigned numAccessoriesNetworkProtectionAutoProtectedMainLAN : 1;
	unsigned numAccessoriesNetworkProtectionFullAccess : 1;
	unsigned numAccessoriesNetworkProtectionHomeKitOnly : 1;
	unsigned numAccessoriesNetworkProtectionUnprotected : 1;
	unsigned numAccessoriesWiFiPPSKCredential : 1;
	unsigned numAccessoryServiceGroups : 1;
	unsigned numAdmins : 1;
	unsigned numAppleAudioAccessories : 1;
	unsigned numAppleMediaAccessories : 1;
	unsigned numAppleTVAccessories : 1;
	unsigned numBSPs : 1;
	unsigned numBridgedAccessories : 1;
	unsigned numBridgedTargetControllers : 1;
	unsigned numCameraAccessories : 1;
	unsigned numCameraAccessoriesReachabilityNotificationEnabled : 1;
	unsigned numCameraAccessoriesRecordingAudioEnabled : 1;
	unsigned numCameraAccessoriesRecordingEnabled : 1;
	unsigned numCameraAccessoriesSmartBulletinNotificationEnabled : 1;
	unsigned numCameraAccessoriesSupportRecording : 1;
	unsigned numCameraAccessoriesWithActivityZonesEnabled : 1;
	unsigned numCertifiedAccessories : 1;
	unsigned numCertifiedBridgedTargetControllers : 1;
	unsigned numCertifiedTargetControllers : 1;
	unsigned numConfiguredScenes : 1;
	unsigned numEventTriggers : 1;
	unsigned numHAPAccessories : 1;
	unsigned numHAPBLEAccessoriesSupportJet : 1;
	unsigned numHAPBTAccessories : 1;
	unsigned numHAPBatteryServiceAccessories : 1;
	unsigned numHAPIPAccessories : 1;
	unsigned numHAPIPAccessoriesSupportJet : 1;
	unsigned numHAPNoeAccessoriesSupportJet : 1;
	unsigned numHAPSpeakerServiceAccessories : 1;
	unsigned numHomePods : 1;
	unsigned numLightProfilesWithNaturalLightingEnabled : 1;
	unsigned numLightProfilesWithNaturalLightingSupported : 1;
	unsigned numLightProfilesWithNaturalLightingUsed : 1;
	unsigned numMediaSystems : 1;
	unsigned numMoe1Accessories : 1;
	unsigned numMoe2Accessories : 1;
	unsigned numNoeAccessories : 1;
	unsigned numNoeBRCap : 1;
	unsigned numNoeBRs : 1;
	unsigned numNoeFullCap : 1;
	unsigned numNoeMinCap : 1;
	unsigned numNoeRoutCap : 1;
	unsigned numNoeSleepCap : 1;
	unsigned numNotCertifiedAccessories : 1;
	unsigned numOfNonAcceptedParticipantsWithKnownCapability : 1;
	unsigned numOfParticipantsHaveAccepted : 1;
	unsigned numOfParticipantsHaveCloudShareIDAndHaveAccepted : 1;
	unsigned numOfParticipantsHaveCloudShareIDButNotAccepted : 1;
	unsigned numPoe2Count : 1;
	unsigned numPoeCount : 1;
	unsigned numPrimaryHAPSpeakerServiceAccessories : 1;
	unsigned numResidentsEnabled : 1;
	unsigned numRooms : 1;
	unsigned numScenes : 1;
	unsigned numServices : 1;
	unsigned numShortcuts : 1;
	unsigned numTargetControllers : 1;
	unsigned numTelevisionAccessories : 1;
	unsigned numTimerTriggers : 1;
	unsigned numTriggerOwnedConfiguredScenes : 1;
	unsigned numTriggers : 1;
	unsigned numUsers : 1;
	unsigned numWholeHouseAudioAccessories : 1;
	unsigned numZones : 1;
	unsigned autoThirdPartyJetEnable : 1;
	unsigned isOwner : 1;
	unsigned isPrimaryResident : 1;
	unsigned isResidentAvailable : 1;
	unsigned primaryReportingDevice : 1;
} SCD_Struct_AW26;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct {
	unsigned timestamp : 1;
	unsigned certified : 1;
	unsigned credentialType : 1;
	unsigned duration : 1;
	unsigned errorCode : 1;
	unsigned noeCapabilities : 1;
	unsigned noeOnboardDuration : 1;
	unsigned noeOnboardErrorCode : 1;
	unsigned noeStatus : 1;
	unsigned retryCount : 1;
	unsigned transportType : 1;
	unsigned isAdd : 1;
	unsigned isAddWithOwnershipProof : 1;
	unsigned isAddedViaWAC : 1;
	unsigned isBTOnboard : 1;
	unsigned isFirstHAPAccessoryInAnyHome : 1;
	unsigned isFirstHAPAccessoryInHome : 1;
	unsigned isNetworkRouterAdd : 1;
	unsigned isNetworkRouterReplace : 1;
	unsigned isNoeAccessory : 1;
	unsigned isNoeOnboard : 1;
	unsigned isSecureWAC : 1;
} SCD_Struct_AW29;

typedef struct FPSAPContextOpaque_* FPSAPContextOpaque_Ref;

typedef struct FairPlayHWInfo_ {
	unsigned IDLength;
	unsigned char ID[20];
} FairPlayHWInfo_;

typedef struct {
	unsigned byteLength : 1;
	unsigned byteOffset : 1;
	unsigned duration : 1;
	unsigned timeOffset : 1;
	unsigned height : 1;
	unsigned type : 1;
	unsigned width : 1;
} SCD_Struct_HM32;

typedef struct {
	unsigned field1[8];
} SCD_Struct_HM33;

typedef struct __IOHIDUserDevice* IOHIDUserDeviceRef;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 7;
	unsigned field3 : 16;
	6 field4;
	unsigned field5 : 16;
	6 field6;
	unsigned field7 : 1;
	unsigned field8 : 1;
	unsigned field9 : 1;
	unsigned field10 : 1;
	unsigned field11 : 1;
	unsigned field12 : 1;
	unsigned field13 : 1;
	unsigned field14 : 1;
	unsigned field15 : 1;
	unsigned field16 : 1;
	unsigned field17 : 1;
	unsigned field18 : 1;
} SCD_Struct_TV35;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 1;
	unsigned field8 : 1;
	unsigned field9 : 1;
	unsigned field10 : 1;
	unsigned field11 : 1;
	unsigned field12 : 1;
} SCD_Struct_TV36;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFArray* CFArrayRef;

typedef struct PairingSessionPrivate* PairingSessionPrivateRef;

