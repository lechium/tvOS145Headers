/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/CoreHAP-Structs.h>
#import <CoreHAP/HAPAccessoryServer.h>
#import <libobjc.A.dylib/HAPAccessoryServerMetricProtocol.h>
#import <libobjc.A.dylib/HAPHTTPClientDelegate.h>
#import <libobjc.A.dylib/HAPHTTPClientDebugDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HAPAuthSessionDelegate.h>
#import <libobjc.A.dylib/HMFNetMonitorDelegate.h>
#import <libobjc.A.dylib/HAPWACAccessoryClientDelegate.h>

@protocol OS_dispatch_queue;
@class HMFUnfairLock, NSDictionary, NSObject, HMFTimer, NSString, NSData, HAPAccessoryServerBrowserIP, NSArray, NSMutableArray, HAPAccessory, HAPAuthSession, HAPAccessoryProtocolInfo, NSMutableSet, HMFBlockOperation, NSOperationQueue, HAPAccessoryWiFiConfiguration, HMFNetMonitor, HAPHTTPClient, HAPWACAccessory, HMFNetAddress;

@interface HAPAccessoryServerIP : HAPAccessoryServer <HAPAccessoryServerMetricProtocol, HAPHTTPClientDelegate, HAPHTTPClientDebugDelegate, HMFTimerDelegate, HAPAuthSessionDelegate, HMFNetMonitorDelegate, HAPWACAccessoryClientDelegate> {

	PairingSessionPrivateRef _pairingSession;
	unsigned long long _featureFlags;
	HMFUnfairLock* _lock;
	BOOL _retryingPairSetup;
	BOOL _establishingSecureConnection;
	BOOL _wacAccessory;
	BOOL _wacComplete;
	BOOL _wacLegacy;
	BOOL _preSoftAuthWacStarted;
	BOOL _postSoftAuthWacStarted;
	BOOL _bonjourDiscoveryPending;
	BOOL _hasUpdatedBonjour;
	BOOL _authenticated;
	BOOL _hasAttributeDatabase;
	BOOL _hasTunnelService;
	BOOL _econnresetRetryInProgress;
	BOOL _invalidated;
	BOOL _continuingLegacyWACpairing;
	BOOL _wacStarted;
	BOOL _hasStartedPairing;
	BOOL _pairingRequestPending;
	BOOL _tokenValidationPending;
	BOOL _handlingInvalidSetupCode;
	int _cancelPairingErr;
	NSDictionary* _bonjourDeviceInfo;
	NSObject*<OS_dispatch_queue> _reachabilityQueue;
	HMFTimer* _reachabilityEventTimer;
	double _minimumReachabilityPingInterval;
	NSString* _model;
	NSString* _sourceVersion;
	unsigned long long _statusFlags;
	NSData* _token;
	unsigned long long _metricHAPIPInvalidationCount;
	unsigned long long _metricHAPIPHTTPEventsCount;
	unsigned long long _metricHAPIPHTTPRequestsCount;
	unsigned long long _metricHAPIPHTTPResponsesCount;
	HAPAccessoryServerBrowserIP* _browser;
	NSArray* _ipServices;
	NSMutableArray* _queuedOperations;
	HAPAccessory* _primaryAccessoryForServer;
	HAPAuthSession* _authSession;
	HAPAccessoryProtocolInfo* _authenticatedProtocolInfo;
	/*^block*/id _pairVerifyCompletionBlock;
	NSString* _controllerUsername;
	/*^block*/id _netServiceResolveCompletionBlock;
	NSMutableSet* _resolvers;
	HMFBlockOperation* _pairOperation;
	NSOperationQueue* _clientOperationQueue;
	NSData* _ownershipToken;
	HAPAccessoryWiFiConfiguration* _wifiConfiguration;
	HMFTimer* _bonjourEventTimer;
	HMFNetMonitor* _networkMonitor;
	HAPHTTPClient* _httpClient;
	HAPWACAccessory* _hapWACAccessory;

}

@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long metricHAPIPInvalidationCount;                                      //@synthesize metricHAPIPInvalidationCount=_metricHAPIPInvalidationCount - In the implementation block
@property (assign,nonatomic) unsigned long long metricHAPIPHTTPEventsCount;                                        //@synthesize metricHAPIPHTTPEventsCount=_metricHAPIPHTTPEventsCount - In the implementation block
@property (assign,nonatomic) unsigned long long metricHAPIPHTTPRequestsCount;                                      //@synthesize metricHAPIPHTTPRequestsCount=_metricHAPIPHTTPRequestsCount - In the implementation block
@property (assign,nonatomic) unsigned long long metricHAPIPHTTPResponsesCount;                                     //@synthesize metricHAPIPHTTPResponsesCount=_metricHAPIPHTTPResponsesCount - In the implementation block
@property (assign,nonatomic) double minimumReachabilityPingInterval;                                               //@synthesize minimumReachabilityPingInterval=_minimumReachabilityPingInterval - In the implementation block
@property (nonatomic,retain) NSDictionary * bonjourDeviceInfo;                                                     //@synthesize bonjourDeviceInfo=_bonjourDeviceInfo - In the implementation block
@property (assign,nonatomic) BOOL hasUpdatedBonjour;                                                               //@synthesize hasUpdatedBonjour=_hasUpdatedBonjour - In the implementation block
@property (assign,nonatomic,__weak) HAPAccessoryServerBrowserIP * browser;                                         //@synthesize browser=_browser - In the implementation block
@property (nonatomic,retain) NSArray * ipServices;                                                                 //@synthesize ipServices=_ipServices - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedOperations;                                                    //@synthesize queuedOperations=_queuedOperations - In the implementation block
@property (nonatomic,retain) HAPAccessory * primaryAccessoryForServer;                                             //@synthesize primaryAccessoryForServer=_primaryAccessoryForServer - In the implementation block
@property (nonatomic,copy) NSString * model;                                                                       //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * sourceVersion;                                                               //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (assign,nonatomic) unsigned long long statusFlags;                                                       //@synthesize statusFlags=_statusFlags - In the implementation block
@property (nonatomic,readonly) HAPAuthSession * authSession;                                                       //@synthesize authSession=_authSession - In the implementation block
@property (nonatomic,retain) HAPAccessoryProtocolInfo * authenticatedProtocolInfo;                                 //@synthesize authenticatedProtocolInfo=_authenticatedProtocolInfo - In the implementation block
@property (assign,nonatomic) BOOL authenticated;                                                                   //@synthesize authenticated=_authenticated - In the implementation block
@property (nonatomic,copy) id pairVerifyCompletionBlock;                                                           //@synthesize pairVerifyCompletionBlock=_pairVerifyCompletionBlock - In the implementation block
@property (nonatomic,retain) NSString * controllerUsername;                                                        //@synthesize controllerUsername=_controllerUsername - In the implementation block
@property (nonatomic,copy) id netServiceResolveCompletionBlock;                                                    //@synthesize netServiceResolveCompletionBlock=_netServiceResolveCompletionBlock - In the implementation block
@property (assign,getter=isEstablishingSecureConnection,nonatomic) BOOL establishingSecureConnection;              //@synthesize establishingSecureConnection=_establishingSecureConnection - In the implementation block
@property (assign,nonatomic) BOOL hasAttributeDatabase;                                                            //@synthesize hasAttributeDatabase=_hasAttributeDatabase - In the implementation block
@property (assign,nonatomic) BOOL hasTunnelService;                                                                //@synthesize hasTunnelService=_hasTunnelService - In the implementation block
@property (assign,nonatomic) BOOL econnresetRetryInProgress;                                                       //@synthesize econnresetRetryInProgress=_econnresetRetryInProgress - In the implementation block
@property (nonatomic,retain) NSMutableSet * resolvers;                                                             //@synthesize resolvers=_resolvers - In the implementation block
@property (nonatomic,retain) HMFBlockOperation * pairOperation;                                                    //@synthesize pairOperation=_pairOperation - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * clientOperationQueue;                                            //@synthesize clientOperationQueue=_clientOperationQueue - In the implementation block
@property (assign,getter=isWacAccessory,nonatomic) BOOL wacAccessory;                                              //@synthesize wacAccessory=_wacAccessory - In the implementation block
@property (assign,getter=isWacComplete,nonatomic) BOOL wacComplete;                                                //@synthesize wacComplete=_wacComplete - In the implementation block
@property (assign,getter=isWacLegacy,nonatomic) BOOL wacLegacy;                                                    //@synthesize wacLegacy=_wacLegacy - In the implementation block
@property (assign,getter=isPreSoftAuthWacStarted,nonatomic) BOOL preSoftAuthWacStarted;                            //@synthesize preSoftAuthWacStarted=_preSoftAuthWacStarted - In the implementation block
@property (assign,getter=isPostSoftAuthWacStarted,nonatomic) BOOL postSoftAuthWacStarted;                          //@synthesize postSoftAuthWacStarted=_postSoftAuthWacStarted - In the implementation block
@property (nonatomic,readonly) NSData * ownershipToken;                                                            //@synthesize ownershipToken=_ownershipToken - In the implementation block
@property (assign,nonatomic) BOOL invalidated;                                                                     //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,retain) HAPAccessoryWiFiConfiguration * wifiConfiguration;                                    //@synthesize wifiConfiguration=_wifiConfiguration - In the implementation block
@property (assign,getter=isContinuingLegacyWACpairing,nonatomic) BOOL continuingLegacyWACpairing;                  //@synthesize continuingLegacyWACpairing=_continuingLegacyWACpairing - In the implementation block
@property (assign,getter=isWacStarted,nonatomic) BOOL wacStarted;                                                  //@synthesize wacStarted=_wacStarted - In the implementation block
@property (nonatomic,retain) HMFTimer * bonjourEventTimer;                                                         //@synthesize bonjourEventTimer=_bonjourEventTimer - In the implementation block
@property (assign,nonatomic) BOOL hasStartedPairing;                                                               //@synthesize hasStartedPairing=_hasStartedPairing - In the implementation block
@property (nonatomic,readonly) HMFNetMonitor * networkMonitor;                                                     //@synthesize networkMonitor=_networkMonitor - In the implementation block
@property (assign,getter=isPairingRequestPending,nonatomic) BOOL pairingRequestPending;                            //@synthesize pairingRequestPending=_pairingRequestPending - In the implementation block
@property (assign,getter=isTokenValidationPending,nonatomic) BOOL tokenValidationPending;                          //@synthesize tokenValidationPending=_tokenValidationPending - In the implementation block
@property (assign,getter=isHandlingInvalidSetupCode,nonatomic) BOOL handlingInvalidSetupCode;                      //@synthesize handlingInvalidSetupCode=_handlingInvalidSetupCode - In the implementation block
@property (assign,nonatomic) int cancelPairingErr;                                                                 //@synthesize cancelPairingErr=_cancelPairingErr - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> reachabilityQueue;                                       //@synthesize reachabilityQueue=_reachabilityQueue - In the implementation block
@property (nonatomic,retain) HMFTimer * reachabilityEventTimer;                                                    //@synthesize reachabilityEventTimer=_reachabilityEventTimer - In the implementation block
@property (assign,getter=isBonjourDiscoveryPending,nonatomic) BOOL bonjourDiscoveryPending;                        //@synthesize bonjourDiscoveryPending=_bonjourDiscoveryPending - In the implementation block
@property (nonatomic,retain) HAPHTTPClient * httpClient;                                                           //@synthesize httpClient=_httpClient - In the implementation block
@property (nonatomic,readonly) HAPWACAccessory * hapWACAccessory;                                                  //@synthesize hapWACAccessory=_hapWACAccessory - In the implementation block
@property (getter=isWacNeeded,readonly) BOOL wacNeeded; 
@property (nonatomic,copy) NSData * token;                                                                         //@synthesize token=_token - In the implementation block
@property (nonatomic,copy,readonly) HMFNetAddress * peerAddress; 
@property (nonatomic,readonly) NSString * peerEndpointDescription; 
+(id)sharedPairOperationQueue;
-(NSString *)description;
-(void)dealloc;
-(NSData *)token;
-(void)_reset;
-(id)services;
-(void)setToken:(NSData *)arg1 ;
-(BOOL)authenticated;
-(void)setAuthenticated:(BOOL)arg1 ;
-(BOOL)invalidated;
-(long long)linkType;
-(NSString *)model;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(void)setSourceVersion:(NSString *)arg1 ;
-(NSString *)sourceVersion;
-(unsigned long long)statusFlags;
-(HMFNetAddress *)peerAddress;
-(void)setStatusFlags:(unsigned long long)arg1 ;
-(void)updateWithBonjourDeviceInfo:(id)arg1 ;
-(void)reconfirm;
-(BOOL)isPaired;
-(NSData *)ownershipToken;
-(void)timerDidFire:(id)arg1 ;
-(void)networkMonitorIsReachable:(id)arg1 ;
-(void)networkMonitorIsUnreachable:(id)arg1 ;
-(HAPAccessoryServerBrowserIP *)browser;
-(void)setBrowser:(HAPAccessoryServerBrowserIP *)arg1 ;
-(void)authSession:(id)arg1 sendAuthExchangeData:(id)arg2 ;
-(void)authSession:(id)arg1 validateUUID:(id)arg2 token:(id)arg3 ;
-(void)authSession:(id)arg1 authenticateUUID:(id)arg2 token:(id)arg3 ;
-(void)authSession:(id)arg1 confirmUUID:(id)arg2 token:(id)arg3 ;
-(void)authSession:(id)arg1 authComplete:(id)arg2 ;
-(void)continueAuthAfterValidation:(BOOL)arg1 ;
-(void)handleAccessoriesListUpdate:(id)arg1 ;
-(id)initCommon:(id)arg1 browser:(id)arg2 ;
-(BOOL)_parseAndValidateTXTRecord;
-(void)_tearDownSession;
-(BOOL)isWacAccessory;
-(BOOL)isWacComplete;
-(void)_invalidateWAC;
-(HAPHTTPClient *)httpClient;
-(void)setHttpClient:(HAPHTTPClient *)arg1 ;
-(void)incrementHAPIPInvalidationCount;
-(void)_stopReachabilityTimer;
-(NSDictionary *)bonjourDeviceInfo;
-(BOOL)_delegateRespondsToSelector:(SEL)arg1 ;
-(void)_notifyDelegateOfPairingProgress:(long long)arg1 ;
-(void)setBonjourDeviceInfo:(NSDictionary *)arg1 ;
-(void)setWacStarted:(BOOL)arg1 ;
-(void)setHasStartedPairing:(BOOL)arg1 ;
-(void)setHandlingInvalidSetupCode:(BOOL)arg1 ;
-(void)setPreSoftAuthWacStarted:(BOOL)arg1 ;
-(void)setWacComplete:(BOOL)arg1 ;
-(void)_notifyDelegatesPairingStopped:(id)arg1 ;
-(void)_updateWithBonjourDeviceInfo:(id)arg1 ;
-(BOOL)isWacLegacy;
-(HAPWACAccessory *)hapWACAccessory;
-(BOOL)isContinuingLegacyWACpairing;
-(BOOL)hasStartedPairing;
-(HMFTimer *)bonjourEventTimer;
-(void)setBonjourEventTimer:(HMFTimer *)arg1 ;
-(void)setContinuingLegacyWACpairing:(BOOL)arg1 ;
-(int)_pairSetupStartWithConsentRequired:(BOOL)arg1 ;
-(void)_notifyDelegatesOfAddAccessoryFailureWithError:(id)arg1 ;
-(BOOL)isPairingRequestPending;
-(void)setPairingRequestPending:(BOOL)arg1 ;
-(HAPAccessory *)primaryAccessoryForServer;
-(void)setHasUpdatedBonjour:(BOOL)arg1 ;
-(BOOL)isBonjourDiscoveryPending;
-(void)setBonjourDiscoveryPending:(BOOL)arg1 ;
-(void)_submitStateNumberChangeEvent:(BOOL)arg1 ;
-(BOOL)_isSessionEstablished;
-(void)_getAttributeDatabase;
-(void)_establishSecureConnectionAndFetchAttributeDatabaseWithReason:(id)arg1 ;
-(void)updateWithHAPWACAccessory:(id)arg1 ;
-(void)setWacLegacy:(BOOL)arg1 ;
-(void)_pairVerifyStartWAC:(id)arg1 ;
-(void)setPostSoftAuthWacStarted:(BOOL)arg1 ;
-(HMFBlockOperation *)pairOperation;
-(void)_continuePairingUsingWAC;
-(void)setPairOperation:(HMFBlockOperation *)arg1 ;
-(void)_continuePairingAfterWAC:(id)arg1 ;
-(BOOL)hasBonjourDeviceInfo;
-(BOOL)isWacStarted;
-(BOOL)isPreSoftAuthWacStarted;
-(BOOL)isPostSoftAuthWacStarted;
-(void)_pairSetupContinueWAC;
-(NSMutableSet *)resolvers;
-(void)setResolvers:(NSMutableSet *)arg1 ;
-(NSArray *)ipServices;
-(NSString *)peerEndpointDescription;
-(BOOL)hasAttributeDatabase;
-(BOOL)isEstablishingSecureConnection;
-(void)setEstablishingSecureConnection:(BOOL)arg1 ;
-(void)setHasAttributeDatabase:(BOOL)arg1 ;
-(void)provisionToken:(id)arg1 ;
-(void)setPairVerifyCompletionBlock:(id)arg1 ;
-(void)_establishSecureSession;
-(void)setWifiConfiguration:(HAPAccessoryWiFiConfiguration *)arg1 ;
-(void)continuePairingAfterAuthPrompt;
-(id)_joinAccessoryNetworkWithCompletion:(/*^block*/id)arg1 ;
-(int)_continuePairingAfterAuthPromptWithRetry:(BOOL)arg1 ;
-(int)_continuePairingWithSetupCode:(id)arg1 ;
-(int)_pairSetupTryPassword:(id)arg1 ;
-(void)_tearDownWAC;
-(NSMutableArray *)queuedOperations;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_processQueuedOperationsWithError:(id)arg1 ;
-(void)tearDownSessionOnAuthCompletion;
-(void)pairSetupStartSoftAuthWAC;
-(HAPAccessoryWiFiConfiguration *)wifiConfiguration;
-(void)startPairingWithConsentRequired:(BOOL)arg1 config:(id)arg2 ownershipToken:(id)arg3 ;
-(void)_error:(id)arg1 forReadCharacteristicValues:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_readCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(/*^block*/id)_queuedReadOperationBlock:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_error:(id)arg1 forWriteCharacteristicValues:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_writeCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(/*^block*/id)_queuedWriteOperationBlock:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_startAddPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_listPairingsWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(BOOL)econnresetRetryInProgress;
-(void)_insertReadCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setEconnresetRetryInProgress:(BOOL)arg1 ;
-(void)_indicateSessionActivity;
-(void)_queueReadCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleReadECONNRESETError:(id)arg1 readCharacteristics:(id)arg2 responses:(id)arg3 timeout:(double)arg4 queue:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_handleReadResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 characteristics:(id)arg5 queue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)sendGETRequestToURL:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSOperationQueue *)clientOperationQueue;
-(void)_tearDownSessionAndReconfirm;
-(void)_queueWriteCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)_performTimedWriteValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_performWriteValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_insertWriteCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)_handleWriteECONNResetError:(id)arg1 writeRequests:(id)arg2 responses:(id)arg3 timeout:(double)arg4 queue:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_handleWriteResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 requestTuples:(id)arg5 queue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)sendPUTRequestToURL:(id)arg1 request:(id)arg2 serializationType:(unsigned long long)arg3 timeout:(double)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_handlePrepareWriteResponseObject:(id)arg1 type:(unsigned long long)arg2 prepareIdentifier:(id)arg3 httpStatus:(int)arg4 error:(id)arg5 requestTuples:(id)arg6 timeout:(double)arg7 queue:(id)arg8 completion:(/*^block*/id)arg9 ;
-(void)_performExecuteWriteValues:(id)arg1 prepareIdentifier:(id)arg2 timeout:(double)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)handleHTTPClientUnavailableErrorWithCompletion:(/*^block*/id)arg1 serializationType:(unsigned long long)arg2 ;
-(void)_handleUpdatesForCharacteristics:(id)arg1 stateNumber:(id)arg2 ;
-(void)_queueEnableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)_handleEventResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 characteristics:(id)arg5 requestedEventState:(BOOL)arg6 completion:(/*^block*/id)arg7 queue:(id)arg8 ;
-(BOOL)_processEvent:(id)arg1 matchedCharacteristic:(id*)arg2 ;
-(BOOL)_parseTXTRecordDictionary:(id)arg1 ;
-(void)_parseAttributeDatabase:(id)arg1 transaction:(id)arg2 ;
-(void)setPrimaryAccessoryForServer:(HAPAccessory *)arg1 ;
-(void)_updateProtocolVersionFromPrimaryAccessory:(id)arg1 ;
-(BOOL)_updateAccessories:(id)arg1 ;
-(void)__registerForInternalCharacteristicNotifications;
-(void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)setHasTunnelService:(BOOL)arg1 ;
-(id)pairVerifyCompletionBlock;
-(void)_invokePairVerifyCompletionBlock:(id)arg1 ;
-(int)_pairVerifyStartWithRetry:(BOOL)arg1 ;
-(int)_ensureHTTPClientSetUp;
-(int)_getBonjourDeviceDNSName:(id*)arg1 ;
-(void)setCancelPairingErr:(int)arg1 ;
-(NSString *)controllerUsername;
-(void)_isAccessoryPublicKeyPresent:(BOOL*)arg1 registeredWithHomeKit:(BOOL*)arg2 ;
-(int)_ensurePairingSessionIsInitializedWithType:(unsigned)arg1 ;
-(int)_handlePairSetupCompletionWithData:(id)arg1 ;
-(int)cancelPairingErr;
-(void)sendPOSTRequestToURL:(id)arg1 request:(id)arg2 serializationType:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)authenticateAccessory;
-(HAPAuthSession *)authSession;
-(void)getAccessoryInfo:(/*^block*/id)arg1 ;
-(void)_handleMFiCertValidation;
-(void)_notifyDelegateNeedsOwnershipToken;
-(BOOL)isHandlingInvalidSetupCode;
-(void)invokePairVerifyCompletionBlock:(id)arg1 ;
-(int)_handlePairVerifyCompletionWithData:(id)arg1 ;
-(HMFTimer *)reachabilityEventTimer;
-(void)pollAccessory;
-(HMFNetMonitor *)networkMonitor;
-(BOOL)isTokenValidationPending;
-(void)setTokenValidationPending:(BOOL)arg1 ;
-(HAPAccessoryProtocolInfo *)authenticatedProtocolInfo;
-(void)setAuthenticatedProtocolInfo:(HAPAccessoryProtocolInfo *)arg1 ;
-(BOOL)_validateProtocolInfo:(id)arg1 ;
-(void)_continuePairingAfterMFiCertValidation;
-(void)_queueAddPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_handlePairingsResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 httpError:(id)arg4 removeRequest:(BOOL)arg5 completionQueue:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)_removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_establishSecureSessionAndRemovePairing:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_sendRemovePairingWithData:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queueListPairingWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleListPairingsResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 httpError:(id)arg4 completionQueue:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(NSObject*<OS_dispatch_queue>)reachabilityQueue;
-(void)_startReachability;
-(void)_stopReachability;
-(id)primaryAccessory;
-(double)_getReachabilityTimeoutValueWithSleepInterval:(id)arg1 withActivityInterval:(id)arg2 ;
-(double)_getReachabilityTimeoutValue;
-(void)_accessoryDidBecomeUnreachable:(id)arg1 ;
-(void)_doReachabilityWithError:(id)arg1 forAccessory:(id)arg2 ;
-(void)stopPing;
-(void)_doPollForAccessory:(id)arg1 ;
-(void)httpClient:(id)arg1 didReceiveEvent:(id)arg2 ;
-(void)httpClientDidCloseConnectionDueToServer:(id)arg1 ;
-(void)httpClient:(id)arg1 didReceiveHTTPMessageWithHeaders:(id)arg2 body:(id)arg3 ;
-(void)httpClient:(id)arg1 willSendHTTPMessageWithHeaders:(id)arg2 body:(id)arg3 ;
-(void)hapWACAccessoryClient:(id)arg1 wacProgress:(unsigned long long)arg2 ;
-(void)hapWACAccessoryClient:(id)arg1 setBonjourInfo:(id)arg2 ;
-(id)initWithBonjourDeviceInfo:(id)arg1 keyStore:(id)arg2 browser:(id)arg3 ;
-(void)invalidateWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithHAPWACAccessory:(id)arg1 keystore:(id)arg2 browser:(id)arg3 ;
-(void)setWacAccessory:(BOOL)arg1 ;
-(BOOL)isWacNeeded;
-(void)startReprovisioningWiFiConfig:(id)arg1 ;
-(void)resetPostSoftAuthWAC;
-(void)_continuePairingAfterConfirmingSecureWAC:(id)arg1 ;
-(void)continuePairingUsingWAC;
-(void)_performEasyConfigWithParingPrompt:(/*function pointer*/void*)arg1 performPairSetup:(BOOL)arg2 isSplit:(BOOL)arg3 wacWiFiConfig:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)resolveLocalHostnameWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)createKeysForDataStreamWithKeySalt:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)discoverAccessories;
-(BOOL)tryPairingPassword:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopPairingWithError:(id*)arg1 ;
-(void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)handleUpdatesForCharacteristics:(id)arg1 stateNumber:(id)arg2 ;
-(BOOL)isSessionEstablised;
-(void)_handlePairSetupAfterM4Callback;
-(int)_promptForSetupCodeWithFlags:(unsigned)arg1 delaySeconds:(int)arg2 pairingFlags:(unsigned)arg3 isWAC:(BOOL)arg4 ;
-(void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)identifyWithCompletion:(/*^block*/id)arg1 ;
-(void)startPing;
-(BOOL)pingSupported;
-(void)setReachabilityQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setReachabilityEventTimer:(HMFTimer *)arg1 ;
-(double)minimumReachabilityPingInterval;
-(void)setMinimumReachabilityPingInterval:(double)arg1 ;
-(unsigned long long)metricHAPIPInvalidationCount;
-(void)setMetricHAPIPInvalidationCount:(unsigned long long)arg1 ;
-(unsigned long long)metricHAPIPHTTPEventsCount;
-(void)setMetricHAPIPHTTPEventsCount:(unsigned long long)arg1 ;
-(unsigned long long)metricHAPIPHTTPRequestsCount;
-(void)setMetricHAPIPHTTPRequestsCount:(unsigned long long)arg1 ;
-(unsigned long long)metricHAPIPHTTPResponsesCount;
-(void)setMetricHAPIPHTTPResponsesCount:(unsigned long long)arg1 ;
-(BOOL)hasUpdatedBonjour;
-(void)setIpServices:(NSArray *)arg1 ;
-(void)setQueuedOperations:(NSMutableArray *)arg1 ;
-(void)setControllerUsername:(NSString *)arg1 ;
-(id)netServiceResolveCompletionBlock;
-(void)setNetServiceResolveCompletionBlock:(id)arg1 ;
-(BOOL)hasTunnelService;
-(void)_requestResource:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestResource:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)incrementHAPIPHTTPRequestsCount;
-(void)incrementHAPIPHTTPResponsesCount;
-(void)incrementHAPIPHTTPEventsCount;
-(id)readAndResetHAPMetrics:(BOOL)arg1 ;
@end

