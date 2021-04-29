/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/INKeyImageProducing.h>
#import <libobjc.A.dylib/INMessageExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, INPerson, NSArray, NSNumber, INSpeakableString, INMessageLinkMetadata, INCurrencyAmount, INImage;

@interface INMessage : NSObject <INCacheableContainer, INImageProxyInjecting, INKeyImageProducing, INMessageExport, NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _conversationIdentifier;
	NSString* _content;
	NSDate* _dateSent;
	INPerson* _sender;
	NSArray* _recipients;
	INSpeakableString* _groupName;
	long long _messageType;
	NSString* _serviceName;
	NSDate* _dateMessageWasLastRead;
	NSNumber* _numberOfAttachments;
	long long _messageEffectType;
	INMessage* _referencedMessage;
	INMessageLinkMetadata* _linkMetadata;
	INCurrencyAmount* _paymentAmount;
	NSString* _locationName;
	NSString* _fileExtension;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) INImage * _keyImage; 
@property (nonatomic,copy,readonly) NSDate * dateMessageWasLastRead;                //@synthesize dateMessageWasLastRead=_dateMessageWasLastRead - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * numberOfAttachments;                 //@synthesize numberOfAttachments=_numberOfAttachments - In the implementation block
@property (nonatomic,readonly) long long messageEffectType;                         //@synthesize messageEffectType=_messageEffectType - In the implementation block
@property (nonatomic,copy,readonly) INMessage * referencedMessage;                  //@synthesize referencedMessage=_referencedMessage - In the implementation block
@property (nonatomic,copy) INMessageLinkMetadata * linkMetadata;                    //@synthesize linkMetadata=_linkMetadata - In the implementation block
@property (nonatomic,copy) INCurrencyAmount * paymentAmount;                        //@synthesize paymentAmount=_paymentAmount - In the implementation block
@property (nonatomic,copy) NSString * locationName;                                 //@synthesize locationName=_locationName - In the implementation block
@property (nonatomic,copy) NSString * fileExtension;                                //@synthesize fileExtension=_fileExtension - In the implementation block
@property (nonatomic,copy) INPerson * sender;                                       //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSArray * recipients;                                    //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * conversationIdentifier;              //@synthesize conversationIdentifier=_conversationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * content;                             //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dateSent;                              //@synthesize dateSent=_dateSent - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * groupName;                  //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,readonly) long long messageType;                               //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceName;                         //@synthesize serviceName=_serviceName - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(INPerson *)sender;
-(void)setSender:(INPerson *)arg1 ;
-(NSString *)content;
-(NSString *)serviceName;
-(long long)messageType;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(INSpeakableString *)groupName;
-(id)_dictionaryRepresentation;
-(NSString *)locationName;
-(void)setLocationName:(NSString *)arg1 ;
-(NSString *)conversationIdentifier;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(INImage *)_keyImage;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSDate *)dateSent;
-(NSString *)fileExtension;
-(void)setFileExtension:(NSString *)arg1 ;
-(INMessageLinkMetadata *)linkMetadata;
-(void)setLinkMetadata:(INMessageLinkMetadata *)arg1 ;
-(NSNumber *)numberOfAttachments;
-(INCurrencyAmount *)paymentAmount;
-(void)setPaymentAmount:(INCurrencyAmount *)arg1 ;
-(INMessage *)referencedMessage;
-(NSDate *)dateMessageWasLastRead;
-(long long)messageEffectType;
-(id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 groupName:(id)arg7 dateMessageWasLastRead:(id)arg8 numberOfAttachments:(id)arg9 messageType:(long long)arg10 messageEffectType:(long long)arg11 referencedMessage:(id)arg12 serviceName:(id)arg13 ;
-(id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 groupName:(id)arg7 dateMessageWasLastRead:(id)arg8 numberOfAttachments:(id)arg9 messageType:(long long)arg10 messageEffectType:(long long)arg11 referencedMessage:(id)arg12 ;
-(id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 groupName:(id)arg7 dateMessageWasLastRead:(id)arg8 numberOfAttachments:(id)arg9 messageType:(long long)arg10 messageEffectType:(long long)arg11 ;
-(id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 groupName:(id)arg7 messageType:(long long)arg8 ;
-(id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 groupName:(id)arg7 messageType:(long long)arg8 serviceName:(id)arg9 ;
-(id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 dateMessageWasLastRead:(id)arg7 numberOfAttachments:(id)arg8 messageType:(long long)arg9 messageEffectType:(long long)arg10 ;
-(id)initWithIdentifier:(id)arg1 conversationIdentifier:(id)arg2 content:(id)arg3 dateSent:(id)arg4 sender:(id)arg5 recipients:(id)arg6 messageType:(long long)arg7 ;
-(id)initWithIdentifier:(id)arg1 content:(id)arg2 dateSent:(id)arg3 sender:(id)arg4 recipients:(id)arg5 ;
@end

