/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, AFBulletin, NSDictionary, SAGuidanceCheckForGuideUpdateContext, SASPronunciationContext, NSURL, NSArray, NSNumber, AFRequestInfo, AFSpeechRequestOptions, NSMutableArray, NSUUID;

@interface SASRequestOptions : NSObject <NSCopying, NSSecureCoding> {

	long long _requestSource;
	BOOL _pronunciationRequest;
	BOOL _isForCarDND;
	BOOL _isConnectedToCarPlay;
	BOOL _rightHandDrive;
	BOOL _initialBringUp;
	BOOL _useAutomaticEndpointing;
	BOOL _useStreamingDictation;
	BOOL _acousticIdEnabled;
	BOOL _releaseAudioSessionOnRecordingCompletion;
	BOOL _predictedRecordRouteIsZLL;
	BOOL _shortButtonPressAction;
	NSString* _activationDeviceIdentifier;
	AFBulletin* _bulletin;
	NSString* _appBundleIdentifier;
	NSDictionary* _directActionContextPayload;
	SAGuidanceCheckForGuideUpdateContext* _checkForGuideUpdateContext;
	long long _directActionEvent;
	NSString* _serverCommandId;
	SASPronunciationContext* _pronunciationContext;
	NSString* _text;
	NSURL* _speechFileURL;
	double _expectedTimestamp;
	double _timestamp;
	double _buttonDownTimestamp;
	NSArray* _currentCarPlaySupportedOEMAppIdList;
	unsigned long long _carDNDStatus;
	NSNumber* _homeButtonUpFromBeep;
	NSDictionary* _continuityInfo;
	AFRequestInfo* _requestInfo;
	AFSpeechRequestOptions* _speechRequestOptions;
	NSString* _uiPresentationIdentifier;
	NSMutableArray* _instrumentationEvents;
	NSUUID* _previousTurnIdentifier;
	NSArray* _contextAppInfosForSiriViewController;
	NSDictionary* _testingContext;
	unsigned long long _currentLockState;
	NSString* _startRecordingSoundId;
	SASRequestOptions* _originalRequestOptions;
	long long _presentationMode;
	unsigned long long _tvRemoteType;

}

@property (assign,nonatomic) long long requestSource; 
@property (nonatomic,copy) NSString * activationDeviceIdentifier;                                          //@synthesize activationDeviceIdentifier=_activationDeviceIdentifier - In the implementation block
@property (nonatomic,retain) AFBulletin * bulletin;                                                        //@synthesize bulletin=_bulletin - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;                                                 //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * directActionContextPayload;                                      //@synthesize directActionContextPayload=_directActionContextPayload - In the implementation block
@property (nonatomic,copy) SAGuidanceCheckForGuideUpdateContext * checkForGuideUpdateContext;              //@synthesize checkForGuideUpdateContext=_checkForGuideUpdateContext - In the implementation block
@property (assign,nonatomic) long long directActionEvent;                                                  //@synthesize directActionEvent=_directActionEvent - In the implementation block
@property (nonatomic,copy) NSString * serverCommandId;                                                     //@synthesize serverCommandId=_serverCommandId - In the implementation block
@property (assign,getter=isPronunciationRequest,nonatomic) BOOL pronunciationRequest;                      //@synthesize pronunciationRequest=_pronunciationRequest - In the implementation block
@property (nonatomic,retain) SASPronunciationContext * pronunciationContext;                               //@synthesize pronunciationContext=_pronunciationContext - In the implementation block
@property (nonatomic,copy) NSString * text;                                                                //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSURL * speechFileURL;                                                          //@synthesize speechFileURL=_speechFileURL - In the implementation block
@property (assign,nonatomic) double expectedTimestamp;                                                     //@synthesize expectedTimestamp=_expectedTimestamp - In the implementation block
@property (assign,nonatomic) double timestamp;                                                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double buttonDownTimestamp;                                                   //@synthesize buttonDownTimestamp=_buttonDownTimestamp - In the implementation block
@property (getter=isForStark,nonatomic,readonly) BOOL forStark; 
@property (nonatomic,retain) NSArray * currentCarPlaySupportedOEMAppIdList;                                //@synthesize currentCarPlaySupportedOEMAppIdList=_currentCarPlaySupportedOEMAppIdList - In the implementation block
@property (assign,nonatomic) BOOL isForCarDND;                                                             //@synthesize isForCarDND=_isForCarDND - In the implementation block
@property (assign,nonatomic) BOOL isConnectedToCarPlay;                                                    //@synthesize isConnectedToCarPlay=_isConnectedToCarPlay - In the implementation block
@property (assign,nonatomic) unsigned long long carDNDStatus;                                              //@synthesize carDNDStatus=_carDNDStatus - In the implementation block
@property (assign,getter=isRightHandDrive,nonatomic) BOOL rightHandDrive;                                  //@synthesize rightHandDrive=_rightHandDrive - In the implementation block
@property (nonatomic,readonly) BOOL isForAppleTV; 
@property (nonatomic,readonly) BOOL isForEyesFree; 
@property (nonatomic,readonly) long long inputType; 
@property (assign,getter=isInitialBringUp,nonatomic) BOOL initialBringUp;                                  //@synthesize initialBringUp=_initialBringUp - In the implementation block
@property (assign,nonatomic) BOOL useAutomaticEndpointing;                                                 //@synthesize useAutomaticEndpointing=_useAutomaticEndpointing - In the implementation block
@property (assign,nonatomic) BOOL useStreamingDictation;                                                   //@synthesize useStreamingDictation=_useStreamingDictation - In the implementation block
@property (nonatomic,retain) NSNumber * homeButtonUpFromBeep;                                              //@synthesize homeButtonUpFromBeep=_homeButtonUpFromBeep - In the implementation block
@property (nonatomic,copy) NSDictionary * continuityInfo;                                                  //@synthesize continuityInfo=_continuityInfo - In the implementation block
@property (nonatomic,retain) AFRequestInfo * requestInfo;                                                  //@synthesize requestInfo=_requestInfo - In the implementation block
@property (nonatomic,retain) AFSpeechRequestOptions * speechRequestOptions;                                //@synthesize speechRequestOptions=_speechRequestOptions - In the implementation block
@property (assign,nonatomic) BOOL acousticIdEnabled;                                                       //@synthesize acousticIdEnabled=_acousticIdEnabled - In the implementation block
@property (assign,nonatomic) BOOL releaseAudioSessionOnRecordingCompletion;                                //@synthesize releaseAudioSessionOnRecordingCompletion=_releaseAudioSessionOnRecordingCompletion - In the implementation block
@property (assign,nonatomic) BOOL predictedRecordRouteIsZLL;                                               //@synthesize predictedRecordRouteIsZLL=_predictedRecordRouteIsZLL - In the implementation block
@property (nonatomic,retain) NSString * uiPresentationIdentifier;                                          //@synthesize uiPresentationIdentifier=_uiPresentationIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * instrumentationEvents;                                       //@synthesize instrumentationEvents=_instrumentationEvents - In the implementation block
@property (nonatomic,retain) NSUUID * previousTurnIdentifier;                                              //@synthesize previousTurnIdentifier=_previousTurnIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * contextAppInfosForSiriViewController;                               //@synthesize contextAppInfosForSiriViewController=_contextAppInfosForSiriViewController - In the implementation block
@property (nonatomic,retain) NSDictionary * testingContext;                                                //@synthesize testingContext=_testingContext - In the implementation block
@property (assign,nonatomic) unsigned long long currentLockState;                                          //@synthesize currentLockState=_currentLockState - In the implementation block
@property (nonatomic,copy) NSString * startRecordingSoundId;                                               //@synthesize startRecordingSoundId=_startRecordingSoundId - In the implementation block
@property (assign,getter=isShortButtonPressAction,nonatomic) BOOL shortButtonPressAction;                  //@synthesize shortButtonPressAction=_shortButtonPressAction - In the implementation block
@property (nonatomic,copy) SASRequestOptions * originalRequestOptions;                                     //@synthesize originalRequestOptions=_originalRequestOptions - In the implementation block
@property (assign,nonatomic) long long presentationMode;                                                   //@synthesize presentationMode=_presentationMode - In the implementation block
@property (assign,nonatomic) unsigned long long tvRemoteType;                                              //@synthesize tvRemoteType=_tvRemoteType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(void)setRequestSource:(long long)arg1 ;
-(long long)requestSource;
-(long long)inputType;
-(SASPronunciationContext *)pronunciationContext;
-(SAGuidanceCheckForGuideUpdateContext *)checkForGuideUpdateContext;
-(void)setSpeechRequestOptions:(AFSpeechRequestOptions *)arg1 ;
-(AFSpeechRequestOptions *)speechRequestOptions;
-(NSString *)serverCommandId;
-(void)setDirectActionEvent:(long long)arg1 ;
-(long long)directActionEvent;
-(BOOL)releaseAudioSessionOnRecordingCompletion;
-(void)setReleaseAudioSessionOnRecordingCompletion:(BOOL)arg1 ;
-(void)setActivationDeviceIdentifier:(NSString *)arg1 ;
-(NSString *)activationDeviceIdentifier;
-(void)setServerCommandId:(NSString *)arg1 ;
-(void)setUseAutomaticEndpointing:(BOOL)arg1 ;
-(void)setUseStreamingDictation:(BOOL)arg1 ;
-(void)setHomeButtonUpFromBeep:(NSNumber *)arg1 ;
-(void)setAcousticIdEnabled:(BOOL)arg1 ;
-(void)setPresentationMode:(long long)arg1 ;
-(BOOL)useAutomaticEndpointing;
-(BOOL)useStreamingDictation;
-(BOOL)isInitialBringUp;
-(NSNumber *)homeButtonUpFromBeep;
-(BOOL)acousticIdEnabled;
-(long long)presentationMode;
-(void)setBulletin:(AFBulletin *)arg1 ;
-(AFBulletin *)bulletin;
-(AFRequestInfo *)requestInfo;
-(unsigned long long)tvRemoteType;
-(NSUUID *)previousTurnIdentifier;
-(NSMutableArray *)instrumentationEvents;
-(NSDictionary *)directActionContextPayload;
-(NSURL *)speechFileURL;
-(NSDictionary *)continuityInfo;
-(BOOL)isPronunciationRequest;
-(double)buttonDownTimestamp;
-(double)expectedTimestamp;
-(NSString *)startRecordingSoundId;
-(id)initWithRequestSource:(long long)arg1 uiPresentationIdentifier:(id)arg2 ;
-(void)setSpeechFileURL:(NSURL *)arg1 ;
-(void)updateIfNeededWithSystemState:(id)arg1 ;
-(BOOL)predictedRecordRouteIsZLL;
-(void)setInitialBringUp:(BOOL)arg1 ;
-(void)setRequestInfo:(AFRequestInfo *)arg1 ;
-(NSDictionary *)testingContext;
-(id)initWithRequestSource:(long long)arg1 uiPresentationIdentifier:(id)arg2 systemState:(id)arg3 ;
-(void)setPredictedRecordRouteIsZLL:(BOOL)arg1 ;
-(BOOL)isForStark;
-(void)setButtonDownTimestamp:(double)arg1 ;
-(void)setShortButtonPressAction:(BOOL)arg1 ;
-(void)setDirectActionContextPayload:(NSDictionary *)arg1 ;
-(void)setContinuityInfo:(NSDictionary *)arg1 ;
-(void)setCurrentLockState:(unsigned long long)arg1 ;
-(BOOL)isConnectedToCarPlay;
-(void)setTvRemoteType:(unsigned long long)arg1 ;
-(void)setTestingContext:(NSDictionary *)arg1 ;
-(BOOL)isHTTRequestSource;
-(NSString *)uiPresentationIdentifier;
-(void)_configureStreamingDictationForSource:(long long)arg1 ;
-(void)_updateWithSystemState:(id)arg1 forcefully:(BOOL)arg2 ;
-(void)setCheckForGuideUpdateContext:(SAGuidanceCheckForGuideUpdateContext *)arg1 ;
-(void)setPronunciationRequest:(BOOL)arg1 ;
-(void)setPronunciationContext:(SASPronunciationContext *)arg1 ;
-(void)setExpectedTimestamp:(double)arg1 ;
-(NSArray *)contextAppInfosForSiriViewController;
-(void)setContextAppInfosForSiriViewController:(NSArray *)arg1 ;
-(void)setIsConnectedToCarPlay:(BOOL)arg1 ;
-(BOOL)isForCarDND;
-(void)setIsForCarDND:(BOOL)arg1 ;
-(unsigned long long)carDNDStatus;
-(void)setCarDNDStatus:(unsigned long long)arg1 ;
-(unsigned long long)currentLockState;
-(NSArray *)currentCarPlaySupportedOEMAppIdList;
-(void)setCurrentCarPlaySupportedOEMAppIdList:(NSArray *)arg1 ;
-(BOOL)isShortButtonPressAction;
-(void)setInstrumentationEvents:(NSMutableArray *)arg1 ;
-(void)setStartRecordingSoundId:(NSString *)arg1 ;
-(SASRequestOptions *)originalRequestOptions;
-(void)setOriginalRequestOptions:(SASRequestOptions *)arg1 ;
-(BOOL)isRightHandDrive;
-(void)setRightHandDrive:(BOOL)arg1 ;
-(BOOL)_isTypeToSiriPermittedAndEnabledForRequestOptions;
-(BOOL)_isForSpeechRequest;
-(BOOL)isB288Activation;
-(long long)_presentationIdentifierFromUIPresentationIdentifier:(id)arg1 ;
-(BOOL)isForEyesFree;
-(id)initWithRequestSource:(long long)arg1 ;
-(BOOL)isForAppleTV;
-(void)setUiPresentationIdentifier:(NSString *)arg1 ;
-(void)setPreviousTurnIdentifier:(NSUUID *)arg1 ;
@end

