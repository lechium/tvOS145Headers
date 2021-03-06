/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Speech.framework/Speech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFDictationDelegate.h>
#import <libobjc.A.dylib/SFSpeechRecognitionBufferDelegate.h>

@protocol OS_dispatch_queue;
@class AFDictationConnection, NSOperationQueue, NSString, SFSpeechRecognitionRequest, NSObject, NSError;

@interface SFSpeechRecognitionTask : NSObject <AFDictationDelegate, SFSpeechRecognitionBufferDelegate> {

	AFDictationConnection* _dictationConnection;
	NSOperationQueue* _externalQueue;
	NSString* _languageCode;
	SFSpeechRecognitionRequest* _request;
	NSObject*<OS_dispatch_queue> _internalQueue;
	BOOL _completed;
	BOOL _running;
	BOOL _finishing;
	BOOL _cancelled;
	long long _taskHint;
	NSError* _error;
	NSString* _requestIdentifier;

}

@property (nonatomic,readonly) long long _taskHint;                            //@synthesize taskHint=_taskHint - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestIdentifier;              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (getter=isFinishing,nonatomic,readonly) BOOL finishing;              //@synthesize finishing=_finishing - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                           //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)recognizedResultFromPackage:(id)arg1 ;
+(id)transcriptionsWithTokens:(id)arg1 ;
-(NSError *)error;
-(void)cancel;
-(long long)state;
-(BOOL)isCancelled;
-(void)finish;
-(NSString *)requestIdentifier;
-(void)stopSpeech;
-(float)averagePower;
-(float)peakPower;
-(void)dictationConnectionSpeechRecordingDidBegin:(id)arg1 ;
-(void)dictationConnectionSpeechRecordingDidEnd:(id)arg1 ;
-(void)dictationConnectionSpeechRecordingDidCancel:(id)arg1 ;
-(void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2 ;
-(void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2 ;
-(void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1 ;
-(void)addRecordedSpeechSampleData:(id)arg1 ;
-(long long)_taskHint;
-(BOOL)isFinishing;
-(id)_initWithRequest:(id)arg1 queue:(id)arg2 languageCode:(id)arg3 taskHint:(long long)arg4 ;
@end

