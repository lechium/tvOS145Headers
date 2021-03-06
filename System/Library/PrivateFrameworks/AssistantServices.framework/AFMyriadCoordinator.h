/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/WPHeySiriProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSData, NSMutableDictionary, NSString, NSObject, NSUUID, AFWatchdogTimer, AFPowerAssertionManager, AFMyriadRecord, NSDateFormatter, WPHeySiri, NSDate, AFMyriadEmergencyCallPunchout, AFMyriadAdvertisementContextManager, AFMyriadAdvertisementContextRecord, AFMyriadGoodnessScoreEvaluator, AFMyriadSession, AFNotifyStatePublisher;

@interface AFMyriadCoordinator : NSObject <WPHeySiriProtocol> {

	unsigned long long _myriadState;
	unsigned long long _nextState;
	unsigned long long _previousState;
	NSData* _incomingAudioData;
	NSData* _previousAdvertisedData;
	NSMutableDictionary* _replies;
	NSMutableDictionary* _replyCounts;
	NSMutableDictionary* _repliesBeforeDecision;
	NSMutableDictionary* _previousTrumps;
	NSMutableDictionary* _incomingTrumps;
	NSMutableDictionary* _multipleContinuations;
	id _delegate;
	NSString* _deviceClassName;
	unsigned char _deviceClass;
	unsigned char _productType;
	NSString* _productTypeName;
	int _deviceAdjust;
	double _deviceDelay;
	double _deviceTrumpDelay;
	double _deviceVTEndtimeDistanceThreshold;
	double _deviceInEarDelay;
	double _deviceInEarInterval;
	unsigned char _deviceGroup;
	NSObject*<OS_dispatch_queue> _myriadWorkQueue;
	NSObject*<OS_dispatch_queue> _myriadAdvertisementContextQueue;
	NSString* _timerLabel;
	NSObject*<OS_dispatch_source> _timer;
	NSUUID* _eventToken;
	AFWatchdogTimer* _overallTimeout;
	AFPowerAssertionManager* _powerAssertionManager;
	CFNotificationCenterRef _center;
	AFMyriadRecord* _triggerRecord;
	long long _recordType;
	unsigned long long _voiceTriggerTime;
	float _delayTarget;
	float _advertInterval;
	int _nTimesContinued;
	int _nTimesExtended;
	char _incomingAdjustment;
	AFMyriadRecord* _overrideMyriadRecord;
	int _slowdownMsecs;
	int _testInducedSlowdownMsecs;
	AFMyriadRecord* _maxSlowdownRecord;
	BOOL _BTLEReady;
	BOOL _inTask;
	BOOL _inSetupMode;
	BOOL _ducking;
	BOOL _stateMachineEncounteredError;
	BOOL _listenTimerIsRunning;
	BOOL _coordinationEnabled;
	BOOL _BLEActivityEnabled;
	BOOL _clientIsDirectActivating;
	BOOL _clientIsInEarActivation;
	BOOL _clientRecentlyLostElection;
	BOOL _clientLostDueToTrumping;
	BOOL _clientIsListeningAfterRecentWin;
	BOOL _clientIsWatchActivation;
	BOOL _clientIsWatchTrumpPromote;
	BOOL _clientIsRespondingToSlowdown;
	BOOL _clientDoneRespondingToSlowdown;
	BOOL _clientRespondingToCarPlay;
	BOOL _clientIsDeciding;
	int _constantGoodness;
	NSObject*<OS_dispatch_source> _timerSource;
	NSDateFormatter* _dateFormat;
	WPHeySiri* _heySiriBTLE;
	NSUUID* _designatedSelfID;
	NSDate* _triggerTime;
	int _nDeltaTs;
	AFMyriadEmergencyCallPunchout* _callPunchout;
	unsigned long long _lastDecisionTime;
	BOOL _lastDecision;
	unsigned short _lastPHash;
	double _lastEmergencyAttempt;
	BOOL _wasEmergency;
	BOOL _suppressLateTrigger;
	SCD_Struct_AF11 _heySiriBTLEState;
	SCD_Struct_AF12 _wiproxReadinessTimer;
	SCD_Struct_AF13 _advTiming;
	AFMyriadAdvertisementContextManager* _advContextManager;
	AFMyriadAdvertisementContextRecord* _contextRecord;
	AFMyriadGoodnessScoreEvaluator* _goodnessScoreEvaluator;
	AFMyriadSession* _myriadSession;
	AFNotifyStatePublisher* _electionBeginPublisher;
	AFNotifyStatePublisher* _electionWinPublisher;
	AFNotifyStatePublisher* _electionLossPublisher;
	AFNotifyStatePublisher* _electionRepostWinDecisionPublisher;
	unsigned long long _electionPublisherState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentCoordinator;
+(void)didChangeDefaults;
+(void)clearCurrentCoordinator;
-(void)dealloc;
-(void)_startListening:(/*^block*/id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(unsigned char)deviceClass;
-(void)startListening;
-(void)stopListening;
-(void)_cancelTimer;
-(id)stateAsString:(unsigned long long)arg1 ;
-(void)heySiriDidUpdateState:(id)arg1 ;
-(void)heySiriStartedAdvertising:(id)arg1 ;
-(void)heySiriStoppedAdvertising:(id)arg1 ;
-(void)heySiri:(id)arg1 failedToStartAdvertisingWithError:(id)arg2 ;
-(void)heySiriAdvertisingPending:(id)arg1 ;
-(void)heySiri:(id)arg1 foundDevice:(id)arg2 withInfo:(id)arg3 ;
-(void)heySiriStartedScanning:(id)arg1 ;
-(void)heySiriStoppedScanning:(id)arg1 ;
-(void)heySiri:(id)arg1 failedToStartScanningWithError:(id)arg2 ;
-(float)deviceTrumpDelay;
-(void)endTask;
-(unsigned char)deviceGroup;
-(void)startAdvertisingFromVoiceTrigger;
-(void)startAdvertisingFromInTaskVoiceTrigger;
-(void)startAdvertisingFromInEarTrigger;
-(void)startAdvertisingFromCarPlayTrigger;
-(void)startAdvertisingEmergency;
-(void)readDefaults;
-(void)notifyCurrentDecisionResult;
-(void)_initDeviceClassAndAdjustments;
-(void)_initializeTimer;
-(void)_initializeWiProxReadinessTimer;
-(void)_resetAdvertisementTimings;
-(void)enterState:(unsigned long long)arg1 ;
-(void)waitWiProx:(long long)arg1 andExecute:(/*^block*/id)arg2 ;
-(void)_clearWiProxReadinessTimer;
-(void)_readDefaults;
-(void)startAdvertisingSlowdown:(unsigned short)arg1 ;
-(id)_phsSetupRecord;
-(void)advertiseWith:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 ;
-(void)startAdvertisingFromVoiceTriggerWithContext:(id)arg1 ;
-(void)_setMyraidAudioData:(id)arg1 ;
-(void)_startAdvertisingFromInTaskVoiceTrigger;
-(void)_startAdvertisingFromVoiceTrigger;
-(id)voiceTriggerRecord;
-(void)_enterState:(unsigned long long)arg1 ;
-(void)startAdvertisingFromVoiceTriggerAdjusted:(char)arg1 withContext:(id)arg2 ;
-(void)startAdvertisingFromVoiceTriggerWithGoodnessScoreContext:(id)arg1 withContext:(id)arg2 ;
-(id)directTriggerRecord;
-(void)startWatchAdvertisingFromVoiceTriggerWithContext:(id)arg1 ;
-(BOOL)_inTaskTriggerWasTooSoon;
-(void)startWatchAdvertisingFromDirectTriggerWithContext:(id)arg1 ;
-(void)startAdvertisingFromDirectTriggerWithContext:(id)arg1 ;
-(void)startAdvertisingFromOutgoingTriggerWithContext:(id)arg1 ;
-(void)_duringNextWindowEnterState:(unsigned long long)arg1 ;
-(void)startAdvertisingFromInTaskVoiceTriggerWithContext:(id)arg1 ;
-(void)startAdvertisingFromAlertFiringVoiceTriggerWithContext:(id)arg1 ;
-(id)responseObject:(unsigned short)arg1 ;
-(void)_startAdvertising:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 ;
-(void)_startTimer:(id)arg1 for:(float)arg2 thenExecute:(/*^block*/id)arg3 ;
-(void)_stopAdvertising:(/*^block*/id)arg1 ;
-(void)_endAdvertising:(/*^block*/id)arg1 ;
-(void)endAdvertising:(/*^block*/id)arg1 ;
-(id)_sortedReplies;
-(id)emptyRecord;
-(void)_advertiseTrigger;
-(BOOL)_deviceShouldContinue:(id)arg1 ;
-(void)_winElection;
-(unsigned long long)_nextElectionPublisherState;
-(void)_loseElection;
-(void)_cancelOverallTimeout;
-(void)_ageWedgeFilter;
-(void)resetReplies;
-(void)_resetAudioData;
-(void)_endAdvertisingWithDeviceProhibitions:(id)arg1 ;
-(id)_stateAsString;
-(BOOL)_shouldContinueFor:(id)arg1 ;
-(id)_endAdvertisingAnalyticsContext:(BOOL)arg1 ;
-(id)_myriadSession;
-(id)_stateAsString:(unsigned long long)arg1 ;
-(void)_createDispatchTimerWithTime:(unsigned long long)arg1 toExecute:(/*^block*/id)arg2 ;
-(void)_createDispatchTimerFor:(double)arg1 toExecute:(/*^block*/id)arg2 ;
-(void)_enteringIntoState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 ;
-(void)_leaveBLEDiagnosticMode;
-(void)_stopAdvertisingAndListening;
-(void)_resetActionWindows;
-(void)_unduck;
-(void)_handleStateMachineErrorIfNeeded;
-(void)_clearMyriadSession;
-(BOOL)_shouldStopListeningBeforeAdvertising;
-(void)_stopListening:(/*^block*/id)arg1 ;
-(void)_createMyriadSessionIfRequired;
-(void)_addElectionAdvertisementDataToMyriadSession:(id)arg1 ;
-(void)_setupActionWindows;
-(void)_setOverallTimeout;
-(void)_startTimer:(id)arg1 for:(float)arg2 thenEnterState:(unsigned long long)arg3 ;
-(id)lateSuppressionRecord;
-(void)_advertise:(id)arg1 andMoveTo:(unsigned long long)arg2 ;
-(id)continuationRecord;
-(id)emergencyRecord;
-(id)emergencyHandledRecord;
-(void)_advertiseIndefinite:(id)arg1 ;
-(void)_advertiseSlowdown;
-(void)_advertiseSuppressTriggerInOutput;
-(void)_enterBLEDiagnosticMode;
-(void)_waitWiProxAndExecute:(/*^block*/id)arg1 ;
-(void)_waitWiProx:(long long)arg1 andExecute:(/*^block*/id)arg2 ;
-(double)_contextFetchDelayForAdvertimentInterval:(double)arg1 advertisementDelay:(double)arg2 ;
-(BOOL)_shouldUseContextCollector;
-(id)_testAndFilterAdvertisementsFromContextCollector:(id)arg1 voiceTriggerEndTime:(double)arg2 advertisementDispatchTime:(double)arg3 advertisement:(id)arg4 ;
-(BOOL)_testAndUpdateWedgeFilter:(id)arg1 ;
-(void)_updateRepliesWith:(id)arg1 id:(id)arg2 data:(id)arg3 ;
-(void)_suppressDeviceIfNeededWithVoiceTriggerEndTime:(double)arg1 adverisementDispatchTime:(double)arg2 ;
-(void)_createDispatchTimerForEvent:(id)arg1 toExecute:(/*^block*/id)arg2 ;
-(void)_duringNextWindowExecute:(/*^block*/id)arg1 ;
-(void)setupAdvIntervalsInDelay:(float*)arg1 interval:(float*)arg2 withSlowdown:(int)arg3 ;
-(id)slowdownRecord:(unsigned short)arg1 ;
-(void)_adjustActionWindowsFromSlowdown:(int)arg1 ;
-(void)_advertiseWith:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 thenExecute:(/*^block*/id)arg4 ;
-(BOOL)_okayToSuppressOnOutput;
-(void)_advertise:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 andMoveTo:(unsigned long long)arg4 ;
-(void)_pushMyriadAdvertisementContextToContextCollectorWithAdvertisementInterval:(double)arg1 advertisementDelay:(double)arg2 ;
-(id)_sortedReplies:(id)arg1 ;
-(BOOL)_isAPhone:(unsigned char)arg1 ;
-(void)_resumeWiProxReadinessTimer;
-(void)_suspendWiProxReadinessTimer;
-(void)_createWaitWiProxTimer:(long long)arg1 waitBlock:(/*^block*/id)arg2 ;
-(BOOL)_shouldHandleEmergency;
-(void)_signalEmergencyCallHandled;
-(void)preheatWiProx;
-(void)startAdvertisingForPHSSetupAfterDelay:(float)arg1 maxInterval:(float)arg2 ;
-(void)resetStateMachine;
-(void)startAdvertisingFromVoiceTriggerAdjusted:(char)arg1 ;
-(void)startWatchAdvertisingFromVoiceTrigger;
-(void)startWatchAdvertisingFromDirectTrigger;
-(void)startAdvertisingFromDirectTrigger;
-(void)startAdvertisingFromOutgoingTrigger;
-(void)startAdvertisingEmergencyHandled;
-(void)startAdvertisingFromInTaskTriggerWithContext:(id)arg1 ;
-(void)startAdvertisingFromAlertFiringVoiceTrigger;
-(void)startResponseAdvertising:(unsigned short)arg1 ;
-(void)endAdvertisingAfterDelay:(float)arg1 ;
-(void)endAdvertising;
-(void)endAdvertisingWithDeviceProhibitions:(id)arg1 ;
-(BOOL)inTask;
-(void)setInTask:(BOOL)arg1 ;
-(void)setupEnabled:(BOOL)arg1 ;
-(void)_startListenTimer;
-(void)startListening:(/*^block*/id)arg1 ;
-(void)stopListening:(/*^block*/id)arg1 ;
-(void)startAdvertising:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 ;
-(void)advertiseWith:(id)arg1 ;
-(void)injectAdvertisementForTesting:(id)arg1 forDevice:(id)arg2 ;
-(void)startListeningToEmergencySignal;
-(void)startAdvertisingEmergencySignal;
-(void)setupActionWindows;
-(void)updateRepliesWith:(id)arg1 id:(id)arg2 data:(id)arg3 ;
-(void)myriadSession:(/*^block*/id)arg1 ;
-(void)resetMyriadCoordinator:(/*^block*/id)arg1 ;
@end

