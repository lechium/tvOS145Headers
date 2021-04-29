/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSString, INSpeakableString, INPerson;


@protocol INSendMessageIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * recipients; 
@property (assign,nonatomic) long long outgoingMessageType; 
@property (nonatomic,copy) NSString * content; 
@property (nonatomic,copy) INSpeakableString * speakableGroupName; 
@property (nonatomic,copy) NSString * conversationIdentifier; 
@property (nonatomic,copy) NSString * serviceName; 
@property (nonatomic,copy) INPerson * sender; 
@property (assign,nonatomic) long long effect; 
@property (nonatomic,copy) NSArray * attachments; 
@required
-(id)init;
-(INPerson *)sender;
-(void)setSender:(id)arg1;
-(NSString *)content;
-(NSArray *)attachments;
-(void)setAttachments:(id)arg1;
-(NSString *)serviceName;
-(void)setRecipients:(id)arg1;
-(NSArray *)recipients;
-(void)setServiceName:(id)arg1;
-(void)setContent:(id)arg1;
-(NSString *)conversationIdentifier;
-(void)setConversationIdentifier:(id)arg1;
-(long long)effect;
-(void)setEffect:(long long)arg1;
-(INSpeakableString *)speakableGroupName;
-(void)setSpeakableGroupName:(id)arg1;
-(long long)outgoingMessageType;
-(void)setOutgoingMessageType:(long long)arg1;

@end

