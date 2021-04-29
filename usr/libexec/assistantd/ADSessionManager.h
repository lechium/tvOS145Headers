//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADSessionDelegate-Protocol.h"

@class ADAccount, AFAWDSiriRequestRecord, AFAggregator, AFInstanceContext, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SASSpeechFailure, SASSpeechRecognized;
@protocol ADSessionManagerDelegate, ADSessionManagerIntercepting, OS_dispatch_queue, OS_dispatch_source;

@interface ADSessionManager : NSObject <ADSessionDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AFInstanceContext *_instanceContext;	// 16 = 0x10
    ADAccount *_account;	// 24 = 0x18
    NSString *_sharedUserIdentifier;	// 32 = 0x20
    NSString *_loggingSharedUserIdentifier;	// 40 = 0x28
    long long _sharedUserIdentifierState;	// 48 = 0x30
    long long _state;	// 56 = 0x38
    _Bool _isRegisteredForSessionDestroyingNotifications;	// 64 = 0x40
    NSString *_connectionMode;	// 72 = 0x48
    NSString *_languageCode;	// 80 = 0x50
    NSMutableArray *_sessions;	// 88 = 0x58
    id <ADSessionManagerDelegate> _delegate;	// 96 = 0x60
    _Bool _callInProcess;	// 104 = 0x68
    _Bool _hasClient;	// 105 = 0x69
    unsigned int _ioConnect;	// 108 = 0x6c
    struct IONotificationPort *_ioNotificationPortRef;	// 112 = 0x70
    unsigned int _ioNotifier;	// 120 = 0x78
    AFAggregator *_aggregator;	// 128 = 0x80
    NSString *_requestId;	// 136 = 0x88
    NSMutableDictionary *_proxiedIdMap;	// 144 = 0x90
    NSMutableDictionary *_reverseProxiedIdMap;	// 152 = 0x98
    NSMutableDictionary *_sessionOriginatedCommandTable;	// 160 = 0xa0
    NSString *_winningSessionId;	// 168 = 0xa8
    NSObject<OS_dispatch_source> *_resultObjectsEvaluationTimer;	// 176 = 0xb0
    _Bool _isQueuingResultsForDelayedEvaluation;	// 184 = 0xb8
    _Bool _timerFiredOnce;	// 185 = 0xb9
    _Bool _continueWithPreviousWinner;	// 186 = 0xba
    NSError *_lastSessionError;	// 192 = 0xc0
    int _preferredSessionType;	// 200 = 0xc8
    SASSpeechRecognized *_savedSasSpeechRecognized;	// 208 = 0xd0
    _Bool _savedSasSpeechRecognizedSubmitted;	// 216 = 0xd8
    SASSpeechFailure *_savedSasSpeechFailure;	// 224 = 0xe0
    unsigned int _serverDrivenResultsHoldTime;	// 232 = 0xe8
    _Bool _serverSpeechRecognitionArrived;	// 236 = 0xec
    _Bool _hasActiveRequest;	// 237 = 0xed
    _Bool _needsResetOnRequestBoundary;	// 238 = 0xee
    NSMutableSet *_assertions;	// 240 = 0xf0
    AFAWDSiriRequestRecord *_awdRequestRecord;	// 248 = 0xf8
    id <ADSessionManagerIntercepting> _interceptor;	// 256 = 0x100
    CDUnknownBlockType _sessionResetOnRequestBoundaryCompletion;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x00000001000b7510
@property(nonatomic) __weak id <ADSessionManagerIntercepting> interceptor; // @synthesize interceptor=_interceptor;
@property(nonatomic) __weak id <ADSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)speechError:(id)arg1;	// IMP=0x00000001000b714c
- (void)_propagateCachedSpeechErrorToLocalSessions;	// IMP=0x00000001000b6ff0
- (void)_mapAndSendSpeechFailure:(id)arg1 toLocalSession:(id)arg2;	// IMP=0x00000001000b6efc
- (void)handleCommandInLocalSession:(id)arg1;	// IMP=0x00000001000b6bb8
- (void)sendCommandToLocalSession:(id)arg1;	// IMP=0x00000001000b6ab0
- (void)_logContextForWinningSession:(id)arg1 forReason:(id)arg2 forRemoteSessionScore:(long long)arg3 forLocalSessionScore:(long long)arg4;	// IMP=0x00000001000b688c
- (void)_resetWinningState;	// IMP=0x00000001000b678c
- (_Bool)_reverseMapSessionRequestIdToADRequestId:(id)arg1 forSession:(id)arg2;	// IMP=0x00000001000b65d4
- (id)_mapADRequestIdToSessionRequestId:(id)arg1 forSession:(id)arg2;	// IMP=0x00000001000b6564
- (id)_keyForRequestId:(id)arg1 forSession:(id)arg2;	// IMP=0x00000001000b64b4
- (_Bool)_canStartLocalSession;	// IMP=0x00000001000b64ac
- (_Bool)_hasAtleastOneActiveSessionBesides:(id)arg1;	// IMP=0x00000001000b622c
- (void)refreshValidationData;	// IMP=0x00000001000b60f8
- (void)setHasClient:(_Bool)arg1;	// IMP=0x00000001000b60f0
- (_Bool)hasClient;	// IMP=0x00000001000b60e8
- (void)barrier:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b5ddc
- (void)setAWDRequestRecordMetrics:(id)arg1;	// IMP=0x00000001000b5c94
- (void)_logMetricsForSessionFailure:(id)arg1 withError:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000b56f4
- (void)_logCommandToMetrics:(id)arg1 forSession:(id)arg2 outbound:(_Bool)arg3;	// IMP=0x00000001000b53d0
- (void)getConnectionMetrics:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b507c
- (void)updateConnectionSetConnectionType:(unsigned int)arg1;	// IMP=0x00000001000b5034
- (void)updateConnectionDidFailAggdMetrics;	// IMP=0x00000001000b4ff4
- (void)updateConnectionDidDropAggdMetrics;	// IMP=0x00000001000b4fb4
- (id)aggregator;	// IMP=0x00000001000b4f70
- (id)sessionRequestIdForRefId:(id)arg1;	// IMP=0x00000001000b4ddc
- (void)setRequestId:(id)arg1;	// IMP=0x00000001000b47a0
- (void)_resetSessionOnRequestBoundaryIfNeeded;	// IMP=0x00000001000b43cc
- (void)relinquishAssertion:(id)arg1;	// IMP=0x00000001000b42d8
- (id)acquireAssertionForReason:(id)arg1;	// IMP=0x00000001000b41c0
- (void)setHasActiveRequest:(_Bool)arg1;	// IMP=0x00000001000b3fcc
- (void)sendRawCommand:(id)arg1 opportunistically:(_Bool)arg2 logEvent:(_Bool)arg3;	// IMP=0x00000001000b3fb8
- (void)sendCommand:(id)arg1 opportunistically:(_Bool)arg2 logEvent:(_Bool)arg3;	// IMP=0x00000001000b3fa4
- (void)_sendCommand:(id)arg1 opportunistically:(_Bool)arg2 logEvent:(_Bool)arg3 doSendPreProcessing:(_Bool)arg4 doSendPostProcessing:(_Bool)arg5;	// IMP=0x00000001000b3528
- (void)delegateDidHandleCommand:(id)arg1;	// IMP=0x00000001000b32fc
- (void)handleCommand:(id)arg1;	// IMP=0x00000001000b316c
- (void)_convertEmbeddedRequestIds:(id)arg1 originalCommand:(id)arg2 session:(id)arg3;	// IMP=0x00000001000b3070
- (_Bool)_allowWhitelistedCommands:(id)arg1;	// IMP=0x00000001000b2fa0
- (_Bool)_filterUnsupportedCommands:(id)arg1 inGroup:(id)arg2 onSession:(id)arg3;	// IMP=0x00000001000b2ec4
- (void)assistantSessionConnectionDidClose:(id)arg1;	// IMP=0x00000001000b2e80
- (void)assistantSessionRetryingRequest:(id)arg1;	// IMP=0x00000001000b2ddc
- (void)assistantSessionDictationHIPAAMDMStatusDidChange;	// IMP=0x00000001000b2dd0
- (void)assistantSession:(id)arg1 beginSessionRetryPreferringWWAN:(_Bool)arg2;	// IMP=0x00000001000b2cd4
- (void)assistantSession:(id)arg1 willRetryOnError:(id)arg2;	// IMP=0x00000001000b2be8
- (void)assistantSession:(id)arg1 didLoadAssistantSyncRequested:(_Bool)arg2;	// IMP=0x00000001000b2b9c
- (void)assistantSessionDidDestroyAssistant:(id)arg1;	// IMP=0x00000001000b2b60
- (void)assistantSessionDidCreateAssistant:(id)arg1;	// IMP=0x00000001000b2a94
- (void)assistantSession:(id)arg1 didChangeRequestIdFrom:(id)arg2 toId:(id)arg3;	// IMP=0x00000001000b2800
- (id)assistantSessionCommandsToRestoreStateOnNewConnection:(id)arg1;	// IMP=0x00000001000b27b0
- (_Bool)assistantSessionShouldAttemptRetry:(id)arg1;	// IMP=0x00000001000b26dc
- (void)assistantSessionConnectionDidReset:(id)arg1;	// IMP=0x00000001000b255c
- (_Bool)assistantSessionShouldRestartConnectionOnWiFi:(id)arg1;	// IMP=0x00000001000b253c
- (_Bool)assistantSessionShouldLogVisibleRequestFailure:(id)arg1 forError:(id)arg2;	// IMP=0x00000001000b2424
- (void)assistantSession:(id)arg1 receivedError:(id)arg2 isRetryableError:(_Bool)arg3;	// IMP=0x00000001000b2090
- (void)assistantSession:(id)arg1 cannotHandleRequest:(id)arg2 error:(id)arg3;	// IMP=0x00000001000b1cf4
- (void)assistantSession:(id)arg1 receivedCommand:(id)arg2;	// IMP=0x00000001000b17b0
- (void)assistantSession:(id)arg1 didOpenConnectionWithPolicyId:(id)arg2 routeId:(id)arg3 connectionDelay:(double)arg4;	// IMP=0x00000001000b14fc
- (void)assistantSessionWillStartConnection:(id)arg1;	// IMP=0x00000001000b1430
- (_Bool)assistantSessionShouldPrewarmConnetion:(id)arg1;	// IMP=0x00000001000b13f0
- (void)sendRemoteGizmoDeviceToServer:(id)arg1;	// IMP=0x00000001000b129c
- (void)_resetWinningStateAndPurgeRequestMaps;	// IMP=0x00000001000b1268
- (void)resetWinningState;	// IMP=0x00000001000b1258
- (_Bool)hasActiveSessionForSendingMetrics;	// IMP=0x00000001000b105c
- (void)adviseSessionArbiterToContinueWithPreviousWinner:(_Bool)arg1;	// IMP=0x00000001000b0ff8
- (void)_pickDefaultWinnerWithDroppingSession:(id)arg1;	// IMP=0x00000001000b0bc0
- (void)_cancelOtherSessionRequests:(id)arg1 forRefId:(id)arg2;	// IMP=0x00000001000b07e4
- (_Bool)_haveUsefulness:(id)arg1 usefulnessScore:(id *)arg2;	// IMP=0x00000001000b0768
- (_Bool)_isDestructive:(id)arg1;	// IMP=0x00000001000b0390
- (void)_queueResultObject:(id)arg1 forSession:(id)arg2;	// IMP=0x00000001000b0130
- (void)_resetResultObjectsTimer;	// IMP=0x00000001000b00f4
- (void)_resultObjectsTimerFired:(id)arg1;	// IMP=0x00000001000affec
- (void)_startResultObjectsTimer;	// IMP=0x00000001000afe68
- (unsigned int)_resultObjectsHoldTime;	// IMP=0x00000001000afe00
- (_Bool)_evaluateResultObjects;	// IMP=0x00000001000af6d8
- (int)_preferredSessionType;	// IMP=0x00000001000af6ac
- (void)updateForCallIsLikelyDueToRequest:(_Bool)arg1;	// IMP=0x00000001000af594
- (void)updateForCallState:(_Bool)arg1;	// IMP=0x00000001000af580
- (void)_unregisterForSleepNotification;	// IMP=0x00000001000af504
- (void)_registerForSleepNotification;	// IMP=0x00000001000af40c
- (void)_powerChangedMessageType:(unsigned int)arg1 notificationID:(long long)arg2;	// IMP=0x00000001000af29c
- (void)_languageCodeDidChange:(id)arg1;	// IMP=0x00000001000af0b8
- (void)_enabledBitsChanged:(id)arg1;	// IMP=0x00000001000aef04
- (void)_unregisterForPossibleSessionDestroyingNotifications;	// IMP=0x00000001000aee8c
- (void)_registerForPossibleSessionDestroyingNotifications;	// IMP=0x00000001000aee08
- (id)_saConnectionMode;	// IMP=0x00000001000aed9c
- (void)_cloudPreferencesDidSync:(id)arg1;	// IMP=0x00000001000aec9c
- (void)_sharedAssistantdIdentifierDidChange:(id)arg1;	// IMP=0x00000001000aeb64
- (void)_updateSharedUserIdentifiers;	// IMP=0x00000001000ae804
- (id)languageCode;	// IMP=0x00000001000ae7f8
- (id)_languageCode;	// IMP=0x00000001000ae784
- (void)_purgeRequestMaps;	// IMP=0x00000001000ae6b0
- (void)endRetryableRequestForCommand:(id)arg1;	// IMP=0x00000001000ae478
- (void)resetRetryManager;	// IMP=0x00000001000ae368
- (void)startRetry;	// IMP=0x00000001000ae238
- (void)resetSessionsAtNextRequestBoundaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ae054
- (void)resetSessionsAtNextRequestBoundary;	// IMP=0x00000001000ae044
- (void)resetSessionsAndMakeQuiet:(_Bool)arg1;	// IMP=0x00000001000ae038
- (void)_resetSessionsAndMakeQuiet:(_Bool)arg1;	// IMP=0x00000001000add04
- (void)cancelSessions;	// IMP=0x00000001000adcf8
- (void)cancelSynchronously;	// IMP=0x00000001000adcc8
- (void)cancel;	// IMP=0x00000001000adbf4
- (void)_cancelSynchronously:(_Bool)arg1;	// IMP=0x00000001000ada84
- (void)beginUpdatingAssistantData;	// IMP=0x00000001000ad950
- (void)preheatSessions;	// IMP=0x00000001000ad940
- (void)preheatAndMakeQuiet:(_Bool)arg1;	// IMP=0x00000001000ad7d0
- (void)_startSession:(int)arg1 makeQuiet:(_Bool)arg2;	// IMP=0x00000001000ad57c
- (void)_startSessions:(_Bool)arg1;	// IMP=0x00000001000ad2b0
- (void)dealloc;	// IMP=0x00000001000ad1bc
- (id)initOnQueue:(id)arg1 account:(id)arg2 instanceContext:(id)arg3;	// IMP=0x00000001000ad004

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
