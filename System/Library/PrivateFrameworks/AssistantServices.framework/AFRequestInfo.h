/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, AFRequestCompletionOptions, NSNumber, NSString, NSData, NSDictionary, SAStartRequest, SAStartLocalRequest, AFSpeechRequestOptions;

@interface AFRequestInfo : NSObject <NSSecureCoding, NSCopying> {

	BOOL _handoffRequiresUserInteraction;
	unsigned long long _timestamp;
	NSUUID* _turnIdentifier;
	AFRequestCompletionOptions* _requestCompletionOptions;
	NSUUID* _uuid;
	unsigned long long _options;
	NSNumber* _notifyState;
	NSString* _text;
	NSString* _legacyDirectActionIdentifier;
	NSString* _handoffOriginDeviceName;
	NSData* _handoffRequestData;
	NSString* _handoffURLString;
	NSString* _handoffNotification;
	NSString* _correctedSpeech;
	NSDictionary* _correctedSpeechContext;
	SAStartRequest* _startRequest;
	SAStartLocalRequest* _startLocalRequest;
	NSString* _directActionAppId;
	long long _directActionEvent;
	long long _activationEvent;
	AFSpeechRequestOptions* _speechRequestOptions;
	NSNumber* _combinedRank;
	NSNumber* _combinedScore;
	NSString* _interactionId;
	NSNumber* _onDeviceUtterancesPresent;
	NSNumber* _originalRank;
	NSNumber* _originalScore;
	NSString* _previousUtterance;
	NSString* _sessionId;
	NSString* _utteranceSource;
	NSString* _expectedSpeakerSharedUserID;
	unsigned long long _expectedSpeakerConfidenceScore;
	NSDictionary* _nonspeakerConfidenceScores;

}

@property (nonatomic,readonly) NSUUID * uuid;                                                  //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) unsigned long long options;                                       //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSNumber * notifyState;                                             //@synthesize notifyState=_notifyState - In the implementation block
@property (nonatomic,copy) NSString * text;                                                    //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * legacyDirectActionIdentifier;                            //@synthesize legacyDirectActionIdentifier=_legacyDirectActionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * handoffOriginDeviceName;                                 //@synthesize handoffOriginDeviceName=_handoffOriginDeviceName - In the implementation block
@property (nonatomic,copy) NSData * handoffRequestData;                                        //@synthesize handoffRequestData=_handoffRequestData - In the implementation block
@property (nonatomic,copy) NSString * handoffURLString;                                        //@synthesize handoffURLString=_handoffURLString - In the implementation block
@property (assign,nonatomic) BOOL handoffRequiresUserInteraction;                              //@synthesize handoffRequiresUserInteraction=_handoffRequiresUserInteraction - In the implementation block
@property (nonatomic,copy) NSString * handoffNotification;                                     //@synthesize handoffNotification=_handoffNotification - In the implementation block
@property (nonatomic,copy) NSString * correctedSpeech;                                         //@synthesize correctedSpeech=_correctedSpeech - In the implementation block
@property (nonatomic,copy) NSDictionary * correctedSpeechContext;                              //@synthesize correctedSpeechContext=_correctedSpeechContext - In the implementation block
@property (nonatomic,copy) SAStartRequest * startRequest;                                      //@synthesize startRequest=_startRequest - In the implementation block
@property (nonatomic,copy) SAStartLocalRequest * startLocalRequest;                            //@synthesize startLocalRequest=_startLocalRequest - In the implementation block
@property (nonatomic,copy) NSString * directActionAppId;                                       //@synthesize directActionAppId=_directActionAppId - In the implementation block
@property (assign,nonatomic) long long directActionEvent;                                      //@synthesize directActionEvent=_directActionEvent - In the implementation block
@property (assign,nonatomic) long long activationEvent;                                        //@synthesize activationEvent=_activationEvent - In the implementation block
@property (nonatomic,copy) AFSpeechRequestOptions * speechRequestOptions;                      //@synthesize speechRequestOptions=_speechRequestOptions - In the implementation block
@property (nonatomic,copy) AFRequestCompletionOptions * requestCompletionOptions;              //@synthesize requestCompletionOptions=_requestCompletionOptions - In the implementation block
@property (nonatomic,copy) NSNumber * combinedRank;                                            //@synthesize combinedRank=_combinedRank - In the implementation block
@property (nonatomic,copy) NSNumber * combinedScore;                                           //@synthesize combinedScore=_combinedScore - In the implementation block
@property (nonatomic,copy) NSString * interactionId;                                           //@synthesize interactionId=_interactionId - In the implementation block
@property (nonatomic,copy) NSNumber * onDeviceUtterancesPresent;                               //@synthesize onDeviceUtterancesPresent=_onDeviceUtterancesPresent - In the implementation block
@property (nonatomic,copy) NSNumber * originalRank;                                            //@synthesize originalRank=_originalRank - In the implementation block
@property (nonatomic,copy) NSNumber * originalScore;                                           //@synthesize originalScore=_originalScore - In the implementation block
@property (nonatomic,copy) NSString * previousUtterance;                                       //@synthesize previousUtterance=_previousUtterance - In the implementation block
@property (nonatomic,copy) NSString * sessionId;                                               //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,copy) NSString * utteranceSource;                                         //@synthesize utteranceSource=_utteranceSource - In the implementation block
@property (nonatomic,copy) NSString * expectedSpeakerSharedUserID;                             //@synthesize expectedSpeakerSharedUserID=_expectedSpeakerSharedUserID - In the implementation block
@property (assign,nonatomic) unsigned long long expectedSpeakerConfidenceScore;                //@synthesize expectedSpeakerConfidenceScore=_expectedSpeakerConfidenceScore - In the implementation block
@property (nonatomic,copy) NSDictionary * nonspeakerConfidenceScores;                          //@synthesize nonspeakerConfidenceScores=_nonspeakerConfidenceScores - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSUUID * turnIdentifier;                                            //@synthesize turnIdentifier=_turnIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)timestamp;
-(NSUUID *)uuid;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(id)initWithTimestamp:(unsigned long long)arg1 ;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
-(SAStartRequest *)startRequest;
-(void)setStartRequest:(SAStartRequest *)arg1 ;
-(SAStartLocalRequest *)startLocalRequest;
-(void)setStartLocalRequest:(SAStartLocalRequest *)arg1 ;
-(NSNumber *)combinedRank;
-(void)setCombinedRank:(NSNumber *)arg1 ;
-(NSNumber *)combinedScore;
-(void)setCombinedScore:(NSNumber *)arg1 ;
-(NSNumber *)onDeviceUtterancesPresent;
-(void)setOnDeviceUtterancesPresent:(NSNumber *)arg1 ;
-(NSNumber *)originalRank;
-(void)setOriginalRank:(NSNumber *)arg1 ;
-(NSNumber *)originalScore;
-(void)setOriginalScore:(NSNumber *)arg1 ;
-(NSString *)previousUtterance;
-(void)setPreviousUtterance:(NSString *)arg1 ;
-(NSString *)utteranceSource;
-(void)setUtteranceSource:(NSString *)arg1 ;
-(BOOL)isSpeechRequest;
-(NSUUID *)turnIdentifier;
-(long long)activationEvent;
-(void)setSpeechRequestOptions:(AFSpeechRequestOptions *)arg1 ;
-(void)setActivationEvent:(long long)arg1 ;
-(void)setLegacyDirectActionIdentifier:(NSString *)arg1 ;
-(void)setHandoffRequestData:(NSData *)arg1 ;
-(void)setCorrectedSpeech:(NSString *)arg1 ;
-(void)setCorrectedSpeechContext:(NSDictionary *)arg1 ;
-(void)setTurnIdentifier:(NSUUID *)arg1 ;
-(AFSpeechRequestOptions *)speechRequestOptions;
-(void)setNotifyState:(NSNumber *)arg1 ;
-(void)setHandoffOriginDeviceName:(NSString *)arg1 ;
-(void)setHandoffURLString:(NSString *)arg1 ;
-(void)setHandoffRequiresUserInteraction:(BOOL)arg1 ;
-(void)setHandoffNotification:(NSString *)arg1 ;
-(void)setDirectActionAppId:(NSString *)arg1 ;
-(void)setDirectActionEvent:(long long)arg1 ;
-(void)setRequestCompletionOptions:(AFRequestCompletionOptions *)arg1 ;
-(void)setExpectedSpeakerSharedUserID:(NSString *)arg1 ;
-(void)setExpectedSpeakerConfidenceScore:(unsigned long long)arg1 ;
-(void)setNonspeakerConfidenceScores:(NSDictionary *)arg1 ;
-(BOOL)requiresUserInteraction;
-(NSString *)handoffOriginDeviceName;
-(AFRequestCompletionOptions *)requestCompletionOptions;
-(NSNumber *)notifyState;
-(NSString *)legacyDirectActionIdentifier;
-(NSData *)handoffRequestData;
-(NSString *)handoffURLString;
-(BOOL)handoffRequiresUserInteraction;
-(NSString *)handoffNotification;
-(NSString *)correctedSpeech;
-(NSDictionary *)correctedSpeechContext;
-(NSString *)directActionAppId;
-(long long)directActionEvent;
-(NSString *)expectedSpeakerSharedUserID;
-(unsigned long long)expectedSpeakerConfidenceScore;
-(NSDictionary *)nonspeakerConfidenceScores;
@end

