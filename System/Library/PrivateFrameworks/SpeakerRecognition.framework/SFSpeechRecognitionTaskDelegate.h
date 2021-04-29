/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SFSpeechRecognitionTaskDelegate <NSObject>
@optional
-(void)speechRecognitionDidDetectSpeech:(id)arg1;
-(void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;
-(void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
-(void)speechRecognitionTaskFinishedReadingAudio:(id)arg1;
-(void)speechRecognitionTaskWasCancelled:(id)arg1;
-(void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(BOOL)arg2;

@end

