/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDate, INPerson, NSArray, NSNumber;


@protocol INMessageExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * conversationIdentifier; 
@property (nonatomic,copy) NSString * content; 
@property (nonatomic,copy) NSDate * dateSent; 
@property (nonatomic,copy) INPerson * sender; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSDate * dateMessageWasLastRead; 
@property (nonatomic,copy) NSNumber * numberOfAttachments; 
@property (assign,nonatomic) long long messageType; 
@property (assign,nonatomic) long long messageEffectType; 
@required
-(id)init;
-(NSString *)identifier;
-(INPerson *)sender;
-(void)setSender:(id)arg1;
-(void)setIdentifier:(id)arg1;
-(NSString *)content;
-(long long)messageType;
-(void)setRecipients:(id)arg1;
-(NSArray *)recipients;
-(void)setMessageType:(long long)arg1;
-(void)setContent:(id)arg1;
-(NSString *)conversationIdentifier;
-(void)setConversationIdentifier:(id)arg1;
-(NSDate *)dateSent;
-(void)setDateSent:(id)arg1;
-(NSNumber *)numberOfAttachments;
-(void)setNumberOfAttachments:(id)arg1;
-(NSDate *)dateMessageWasLastRead;
-(void)setDateMessageWasLastRead:(id)arg1;
-(long long)messageEffectType;
-(void)setMessageEffectType:(long long)arg1;

@end

