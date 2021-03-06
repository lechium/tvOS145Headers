/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SATurnIdContaining.h>

@class NSString, SAIntentGroupSiriKitAppSelectionState, SAIntentGroupAceBargeInState, SAPerson, NSArray, SAIntentGroupParse, SAIntentGroupSiriKitListPosition, SAIntentGroupSiriKitRemoteExecution, SAIntentGroupSiriKitMetrics;

@interface SAIntentGroupRunSiriKitExecutor : SABaseClientBoundCommand <SATurnIdContaining>

@property (nonatomic,retain) SAIntentGroupSiriKitAppSelectionState * appSelectionState; 
@property (nonatomic,retain) SAIntentGroupAceBargeInState * bargeInState; 
@property (nonatomic,copy) NSString * confirmationState; 
@property (assign,nonatomic) BOOL directAction; 
@property (assign,nonatomic) BOOL eyesFree; 
@property (nonatomic,copy) NSString * goalID; 
@property (nonatomic,retain) SAPerson * identifiedUserMeCard; 
@property (nonatomic,copy) NSString * inputOrigin; 
@property (nonatomic,copy) NSString * interactionType; 
@property (assign,nonatomic) BOOL multiUser; 
@property (nonatomic,copy) NSArray * parameterMetadata; 
@property (nonatomic,copy) NSArray * parameterPrompts; 
@property (nonatomic,copy) NSString * parentGoalID; 
@property (nonatomic,retain) SAIntentGroupParse * parse; 
@property (nonatomic,retain) SAIntentGroupSiriKitListPosition * readingListPosition; 
@property (nonatomic,retain) SAIntentGroupSiriKitRemoteExecution * remoteExecution; 
@property (assign,nonatomic) BOOL requiresConditionalMultiUserGrounding; 
@property (nonatomic,copy) NSString * sessionHandOffContinuityID; 
@property (nonatomic,retain) SAIntentGroupSiriKitMetrics * siriKitMetrics; 
@property (assign,nonatomic) BOOL textToSpeechEnabled; 
@property (nonatomic,copy) NSString * turnId; 
@property (nonatomic,copy) NSString * userInitiatedAction; 
@property (nonatomic,copy) NSString * usoVerb; 
@property (assign,nonatomic) BOOL voiceTriggerEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)runSiriKitExecutor;
+(id)runSiriKitExecutorWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAIntentGroupParse *)parse;
-(NSString *)interactionType;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAIntentGroupSiriKitMetrics *)siriKitMetrics;
-(NSString *)turnId;
-(void)setTurnId:(NSString *)arg1 ;
-(BOOL)mutatingCommand;
-(SAIntentGroupSiriKitAppSelectionState *)appSelectionState;
-(void)setAppSelectionState:(SAIntentGroupSiriKitAppSelectionState *)arg1 ;
-(SAIntentGroupAceBargeInState *)bargeInState;
-(void)setBargeInState:(SAIntentGroupAceBargeInState *)arg1 ;
-(NSString *)confirmationState;
-(void)setConfirmationState:(NSString *)arg1 ;
-(BOOL)directAction;
-(void)setDirectAction:(BOOL)arg1 ;
-(BOOL)eyesFree;
-(void)setEyesFree:(BOOL)arg1 ;
-(NSString *)goalID;
-(void)setGoalID:(NSString *)arg1 ;
-(SAPerson *)identifiedUserMeCard;
-(void)setIdentifiedUserMeCard:(SAPerson *)arg1 ;
-(NSString *)inputOrigin;
-(void)setInputOrigin:(NSString *)arg1 ;
-(void)setInteractionType:(NSString *)arg1 ;
-(BOOL)multiUser;
-(void)setMultiUser:(BOOL)arg1 ;
-(NSArray *)parameterMetadata;
-(void)setParameterMetadata:(NSArray *)arg1 ;
-(NSArray *)parameterPrompts;
-(void)setParameterPrompts:(NSArray *)arg1 ;
-(NSString *)parentGoalID;
-(void)setParentGoalID:(NSString *)arg1 ;
-(void)setParse:(SAIntentGroupParse *)arg1 ;
-(SAIntentGroupSiriKitListPosition *)readingListPosition;
-(void)setReadingListPosition:(SAIntentGroupSiriKitListPosition *)arg1 ;
-(SAIntentGroupSiriKitRemoteExecution *)remoteExecution;
-(void)setRemoteExecution:(SAIntentGroupSiriKitRemoteExecution *)arg1 ;
-(BOOL)requiresConditionalMultiUserGrounding;
-(void)setRequiresConditionalMultiUserGrounding:(BOOL)arg1 ;
-(NSString *)sessionHandOffContinuityID;
-(void)setSessionHandOffContinuityID:(NSString *)arg1 ;
-(void)setSiriKitMetrics:(SAIntentGroupSiriKitMetrics *)arg1 ;
-(BOOL)textToSpeechEnabled;
-(void)setTextToSpeechEnabled:(BOOL)arg1 ;
-(NSString *)userInitiatedAction;
-(void)setUserInitiatedAction:(NSString *)arg1 ;
-(NSString *)usoVerb;
-(void)setUsoVerb:(NSString *)arg1 ;
-(BOOL)voiceTriggerEnabled;
-(void)setVoiceTriggerEnabled:(BOOL)arg1 ;
@end

