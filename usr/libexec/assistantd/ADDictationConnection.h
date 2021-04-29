//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADCommandCenterSpeechDelegate-Protocol.h"
#import "AFDictationService-Protocol.h"
#import "CoreEmbeddedSpeechRecognizerDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class ADDictationSessionTracker, AFDictationOptions, CoreEmbeddedSpeechRecognizer, NSMutableArray, NSString, NSXPCConnection, NSXPCListener;
@protocol AFDictationServiceDelegate, OS_dispatch_queue;

@interface ADDictationConnection : NSObject <CoreEmbeddedSpeechRecognizerDelegate, NSXPCListenerDelegate, ADCommandCenterSpeechDelegate, AFDictationService>
{
    CoreEmbeddedSpeechRecognizer *_localSpeechRecognizer;	// 8 = 0x8
    _Bool _usingLocalSpeechRecognizer;	// 16 = 0x10
    id <AFDictationServiceDelegate> _serviceDelegate;	// 24 = 0x18
    AFDictationOptions *_dictationOptions;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    _Bool _waitingForSpeechRecognition;	// 48 = 0x30
    _Bool _waitingForStructuredResultsOrVoiceSearch;	// 49 = 0x31
    _Bool _waitingForAudioFile;	// 50 = 0x32
    ADDictationSessionTracker *_sessionTracker;	// 56 = 0x38
    NSXPCListener *_pendingSpeechRequestListener;	// 64 = 0x40
    NSXPCConnection *_pendingSpeechRequestConnection;	// 72 = 0x48
    CDUnknownBlockType _pendingSpeechRequestContinue;	// 80 = 0x50
    _Bool _disconnected;	// 88 = 0x58
    CDUnknownBlockType _requestCompletion;	// 96 = 0x60
    _Bool _haveSeenSpeechRecordingDidRecognizePhrases;	// 104 = 0x68
    NSMutableArray *_audioSessionAssertions;	// 112 = 0x70
    _Bool adSpeechSessionEnded;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000010028c6e8
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) _Bool adSpeechSessionEnded; // @synthesize adSpeechSessionEnded;
- (void)_continuePendingSpeechRequestFromTimestamp:(double)arg1;	// IMP=0x000000010028c5b4
- (oneway void)continuePendingSpeechRequestFromTimestamp:(double)arg1;	// IMP=0x000000010028c540
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010028c428
- (void)localSpeechRecognizer:(id)arg1 didCompletionRecognitionWithStatistics:(id)arg2 error:(id)arg3;	// IMP=0x000000010028c2c4
- (void)localSpeechRecognizer:(id)arg1 didRecognizePackage:(id)arg2;	// IMP=0x000000010028c22c
- (void)localSpeechRecognizer:(id)arg1 didRecognizePhrases:(id)arg2 utterances:(id)arg3;	// IMP=0x000000010028c144
- (void)localSpeechRecognizer:(id)arg1 didRecognizeRawEagerRecognitionCandidate:(id)arg2;	// IMP=0x000000010028c0c8
- (void)localSpeechRecognizer:(id)arg1 didProcessAudioDuration:(double)arg2;	// IMP=0x000000010028c050
- (void)localSpeechRecognizer:(id)arg1 didRecognizeTokens:(id)arg2;	// IMP=0x000000010028bfb0
- (id)_localSpeechRecognizerSupportingBackground:(_Bool)arg1;	// IMP=0x000000010028be18
- (id)_updateDictationOptionsForOnDeviceDictation:(id)arg1 language:(id)arg2;	// IMP=0x000000010028b8d0
- (oneway void)reportIssueForError:(id)arg1 eventType:(long long)arg2 subtype:(id)arg3 context:(id)arg4;	// IMP=0x000000010028b69c
- (oneway void)reportIssueForError:(id)arg1 eventType:(long long)arg2 context:(id)arg3;	// IMP=0x000000010028b48c
- (oneway void)requestOfflineDictationSupportForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010028b394
- (oneway void)getInstalledOfflineLanguagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010028b1a4
- (oneway void)_sendEngagementFeedback:(long long)arg1 voiceQueryIdentifier:(id)arg2;	// IMP=0x000000010028b128
- (oneway void)_startDictationWithURL:(id)arg1 isNarrowBand:(_Bool)arg2 language:(id)arg3 options:(id)arg4;	// IMP=0x000000010028aea8
- (oneway void)addRecordedSpeechSampleData:(id)arg1;	// IMP=0x000000010028ae10
- (oneway void)startRecordedAudioDictationWithOptions:(id)arg1 language:(id)arg2 narrowband:(_Bool)arg3 forceSampling:(_Bool)arg4;	// IMP=0x000000010028a5e4
- (oneway void)recordAWDSuccessMetrics;	// IMP=0x000000010028a59c
- (oneway void)recordFailureMetricsForError:(id)arg1;	// IMP=0x000000010028a52c
- (oneway void)endSession;	// IMP=0x000000010028a414
- (oneway void)preheatWithRecordDeviceIdentifier:(id)arg1;	// IMP=0x000000010028a30c
- (oneway void)preheatTestWithLanguage:(id)arg1 options:(id)arg2;	// IMP=0x000000010028a170
- (oneway void)preheat;	// IMP=0x000000010028a06c
- (oneway void)sendUserSelectedAlternativeDictationLanguageCode:(id)arg1;	// IMP=0x0000000100289f04
- (oneway void)sendSpeechCorrectionInfo:(id)arg1 interactionIdentifier:(id)arg2;	// IMP=0x0000000100289e74
- (oneway void)sendSpeechCorrectionInfo:(id)arg1 forCorrectionContext:(id)arg2;	// IMP=0x0000000100289ddc
- (oneway void)updateSpeechOptions:(id)arg1;	// IMP=0x0000000100289cb4
- (oneway void)stopSpeechWithOptions:(id)arg1;	// IMP=0x00000001002899c0
- (oneway void)cancelSpeech;	// IMP=0x0000000100289904
- (oneway void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3;	// IMP=0x00000001002896d4
- (oneway void)startRecordingForPendingDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010028926c
- (void)_invokeRequestCompletion;	// IMP=0x0000000100289204
- (oneway void)startRequestActivityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010028910c
- (void)_startDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 xpcconnection:(id)arg4;	// IMP=0x000000010028901c
- (id)_dictationWillStartWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 xpcconnection:(id)arg4;	// IMP=0x0000000100288cd8
- (void)adSpeechDidBeginLocalRecognitionWithModelInfo:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x0000000100288c40
- (void)adSpeechMultilingualSpeechRecognized:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x0000000100288b78
- (void)adSpeechLanguageDetectorFailedWithError:(id)arg1;	// IMP=0x0000000100288ae0
- (void)adSpeechRecordingDidDetectLanguage:(id)arg1 confidenceScores:(id)arg2 isConfident:(_Bool)arg3;	// IMP=0x00000001002889fc
- (_Bool)adWaitingForAudioFile;	// IMP=0x0000000100288958
- (void)adAudioFileFinishedWriting:(id)arg1 error:(id)arg2 context:(id)arg3;	// IMP=0x00000001002887a0
- (void)adPronunciationRecognized:(id)arg1 usingSpeechModel:(id)arg2 sessionUUID:(id)arg3;	// IMP=0x0000000100288458
- (void)adSpeechRecognitionDidFail:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x0000000100288298
- (void)adSpeechRecognizedStructuredResult:(id)arg1 usingSpeechModel:(id)arg2 sessionUUID:(id)arg3;	// IMP=0x0000000100287f60
- (void)adSpeechRecordingDidRecognizePhrases:(id)arg1 utterances:(id)arg2 sessionUUID:(id)arg3 refId:(id)arg4;	// IMP=0x0000000100287b6c
- (void)adSpeechRecordingDidRecognizeTokens:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x0000000100287b54
- (void)adSpeechDidFindVoiceSearchFinalResult:(id)arg1;	// IMP=0x00000001002879c4
- (void)adSpeechDidFindVoiceSearchPartialResult:(id)arg1;	// IMP=0x00000001002878a4
- (void)adSpeechRecognizedPartialResult:(id)arg1;	// IMP=0x0000000100287720
- (void)adSpeechRecognized:(id)arg1 usingSpeechModel:(id)arg2 sessionUUID:(id)arg3;	// IMP=0x00000001002873b8
- (void)adSpeechRecordingDidFail:(id)arg1 context:(id)arg2;	// IMP=0x0000000100287138
- (void)adSpeechRecordingDidCancelWithContext:(id)arg1;	// IMP=0x0000000100286e88
- (void)adSpeechRecordingDidEndWithContext:(id)arg1;	// IMP=0x0000000100286da8
- (void)adSpeechRecordingDidChangeAVRecordRoute:(id)arg1 bluetoothDevice:(id)arg2 isDucking:(_Bool)arg3 isTwoShot:(_Bool)arg4 speechEndHostTime:(unsigned long long)arg5 context:(id)arg6;	// IMP=0x0000000100286da4
- (void)adSpeechRecordingDidBeginOnAVRecordRoute:(id)arg1 audioSessionID:(unsigned int)arg2 bluetoothDevice:(id)arg3 sessionRequestUUID:(id)arg4 dictationOptions:(id)arg5 context:(id)arg6;	// IMP=0x0000000100286c38
- (void)adSpeechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1 context:(id)arg2;	// IMP=0x0000000100286c28
- (void)_removeAllAudioSessionAssertionsForReason:(id)arg1;	// IMP=0x00000001002868bc
- (void)_addAudioSessionAssertion:(id)arg1;	// IMP=0x0000000100286858
- (void)_speechRecordingDidFinish;	// IMP=0x000000010028676c
- (void)_updateDictationOptions:(id)arg1;	// IMP=0x0000000100286734
- (void)connectionDisconnected;	// IMP=0x0000000100286658
- (void)dealloc;	// IMP=0x00000001002865d8
- (id)initWithServiceDelegate:(id)arg1;	// IMP=0x00000001002864d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

