/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AFDictationDelegate <NSObject>
@optional
-(void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;
-(void)dictationConnection:(id)arg1 speechRecordingDidBeginWithOptions:(id)arg2;
-(void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
-(void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
-(void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
-(void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
-(void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4 replacingPreviousPhrasesCount:(unsigned long long)arg5;
-(void)dictationConnection:(id)arg1 didRecognizePackage:(id)arg2;
-(void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;
-(void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
-(void)dictationConnection:(id)arg1 didRecognizePartialResult:(id)arg2;
-(void)dictationConnection:(id)arg1 didProcessAudioDuration:(double)arg2;
-(void)dictationConnection:(id)arg1 didRecognizeTranscriptionObjects:(id)arg2 languageModel:(id)arg3;
-(void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
-(void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;
-(void)dictationConnection:(id)arg1 didFinishWritingAudioFile:(id)arg2 error:(id)arg3;
-(void)dictationConnnectionDidChangeAvailability:(id)arg1;
-(void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(BOOL)arg4 final:(BOOL)arg5;
-(void)dictationConnection:(id)arg1 didDetectLanguage:(id)arg2 confidenceScores:(id)arg3 isConfident:(BOOL)arg4;
-(void)dictationConnection:(id)arg1 didDetectLanguage:(id)arg2 confidenceScores:(id)arg3;
-(void)dictationConnection:(id)arg1 didRecognizeMultilingualSpeech:(id)arg2;
-(void)dictationConnection:(id)arg1 languageDetectorFailedWithError:(id)arg2;
-(void)dictationConnection:(id)arg1 didBeginLocalRecognitionWithModelInfo:(id)arg2;

@end

