/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSendMessageIntentExport.h>

@class NSArray, NSString, INSpeakableString, INPerson;

@interface INSendMessageIntent : INIntent <INSendMessageIntentExport>

@property (nonatomic,copy,readonly) NSArray * recipients; 
@property (nonatomic,readonly) long long outgoingMessageType; 
@property (nonatomic,copy,readonly) NSString * content; 
@property (nonatomic,copy,readonly) INSpeakableString * speakableGroupName; 
@property (nonatomic,copy,readonly) NSString * conversationIdentifier; 
@property (nonatomic,copy,readonly) NSString * serviceName; 
@property (nonatomic,copy,readonly) INPerson * sender; 
@property (nonatomic,copy,readonly) NSArray * attachments; 
@property (assign,nonatomic) long long effect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_ignoredParameters;
-(BOOL)cd_saveToPeopleStore;
-(id)domain;
-(INPerson *)sender;
-(void)setDomain:(id)arg1 ;
-(void)setSender:(INPerson *)arg1 ;
-(NSString *)content;
-(NSArray *)attachments;
-(void)setAttachments:(NSArray *)arg1 ;
-(id)_metadata;
-(NSString *)serviceName;
-(void)_setMetadata:(id)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(void)setServiceName:(NSString *)arg1 ;
-(id)groupName;
-(void)setGroupName:(id)arg1 ;
-(void)setContent:(NSString *)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)conversationIdentifier;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)verb;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithRecipients:(id)arg1 content:(id)arg2 serviceName:(id)arg3 sender:(id)arg4 ;
-(BOOL)_isUserConfirmationRequired;
-(BOOL)_isValidSubProducer:(id)arg1 ;
-(id)initWithRecipients:(id)arg1 outgoingMessageType:(long long)arg2 content:(id)arg3 speakableGroupName:(id)arg4 conversationIdentifier:(id)arg5 serviceName:(id)arg6 sender:(id)arg7 ;
-(id)initWithRecipients:(id)arg1 content:(id)arg2 groupName:(id)arg3 serviceName:(id)arg4 sender:(id)arg5 ;
-(id)initWithRecipients:(id)arg1 content:(id)arg2 speakableGroupName:(id)arg3 conversationIdentifier:(id)arg4 serviceName:(id)arg5 sender:(id)arg6 ;
-(id)_spotlightContentType;
-(void)setConversationIdentifier:(NSString *)arg1 ;
-(long long)effect;
-(void)setEffect:(long long)arg1 ;
-(INSpeakableString *)speakableGroupName;
-(void)setSpeakableGroupName:(INSpeakableString *)arg1 ;
-(id)_validParameterCombinationsWithSchema:(id)arg1 ;
-(id)_currentParameterCombination;
-(long long)outgoingMessageType;
-(void)setOutgoingMessageType:(long long)arg1 ;
-(long long)_preferredInteractionDirection;
-(id)initWithRecipients:(id)arg1 outgoingMessageType:(long long)arg2 content:(id)arg3 speakableGroupName:(id)arg4 conversationIdentifier:(id)arg5 serviceName:(id)arg6 sender:(id)arg7 attachments:(id)arg8 ;
-(id)_redactedDictionaryRepresentation;
-(id)_keyCodableAttributes;
-(void)_intents_resolveOutgoingMessageTypeWithCompletionHandler:(/*^block*/id)arg1 ;
@end

