/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TIKeyboardSecureCandidateRenderer, NSUUID, NSString, NSDictionary;

@interface TIAppAutofillManager : NSObject {

	TIKeyboardSecureCandidateRenderer* _secureCandidateRenderer;
	id _oneTimeCodeProvider;
	NSUUID* _documentIdentifierForLastAutofillGeneration;
	NSString* _clientIdentifierForLastAutofillGeneration;
	NSString* _clientIdentifierForLastKeyboardSync;
	NSDictionary* _queuedCustomInfo;
	NSDictionary* _queuedUnauthenticatedCustomInfo;

}

@property (nonatomic,retain) NSUUID * documentIdentifierForLastAutofillGeneration;                       //@synthesize documentIdentifierForLastAutofillGeneration=_documentIdentifierForLastAutofillGeneration - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifierForLastAutofillGeneration;                       //@synthesize clientIdentifierForLastAutofillGeneration=_clientIdentifierForLastAutofillGeneration - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifierForLastKeyboardSync;                             //@synthesize clientIdentifierForLastKeyboardSync=_clientIdentifierForLastKeyboardSync - In the implementation block
@property (nonatomic,retain) NSDictionary * queuedCustomInfo;                                            //@synthesize queuedCustomInfo=_queuedCustomInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * queuedUnauthenticatedCustomInfo;                             //@synthesize queuedUnauthenticatedCustomInfo=_queuedUnauthenticatedCustomInfo - In the implementation block
@property (nonatomic,readonly) TIKeyboardSecureCandidateRenderer * secureCandidateRenderer; 
+(id)sharedInstance;
-(id)initPrivate;
-(TIKeyboardSecureCandidateRenderer *)secureCandidateRenderer;
-(void)obtainCredential:(id)arg1 ;
-(void)pushQueuedCredentialIfNecessaryForKeyboardState:(id)arg1 ;
-(BOOL)isValidedString:(id)arg1 ;
-(id)customInfoFromCredential:(id)arg1 ;
-(BOOL)_simulatesAutofillCandidates;
-(id)obtainApplicationIdentifierFromConnection:(id)arg1 ;
-(id)obtainBundleIdentifierFromConnection:(id)arg1 ;
-(id)generateAutofillFormCandidatesWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2 ;
-(id)generateAutofillFormSuggestedUsernameWithRenderTraits:(id)arg1 withKeyboardState:(id)arg2 ;
-(BOOL)shouldAuthenticateToAcceptAutofill;
-(void)shouldAcceptAutofill:(id)arg1 withPayload:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)shouldAcceptOneTimeCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSUUID *)documentIdentifierForLastAutofillGeneration;
-(void)setDocumentIdentifierForLastAutofillGeneration:(NSUUID *)arg1 ;
-(NSString *)clientIdentifierForLastAutofillGeneration;
-(void)setClientIdentifierForLastAutofillGeneration:(NSString *)arg1 ;
-(NSString *)clientIdentifierForLastKeyboardSync;
-(void)setClientIdentifierForLastKeyboardSync:(NSString *)arg1 ;
-(NSDictionary *)queuedCustomInfo;
-(void)setQueuedCustomInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)queuedUnauthenticatedCustomInfo;
-(void)setQueuedUnauthenticatedCustomInfo:(NSDictionary *)arg1 ;
@end

