/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@protocol HMFLocking, HAPAccessoryServerDelegate, OS_dispatch_queue, HAPKeyStore;
@class NSString, NSNumber, NSObject, NSData, NSHashTable, NSArray, NSDate, HAPAccessory, HMFVersion, HMFActivity, HAPDeviceID;

@interface HAPAccessoryServer : HMFObject {

	NSString* _name;
	NSString* _identifier;
	id<HMFLocking> _lock;
	BOOL _hasPairings;
	BOOL _reachable;
	BOOL _securitySessionOpen;
	BOOL _reachabilityPingEnabled;
	BOOL _supportsTimedWrite;
	BOOL _bleLinkConnected;
	BOOL _incompatibleUpdate;
	int _successfulPingCount;
	int _failedPingCount;
	NSNumber* _category;
	unsigned long long _configNumber;
	id<HAPAccessoryServerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSData* _setupHash;
	unsigned long long _authMethod;
	NSString* _productData;
	unsigned long long _pendingRemovePairing;
	NSHashTable* _notificationClients;
	NSArray* _accessories;
	NSDate* _timePairVerifyStart;
	NSString* _pairVerifyReason;
	HAPAccessory* _primaryAccessory;
	long long _linkType;
	HMFVersion* _version;
	NSHashTable* _internalDelegates;
	NSObject*<OS_dispatch_queue> _internalDelegateQueue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	unsigned long long _stateNumber;
	unsigned long long _compatibilityFeatures;
	id<HAPKeyStore> _keyStore;
	unsigned long long _pairSetupType;
	HMFActivity* _pairingActivity;

}

@property (nonatomic,readonly) NSHashTable * internalDelegates;                                 //@synthesize internalDelegates=_internalDelegates - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalDelegateQueue;              //@synthesize internalDelegateQueue=_internalDelegateQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * notificationClients;                                 //@synthesize notificationClients=_notificationClients - In the implementation block
@property (assign,nonatomic) int successfulPingCount;                                           //@synthesize successfulPingCount=_successfulPingCount - In the implementation block
@property (assign,nonatomic) int failedPingCount;                                               //@synthesize failedPingCount=_failedPingCount - In the implementation block
@property (__weak,readonly) id<HAPAccessoryServerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                      //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                        //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,copy) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasPairings;                                                  //@synthesize hasPairings=_hasPairings - In the implementation block
@property (assign,nonatomic) unsigned long long pendingRemovePairing;                           //@synthesize pendingRemovePairing=_pendingRemovePairing - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                                 //@synthesize reachable=_reachable - In the implementation block
@property (getter=isSecuritySessionOpen) BOOL securitySessionOpen;                              //@synthesize securitySessionOpen=_securitySessionOpen - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSNumber * category;                                                 //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) unsigned long long configNumber;                                   //@synthesize configNumber=_configNumber - In the implementation block
@property (assign,nonatomic) unsigned long long stateNumber;                                    //@synthesize stateNumber=_stateNumber - In the implementation block
@property (assign,nonatomic) unsigned long long compatibilityFeatures;                          //@synthesize compatibilityFeatures=_compatibilityFeatures - In the implementation block
@property (assign,getter=isIncompatibleUpdate,nonatomic) BOOL incompatibleUpdate;               //@synthesize incompatibleUpdate=_incompatibleUpdate - In the implementation block
@property (nonatomic,retain) HAPAccessory * primaryAccessory;                                   //@synthesize primaryAccessory=_primaryAccessory - In the implementation block
@property (nonatomic,copy) NSArray * accessories;                                               //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,__weak,readonly) id<HAPKeyStore> keyStore;                                 //@synthesize keyStore=_keyStore - In the implementation block
@property (nonatomic,copy) NSData * setupHash;                                                  //@synthesize setupHash=_setupHash - In the implementation block
@property (copy) HMFVersion * version;                                                          //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned long long pairSetupType;                                  //@synthesize pairSetupType=_pairSetupType - In the implementation block
@property (nonatomic,retain) NSString * productData;                                            //@synthesize productData=_productData - In the implementation block
@property (assign,nonatomic,__weak) HMFActivity * pairingActivity;                              //@synthesize pairingActivity=_pairingActivity - In the implementation block
@property (copy,readonly) HAPDeviceID * deviceID; 
@property (nonatomic,readonly) long long linkType;                                              //@synthesize linkType=_linkType - In the implementation block
@property (assign,nonatomic) BOOL supportsTimedWrite;                                           //@synthesize supportsTimedWrite=_supportsTimedWrite - In the implementation block
@property (assign,nonatomic) unsigned long long authMethod;                                     //@synthesize authMethod=_authMethod - In the implementation block
@property (getter=isBLELinkConnected,nonatomic,readonly) BOOL bleLinkConnected;                 //@synthesize bleLinkConnected=_bleLinkConnected - In the implementation block
@property (assign,nonatomic) BOOL reachabilityPingEnabled;                                      //@synthesize reachabilityPingEnabled=_reachabilityPingEnabled - In the implementation block
@property (nonatomic,copy) NSDate * timePairVerifyStart;                                        //@synthesize timePairVerifyStart=_timePairVerifyStart - In the implementation block
@property (nonatomic,copy) NSString * pairVerifyReason;                                         //@synthesize pairVerifyReason=_pairVerifyReason - In the implementation block
-(NSString *)name;
-(id)init;
-(id<HAPAccessoryServerDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(HMFVersion *)version;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSNumber *)category;
-(void)setCategory:(NSNumber *)arg1 ;
-(void)setVersion:(HMFVersion *)arg1 ;
-(long long)linkType;
-(HAPDeviceID *)deviceID;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id<HAPKeyStore>)keyStore;
-(void)reconfirm;
-(NSArray *)accessories;
-(BOOL)isPaired;
-(NSObject*<OS_dispatch_queue>)internalDelegateQueue;
-(BOOL)isReachable;
-(void)setReachable:(BOOL)arg1 ;
-(BOOL)isPinging;
-(void)setAccessories:(NSArray *)arg1 ;
-(void)registerForNotifications:(id)arg1 ;
-(void)continueAuthAfterValidation:(BOOL)arg1 ;
-(void)setStateNumber:(unsigned long long)arg1 ;
-(unsigned long long)stateNumber;
-(unsigned long long)configNumber;
-(NSData *)setupHash;
-(BOOL)hasPairings;
-(id)initWithKeystore:(id)arg1 ;
-(unsigned long long)compatibilityFeatures;
-(HMFActivity *)pairingActivity;
-(id)buildReachabilityNotificationDictionary:(id)arg1 reachable:(BOOL)arg2 linkType:(long long)arg3 withError:(long long)arg4 ;
-(BOOL)notifyClients:(unsigned long long)arg1 withDictionary:(id)arg2 ;
-(void)setSetupHash:(NSData *)arg1 ;
-(void)setHasPairings:(BOOL)arg1 ;
-(void)setPairVerifyReason:(NSString *)arg1 ;
-(unsigned long long)authMethod;
-(void)provisionToken:(id)arg1 ;
-(void)setPairingActivity:(HMFActivity *)arg1 ;
-(void)continuePairingAfterAuthPrompt;
-(void)setSecuritySessionOpen:(BOOL)arg1 ;
-(void)updatePingMetrics;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)pairSetupType;
-(void)tearDownSessionOnAuthCompletion;
-(void)startPairingWithConsentRequired:(BOOL)arg1 config:(id)arg2 ownershipToken:(id)arg3 ;
-(BOOL)requiresTimedWrite:(id)arg1 ;
-(void)enumerateInternalDelegatesUsingBlock:(/*^block*/id)arg1 ;
-(void)setConfigNumber:(unsigned long long)arg1 ;
-(void)setCompatibilityFeatures:(unsigned long long)arg1 ;
-(void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)setSupportsTimedWrite:(BOOL)arg1 ;
-(void)setPairSetupType:(unsigned long long)arg1 ;
-(void)setAuthMethod:(unsigned long long)arg1 ;
-(void)authenticateAccessory;
-(void)setProductData:(NSString *)arg1 ;
-(void)startPairVerifyMetricActivity;
-(void)completePairVerifyActivityWithLinkType:(long long)arg1 ;
-(BOOL)reachabilityPingEnabled;
-(void)setReachabilityPingEnabled:(BOOL)arg1 ;
-(HAPAccessory *)primaryAccessory;
-(void)incrementFailedPing;
-(void)incrementSuccessfulPing;
-(void)stopPing;
-(BOOL)isSecuritySessionOpen;
-(void)continuePairingUsingWAC;
-(void)discoverAccessories;
-(BOOL)tryPairingPassword:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopPairingWithError:(id*)arg1 ;
-(void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)handleUpdatesForCharacteristics:(id)arg1 stateNumber:(id)arg2 ;
-(void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)identifyWithCompletion:(/*^block*/id)arg1 ;
-(void)startPing;
-(BOOL)pingSupported;
-(void)addInternalDelegate:(id)arg1 ;
-(NSString *)productData;
-(unsigned long long)pendingRemovePairing;
-(BOOL)matchesSetupID:(id)arg1 serverIdentifier:(id)arg2 ;
-(void)setPrimaryAccessory:(HAPAccessory *)arg1 ;
-(void)setPendingRemovePairing:(unsigned long long)arg1 ;
-(BOOL)isIncompatibleUpdate;
-(BOOL)isBLELinkConnected;
-(void)unregisterForNotifications:(id)arg1 ;
-(BOOL)supportsTimedWrite;
-(BOOL)matchesSetupID:(id)arg1 ;
-(NSHashTable *)internalDelegates;
-(id)constructPairVerifyMetricReasonStringWithStartTime:(id)arg1 withLinkType:(long long)arg2 withReason:(id)arg3 ;
-(NSDate *)timePairVerifyStart;
-(void)setTimePairVerifyStart:(NSDate *)arg1 ;
-(void)removeInternalDelegate:(id)arg1 ;
-(NSHashTable *)notificationClients;
-(void)setNotificationClients:(NSHashTable *)arg1 ;
-(int)successfulPingCount;
-(void)setSuccessfulPingCount:(int)arg1 ;
-(int)failedPingCount;
-(void)setFailedPingCount:(int)arg1 ;
-(NSString *)pairVerifyReason;
-(void)setIncompatibleUpdate:(BOOL)arg1 ;
@end

