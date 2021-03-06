//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VOTOutputComponent.h"

#import "TTSSpeechSynthesizerDelegate-Protocol.h"

@class AXIndexMap, AXSSPunctuationGroup, NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString, SCRCTargetSelectorTimer, SCRCThread, TTSSpeechSynthesizer;
@protocol BSInvalidatable;

@interface VOTOutputSpeechComponent : VOTOutputComponent <TTSSpeechSynthesizerDelegate>
{
    SCRCThread *_speechThread;	// 24 = 0x18
    AXIndexMap *_allPunctuationTable;	// 32 = 0x20
    AXIndexMap *_selectedLanguageAllPunctuationTable;	// 40 = 0x28
    AXIndexMap *_somePunctuationTable;	// 48 = 0x30
    AXIndexMap *_selectedLanguageSomePunctuationTable;	// 56 = 0x38
    AXIndexMap *_noPunctuationTable;	// 64 = 0x40
    AXIndexMap *_selectedLanguageNoPunctuationTable;	// 72 = 0x48
    AXIndexMap *_specialPunctionTable;	// 80 = 0x50
    AXIndexMap *_noneTableOverrides;	// 88 = 0x58
    NSString *_spokenLanguage;	// 96 = 0x60
    NSDictionary *_languageExceptions;	// 104 = 0x68
    _Bool _isSpeaking;	// 112 = 0x70
    _Bool _userStopped;	// 113 = 0x71
    _Bool _isPaused;	// 114 = 0x72
    _Bool _isVolumeCapped;	// 115 = 0x73
    float _rawVolume;	// 116 = 0x74
    NSMutableDictionary *_speechStatistics;	// 120 = 0x78
    double _lastTimeSpeechStarted;	// 128 = 0x80
    AXIndexMap *_currentActionVariants;	// 136 = 0x88
    id _currentRequest;	// 144 = 0x90
    NSArray *_userSubstitutions;	// 152 = 0x98
    NSArray *_transientSubstitutions;	// 160 = 0xa0
    SCRCTargetSelectorTimer *_stopSpeakingAfterLongPauseTimer;	// 168 = 0xa8
    unsigned long long _lastSetOptions;	// 176 = 0xb0
    AXSSPunctuationGroup *_fileSystemPunctuationGroup;	// 184 = 0xb8
    NSMutableDictionary *_cachedUtterances;	// 192 = 0xc0
    unsigned int _playingSoundID;	// 200 = 0xc8
    NSString *_lastSelectedLanguage;	// 208 = 0xd0
    NSMutableDictionary *_punctuationFallbacks;	// 216 = 0xd8
    TTSSpeechSynthesizer *_synthesizer;	// 224 = 0xe0
    NSDictionary *_emoticonReplacements;	// 232 = 0xe8
    id <BSInvalidatable> _disableIdleTimerAssertion;	// 240 = 0xf0
    NSNumber *_activityBasedAudioDucking;	// 248 = 0xf8
    TTSSpeechSynthesizer *_synthesizerForTelephonyMixin;	// 256 = 0x100
}

+ (void)_setOverrideLocale:(id)arg1;	// IMP=0x0000000100033464
- (void).cxx_destruct;	// IMP=0x00000001000420f4
@property(retain, nonatomic) TTSSpeechSynthesizer *synthesizerForTelephonyMixin; // @synthesize synthesizerForTelephonyMixin=_synthesizerForTelephonyMixin;
@property(retain, nonatomic) NSNumber *activityBasedAudioDucking; // @synthesize activityBasedAudioDucking=_activityBasedAudioDucking;
@property(retain, nonatomic) id <BSInvalidatable> disableIdleTimerAssertion; // @synthesize disableIdleTimerAssertion=_disableIdleTimerAssertion;
@property(retain, nonatomic) NSDictionary *emoticonReplacements; // @synthesize emoticonReplacements=_emoticonReplacements;
@property(readonly, nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(readonly, nonatomic) _Bool isSpeaking; // @synthesize isSpeaking=_isSpeaking;
@property(readonly, nonatomic) TTSSpeechSynthesizer *synthesizer; // @synthesize synthesizer=_synthesizer;
- (void)setShouldOutputToHearingAid:(_Bool)arg1;	// IMP=0x0000000100042018
- (_Bool)replacesCharacterAsPunctuation:(unsigned short)arg1;	// IMP=0x0000000100041fb4
- (void)_didFinishSpeaking:(id)arg1;	// IMP=0x0000000100041d50
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(_Bool)arg3 withError:(id)arg4;	// IMP=0x0000000100041d20
- (void)_didSynthesizeSilentlyToURL:(id)arg1 forRequest:(id)arg2;	// IMP=0x0000000100041b34
- (void)speechSynthesizer:(id)arg1 didSynthesizeSilentlyToURL:(id)arg2 forRequest:(id)arg3;	// IMP=0x0000000100041ae8
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 forRequest:(id)arg3;	// IMP=0x0000000100041630
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;	// IMP=0x00000001000415e0
- (void)_didStartSpeakingAction:(id)arg1;	// IMP=0x000000010004145c
- (void)_uncapVolume:(float)arg1;	// IMP=0x0000000100041414
- (void)_capVolumeForLanguage:(id)arg1 volume:(float)arg2;	// IMP=0x000000010004138c
- (unsigned int)_cachedSystemSoundIDForString:(id)arg1;	// IMP=0x0000000100041334
- (id)_spokenTextForRequest:(id)arg1;	// IMP=0x00000001000410e4
- (void)_handlePerformAction:(id)arg1;	// IMP=0x000000010003ff3c
- (void)_updateDuckingBasedOnActivity:(id)arg1;	// IMP=0x000000010003fdf0
- (double)outputMutedActivityLastToggleTime;	// IMP=0x000000010003fdd8
- (id)outputMutedActivityValue:(id)arg1;	// IMP=0x000000010003fdc8
- (id)_nextUrlForCachedSpeechSynthesis;	// IMP=0x000000010003fc7c
- (void)_updatePitch:(id)arg1;	// IMP=0x000000010003fb44
- (void)_updateActionWithCanonicalMappings:(id)arg1;	// IMP=0x000000010003fabc
- (id)_preferenceLanguageForLanguage:(id)arg1 selectedLanguage:(id)arg2;	// IMP=0x000000010003f960
- (void)_notifyDidFinishSpeakingWithFakeRequestForEvent:(id)arg1;	// IMP=0x000000010003f8b4
- (id)stringReplacingBrailleDotRanges:(id)arg1;	// IMP=0x000000010003f548
- (_Bool)stringIsInSupportedCharacters:(id)arg1;	// IMP=0x000000010003f4b4
- (_Bool)_processActionForLiteralEmojis:(id)arg1;	// IMP=0x000000010003f2ac
- (void)preprocessAction:(id)arg1;	// IMP=0x000000010003ecac
- (void)_determineEmojiPreferenceForAction:(id)arg1;	// IMP=0x000000010003ebb8
- (void)_preprocessActionLanguageAndVoice:(id)arg1;	// IMP=0x000000010003e5e8
- (void)_configureSynthesizerWithPhonemeSubstitutionsFromAction:(id)arg1;	// IMP=0x000000010003e0bc
- (void)_handleAlternatePronunciation:(id)arg1 voiceIdentifier:(id)arg2;	// IMP=0x000000010003dcb8
- (void)_speakAsMixOfLiteralAndNormalText:(id)arg1 withLiteralRanges:(id)arg2;	// IMP=0x000000010003d844
- (void)_speakAsNormalText:(id)arg1;	// IMP=0x000000010003d764
- (id)_stringForNormalText:(id)arg1 action:(id)arg2 allowPausingAtBoundaries:(_Bool)arg3 ignoreLeadingCommas:(_Bool)arg4;	// IMP=0x000000010003ca34
- (float)_determineSpeakingRate:(id)arg1 languageCode:(id)arg2;	// IMP=0x000000010003c890
- (float)_determineVolume:(id)arg1;	// IMP=0x000000010003c660
- (void)_replaceUserSubstitutions:(id)arg1 action:(id)arg2;	// IMP=0x000000010003c314
- (_Bool)_makeSubstitution:(id)arg1 withString:(id)arg2 punctuationGroup:(id)arg3;	// IMP=0x000000010003bfa8
- (void)_processEmoji:(id)arg1 action:(id)arg2;	// IMP=0x000000010003bd5c
- (void)_replaceEmoticonsWithText:(id)arg1;	// IMP=0x000000010003ba78
- (void)_removeRunsOfNewLines:(id)arg1;	// IMP=0x000000010003b8b4
- (void)_replacePunctuation:(id)arg1 withAction:(id)arg2 languageCode:(id)arg3;	// IMP=0x000000010003b4b4
- (id)_urlRangesInString:(id)arg1 languageCode:(id)arg2;	// IMP=0x000000010003b0f4
- (id)_determinePunctuationGroupForAction:(id)arg1 isDefault:(_Bool *)arg2;	// IMP=0x000000010003aec0
- (id)_determineVoiceIdentifier:(id)arg1 languageCode:(id)arg2;	// IMP=0x000000010003ad44
- (id)replacePunctuation:(id)arg1 punctuationGroup:(id)arg2 replaceCommas:(_Bool)arg3 languageCode:(id)arg4;	// IMP=0x000000010003ad08
- (_Bool)_characterSearchesForSingularForms:(unsigned short)arg1;	// IMP=0x000000010003acfc
- (id)_parseNumberInString:(id)arg1 beforeCharacterAtIndex:(long long)arg2 numberRange:(struct _NSRange *)arg3;	// IMP=0x000000010003aa50
- (_Bool)_replaceRepeatedPuntuationAndEmoji:(id)arg1 newString:(id)arg2 charReplacementString:(id)arg3 charSequence:(id)arg4 charIndex:(long long *)arg5 speakPunctuationCounts:(_Bool)arg6 languageCode:(id)arg7;	// IMP=0x000000010003a5ec
- (void)_replaceRepeatedEmoji:(id)arg1;	// IMP=0x000000010003a0a0
- (id)_replacePunctuation:(id)arg1 punctuationGroup:(id)arg2 hasMathContext:(_Bool)arg3 hasPhoneContext:(_Bool)arg4 isText:(_Bool)arg5 replaceCommas:(_Bool)arg6 languageCode:(id)arg7 speakPunctuationCounts:(_Bool)arg8;	// IMP=0x0000000100038b6c
- (id)baseTableForPunctuationGroup:(id)arg1;	// IMP=0x0000000100038a40
- (id)punctuationReplacement:(id)arg1 withGroup:(id)arg2 baseTable:(id)arg3 languageCode:(id)arg4 selectedLanguage:(id)arg5 spokenLanguage:(id)arg6;	// IMP=0x0000000100038574
- (id)fileSystemPunctuationGroup;	// IMP=0x00000001000383c0
- (void)_applyTextualWorkarounds:(id)arg1;	// IMP=0x00000001000383bc
- (void)_speakAsPhoneticText:(id)arg1;	// IMP=0x000000010003835c
- (void)_speakAsLiteralText:(id)arg1;	// IMP=0x0000000100038258
- (id)_stringForLiteralText:(id)arg1 action:(id)arg2 allowChangingLanguageForPunctuation:(_Bool)arg3;	// IMP=0x0000000100037da8
- (id)_literalStringMarkupForString:(id)arg1 languageCode:(id)arg2 action:(id)arg3;	// IMP=0x0000000100037c8c
- (void)_appendLiteralCharacterString:(id)arg1 toString:(id)arg2 hasPhoneContext:(_Bool)arg3 hasMathContext:(_Bool)arg4 action:(id)arg5 punctuationTableLanguageUsed:(_Bool *)arg6;	// IMP=0x0000000100037154
- (void)_formatTimeDuration:(id)arg1 didMatch:(_Bool *)arg2 voiceIdentifier:(id)arg3;	// IMP=0x0000000100036800
- (void)_formatExplicitTimeDuration:(id)arg1 isMMSS:(_Bool)arg2 languageCode:(id)arg3;	// IMP=0x00000001000363c4
- (void)_formatIPAddress:(id)arg1 voiceIdentifier:(id)arg2;	// IMP=0x0000000100035e30
- (void)_formatATVStyleMediaDurations:(id)arg1;	// IMP=0x0000000100035b08
- (void)_formatUSHeight:(id)arg1 voiceIdentifier:(id)arg2;	// IMP=0x00000001000355d0
- (void)_formatEthernetMacAddress:(id)arg1 voiceIdentifier:(id)arg2;	// IMP=0x0000000100035230
- (void)_applyTransliteration:(id)arg1 languageCode:(id)arg2;	// IMP=0x00000001000350e4
- (void)_formatJapaneseYen:(id)arg1;	// IMP=0x0000000100034ea8
- (void)_formatDetectedDates:(id)arg1 voiceIdentifier:(id)arg2 languageCode:(id)arg3;	// IMP=0x0000000100034854
- (_Bool)_formatDetectedFinnishDates:(id)arg1;	// IMP=0x0000000100034414
- (void)_formatTelephoneNumber:(id)arg1 languageCode:(id)arg2 voiceIdentifier:(id)arg3;	// IMP=0x0000000100034278
- (void)_applyTelephoneFormatting:(id)arg1 withRanges:(id)arg2 languageCode:(id)arg3 voiceIdentifier:(id)arg4;	// IMP=0x0000000100033c00
- (void)_applyCamelCaseSeparation:(id)arg1;	// IMP=0x0000000100033550
- (_Bool)_currentLocaleUsesSpaceAsSeparator;	// IMP=0x0000000100033474
- (void)_insertLongerPausesForSymbol:(id)arg1 withText:(id)arg2 allowPausingAtBoundaries:(_Bool)arg3 onlyApplyWhenFollowedBySpace:(_Bool)arg4 languageCode:(id)arg5 voiceIdentifier:(id)arg6;	// IMP=0x00000001000326a4
- (id)pauseStringForType:(int)arg1 voiceIdentifier:(id)arg2;	// IMP=0x0000000100032488
- (long long)_ttsVoiceTypeForPauseCalculationWithVoiceIdentifier:(id)arg1;	// IMP=0x000000010003237c
- (float)_pauseDelayForType:(int)arg1 speechRate:(float)arg2 voiceType:(long long)arg3;	// IMP=0x0000000100032354
- (id)expectedVoiceIdentifier:(id)arg1;	// IMP=0x0000000100031b6c
- (_Bool)_shouldForceSiriVoice;	// IMP=0x0000000100031b68
- (_Bool)_stringMatchesSpecialCases:(id)arg1 forSymbol:(id)arg2 ranges:(id *)arg3 langaugeCode:(id)arg4;	// IMP=0x00000001000316fc
- (id)_localeSpecificURLRegexForLanguageCode:(id)arg1;	// IMP=0x00000001000314dc
- (id)_localeSpecificURLsForLanguageCode:(id)arg1;	// IMP=0x00000001000314a4
- (id)_secureTextDescription:(id)arg1;	// IMP=0x0000000100031404
- (void)_replaceEmbeddedTTSCommands:(id)arg1;	// IMP=0x0000000100031360
- (void)_speakAllDigits:(id)arg1;	// IMP=0x00000001000311f4
- (void)handleEvent:(id)arg1;	// IMP=0x0000000100031130
- (void)dealloc;	// IMP=0x00000001000310a4
- (void)_handleStopSpeaking:(id)arg1;	// IMP=0x0000000100030d38
- (void)_handleContinueSpeaking:(id)arg1;	// IMP=0x0000000100030c60
- (void)_handlePauseSpeaking:(id)arg1;	// IMP=0x0000000100030b0c
- (void)_stopSpeakingAfterLongPause:(id)arg1;	// IMP=0x0000000100030a44
- (void)stopSpeakingAtBoundary:(int)arg1;	// IMP=0x0000000100030a30
- (void)stopSpeakingAtBoundary:(int)arg1 allRequests:(_Bool)arg2 sessionDeactivationDelay:(id)arg3;	// IMP=0x0000000100030838
- (void)continueSpeaking;	// IMP=0x0000000100030780
- (void)pauseSpeakingAtBoundary:(int)arg1;	// IMP=0x000000010003067c
- (void)setVoice:(id)arg1;	// IMP=0x000000010003064c
- (void)_setVoice:(id)arg1;	// IMP=0x0000000100030538
- (void)setRate:(float)arg1;	// IMP=0x00000001000304b8
- (float)rate;	// IMP=0x00000001000304a0
- (void)_setRate:(id)arg1;	// IMP=0x0000000100030358
- (float)volume;	// IMP=0x0000000100030348
- (void)setVolume:(float)arg1;	// IMP=0x00000001000302c8
- (void)_setVolume:(id)arg1;	// IMP=0x0000000100030260
- (void)_loadPunctuationTable:(id)arg1 withLevel:(long long)arg2 language:(id)arg3;	// IMP=0x00000001000301d8
- (void)_saveSpeechStats;	// IMP=0x0000000100030158
- (id)currentAllPunctuationTable;	// IMP=0x00000001000300f4
- (id)currentNonePunctuationTable;	// IMP=0x0000000100030090
- (id)currentSomePunctuationTable;	// IMP=0x000000010003002c
- (void)_resetLanguageDataOnSpeechThread:(id)arg1 language:(id)arg2;	// IMP=0x000000010002fd3c
- (void)_selectedLanguageChanged:(id)arg1;	// IMP=0x000000010002f918
- (void)_initializePunctuationData;	// IMP=0x000000010002f79c
- (id)init;	// IMP=0x000000010002f478
- (void)_loadNoneTableOverrides;	// IMP=0x000000010002f3d4
- (void)_loadSpecialPunctuation;	// IMP=0x000000010002f284
- (void)_updateChannelLayout;	// IMP=0x000000010002eb58
- (void)_updateAudioSessionProperties;	// IMP=0x000000010002dcc0
- (void)updateAudioSessionProperties:(id)arg1;	// IMP=0x000000010002dc94
- (void)audioSessionWasInterrupted:(id)arg1;	// IMP=0x000000010002dc68
- (void)_audioSessionWasInterrupted:(id)arg1;	// IMP=0x000000010002dac4
- (void)updateAccurateWordCallbacks;	// IMP=0x000000010002daa8
- (_Bool)_usingAllChannels;	// IMP=0x000000010002d764
- (void)_callStatusChanged;	// IMP=0x000000010002d608
- (void)callStatusChanged;	// IMP=0x000000010002d5dc
- (void)_initializeSynthesizer;	// IMP=0x000000010002cf7c
- (void)_createTelephonySynthesizer;	// IMP=0x000000010002ce40
- (void)_tearDownTelephonySynthesizer;	// IMP=0x000000010002cd84
- (void)_updateUserSubstitutions:(id)arg1;	// IMP=0x000000010002cc7c
- (id)_internalVoiceOverSubstitutions;	// IMP=0x000000010002cb54
- (void)_initializeThread;	// IMP=0x000000010002cad8
- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned int)arg4 count:(unsigned int)arg5 objects:(id)arg6;	// IMP=0x000000010002cab0
- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned int)arg3 objects:(id)arg4;	// IMP=0x000000010002ca94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

