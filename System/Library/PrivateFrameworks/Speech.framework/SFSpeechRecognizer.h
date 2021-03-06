/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Speech.framework/Speech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFDictationDelegate.h>

@protocol NSObject, SFSpeechRecognizerDelegate;
@class AFDictationConnection, NSString, NSLocale, NSOperationQueue;

@interface SFSpeechRecognizer : NSObject <AFDictationDelegate> {

	AFDictationConnection* _dictationConnection;
	NSString* _languageCode;
	id<NSObject> _facetimeObserver;
	id<NSObject> _foregroundObserver;
	id<NSObject> _preferencesObserver;
	BOOL _supportsOnDeviceRecognition;
	NSLocale* _locale;
	id<SFSpeechRecognizerDelegate> _delegate;
	long long _defaultTaskHint;
	NSOperationQueue* _queue;

}

@property (getter=_isAvailableForForcedOfflineRecognition,nonatomic,readonly) BOOL _availableForForcedOfflineRecognition; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@property (nonatomic,copy,readonly) NSLocale * locale;                                                                                 //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) BOOL supportsOnDeviceRecognition;                                                                         //@synthesize supportsOnDeviceRecognition=_supportsOnDeviceRecognition - In the implementation block
@property (assign,nonatomic,__weak) id<SFSpeechRecognizerDelegate> delegate;                                                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long defaultTaskHint;                                                                                //@synthesize defaultTaskHint=_defaultTaskHint - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;                                                                                 //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(long long)authorizationStatus;
+(void)requestAuthorization:(/*^block*/id)arg1 ;
+(id)supportedLocales;
+(void)_fetchSupportedForcedOfflineLocalesWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<SFSpeechRecognizerDelegate>)delegate;
-(void)setDelegate:(id<SFSpeechRecognizerDelegate>)arg1 ;
-(NSLocale *)locale;
-(id)initWithLocale:(id)arg1 ;
-(NSOperationQueue *)queue;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(BOOL)isAvailable;
-(void)dictationConnnectionDidChangeAvailability:(id)arg1 ;
-(BOOL)supportsOnDeviceRecognition;
-(id)recognitionTaskWithRequest:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)recognitionTaskWithRequest:(id)arg1 delegate:(id)arg2 ;
-(void)_informDelegateOfPreferencesChange;
-(BOOL)_isAvailableForForcedOfflineRecognition;
-(void)_informDelegateOfAvailabilityChange;
-(void)_requestOfflineDictationSupportWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_isInternalTaskHint:(long long)arg1 ;
-(void)setSupportsOnDeviceRecognition:(BOOL)arg1 ;
-(long long)defaultTaskHint;
-(void)setDefaultTaskHint:(long long)arg1 ;
@end

