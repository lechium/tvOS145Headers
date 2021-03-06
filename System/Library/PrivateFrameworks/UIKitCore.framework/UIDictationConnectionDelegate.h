/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIDictationConnectionDelegate <NSObject>
@required
-(void)dictationConnnectionDidChangeAvailability:(id)arg1;
-(void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(BOOL)arg4 final:(BOOL)arg5;
-(void)dictationConnection:(id)arg1 didBeginLocalRecognitionWithModelInfo:(id)arg2;
-(void)dictationConnection:(id)arg1 updateOptions:(id)arg2;
-(void)dictationConnection:(id)arg1 didFailRecordingWithError:(id)arg2;
-(void)dictationConnection:(id)arg1 didDetectLanguage:(id)arg2;
-(void)dictationConnectionWillStartRecording:(id)arg1;
-(void)dictationConnectionDidStartRecording:(id)arg1;
-(void)dictationConnection:(id)arg1 didStartRecordingWithOptions:(id)arg2;
-(void)dictationConnection:(id)arg1 didFailRecognitionWithError:(id)arg2;
-(void)dictationConnectionDidEndRecording:(id)arg1;
-(void)dictationConnectionDidCancel:(id)arg1;
-(void)dictationConnection:(id)arg1 receivedInterpretation:(id)arg2 languageModel:(id)arg3 secureInput:(BOOL)arg4;
-(void)dictationConnectionDidCancelIncompatibleLocalRecognizer:(id)arg1;
-(void)dictationConnection:(id)arg1 finalizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4 secureInput:(BOOL)arg5;
-(void)dictationConnectionDidFinish:(id)arg1;
-(void)dictationConnectionDidCancelRecording:(id)arg1;

@end

