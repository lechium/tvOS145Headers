/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFSpeechParametersMutating.h>

@class AFSpeechParameters, NSString, NSArray, NSData, NSDictionary, NSURL, CLLocation;

@interface _AFSpeechParametersMutation : NSObject <AFSpeechParametersMutating> {

	AFSpeechParameters* _baseModel;
	NSString* _language;
	NSString* _interactionIdentifier;
	NSString* _task;
	NSArray* _loggingContext;
	NSString* _applicationName;
	NSData* _profile;
	NSDictionary* _overrides;
	NSURL* _modelOverrideURL;
	NSURL* _originalAudioFileURL;
	BOOL _narrowband;
	BOOL _detectUtterances;
	BOOL _censorSpeech;
	BOOL _farField;
	BOOL _secureOfflineOnly;
	BOOL _shouldStoreAudioOnDevice;
	double _maximumRecognitionDuration;
	NSString* _inputOrigin;
	CLLocation* _location;
	NSArray* _jitGrammar;
	struct {
		unsigned isDirty : 1;
		unsigned hasLanguage : 1;
		unsigned hasInteractionIdentifier : 1;
		unsigned hasTask : 1;
		unsigned hasLoggingContext : 1;
		unsigned hasApplicationName : 1;
		unsigned hasProfile : 1;
		unsigned hasOverrides : 1;
		unsigned hasModelOverrideURL : 1;
		unsigned hasOriginalAudioFileURL : 1;
		unsigned hasNarrowband : 1;
		unsigned hasDetectUtterances : 1;
		unsigned hasCensorSpeech : 1;
		unsigned hasFarField : 1;
		unsigned hasSecureOfflineOnly : 1;
		unsigned hasShouldStoreAudioOnDevice : 1;
		unsigned hasMaximumRecognitionDuration : 1;
		unsigned hasInputOrigin : 1;
		unsigned hasLocation : 1;
		unsigned hasJitGrammar : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setLanguage:(id)arg1 ;
-(void)setLocation:(id)arg1 ;
-(void)setTask:(id)arg1 ;
-(void)setApplicationName:(id)arg1 ;
-(void)setProfile:(id)arg1 ;
-(id)generate;
-(void)setInputOrigin:(id)arg1 ;
-(void)setCensorSpeech:(BOOL)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setInteractionIdentifier:(id)arg1 ;
-(void)setDetectUtterances:(BOOL)arg1 ;
-(void)setSecureOfflineOnly:(BOOL)arg1 ;
-(void)setFarField:(BOOL)arg1 ;
-(void)setMaximumRecognitionDuration:(double)arg1 ;
-(void)setOriginalAudioFileURL:(id)arg1 ;
-(void)setModelOverrideURL:(id)arg1 ;
-(void)setLoggingContext:(id)arg1 ;
-(void)setOverrides:(id)arg1 ;
-(void)setNarrowband:(BOOL)arg1 ;
-(void)setShouldStoreAudioOnDevice:(BOOL)arg1 ;
-(void)setJitGrammar:(id)arg1 ;
@end
