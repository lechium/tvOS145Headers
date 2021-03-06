/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/INIntentSlotComposing.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INEnumerable.h>
#import <libobjc.A.dylib/INKeyImageProducing.h>
#import <libobjc.A.dylib/INIntentResponseExport.h>
#import <libobjc.A.dylib/INGenericIntentResponse.h>
#import <libobjc.A.dylib/INRuntimeObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _INPBIntentResponse, NSDictionary, PBCodable, INCodableDescription, NSUserActivity, NSString, INImage, INIntentResponseCodableCode, INIntentResponseDescription;

@interface INIntentResponse : NSObject <INImageProxyInjecting, INIntentSlotComposing, INCacheableContainer, INEnumerable, INKeyImageProducing, INIntentResponseExport, INGenericIntentResponse, INRuntimeObject, NSCopying, NSSecureCoding> {

	BOOL __userConfirmationRequired;
	long long _code;
	_INPBIntentResponse* _backingStore;
	PBCodable* _responseMessagePBRepresentation;
	INCodableDescription* _codableDescription;
	NSUserActivity* _userActivity;
	long long __stage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) long long _intents_toggleState; 
@property (getter=_isSuccess,nonatomic,readonly) BOOL _success; 
@property (readonly) INImage * _keyImage; 
@property (assign,nonatomic) long long code;                                                                                        //@synthesize code=_code - In the implementation block
@property (assign,setter=_setStage:,nonatomic) long long _stage;                                                                    //@synthesize _stage=__stage - In the implementation block
@property (setter=_setResponseMessagePBRepresentation:,nonatomic,retain) PBCodable * _responseMessagePBRepresentation;              //@synthesize responseMessagePBRepresentation=_responseMessagePBRepresentation - In the implementation block
@property (nonatomic,readonly) NSDictionary * _JSONDictionaryRepresentation; 
@property (nonatomic,copy,readonly) _INPBIntentResponse * backingStore;                                                             //@synthesize backingStore=_backingStore - In the implementation block
@property (setter=_setPayloadResponseTypeName:,nonatomic,retain) NSString * _payloadResponseTypeName; 
@property (nonatomic,readonly) long long _intentResponseCode; 
@property (nonatomic,readonly) INIntentResponseCodableCode * _intentResponseCodableCode; 
@property (nonatomic,readonly) INIntentResponseDescription * _instanceDescription; 
@property (nonatomic,readonly) INCodableDescription * _codableDescription;                                                          //@synthesize codableDescription=_codableDescription - In the implementation block
@property (nonatomic,readonly) BOOL _userConfirmationRequired;                                                                      //@synthesize _userConfirmationRequired=__userConfirmationRequired - In the implementation block
@property (nonatomic,readonly) BOOL _shouldForwardIntentToApp; 
@property (assign,setter=_setRequiresProtectedData:,nonatomic) BOOL _requiresProtectedData; 
@property (nonatomic,readonly) NSString * _className; 
@property (nonatomic,readonly) long long _type; 
@property (assign,setter=_setRequiresAuthentication:,nonatomic) BOOL _requiresAuthentication; 
@property (assign,setter=_setCode:,nonatomic) long long _code; 
@property (nonatomic,copy) NSUserActivity * userActivity;                                                                           //@synthesize userActivity=_userActivity - In the implementation block
@property (nonatomic,copy) NSDictionary * propertiesByName; 
+(void)initialize;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(BOOL)supportsSecureCoding;
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_typeFromCode:(long long)arg1 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
+(id)responseSuccess;
+(id)responseFailure;
+(long long)_codeFromIntentResponseCode:(long long)arg1 ;
+(long long)_intentHandlingStatusFromCode:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(long long)code;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)_type;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(long long)_code;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(NSString *)_className;
-(NSUserActivity *)userActivity;
-(void)setUserActivity:(NSUserActivity *)arg1 ;
-(NSDictionary *)propertiesByName;
-(void)setCode:(long long)arg1 ;
-(BOOL)_requiresAuthentication;
-(id)_dictionaryRepresentation;
-(BOOL)_commonInit;
-(BOOL)_isSuccess;
-(_INPBIntentResponse *)backingStore;
-(long long)_stage;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(long long)_intentResponseCode;
-(long long)_codeWithName:(id)arg1 ;
-(void)setPropertiesByName:(NSDictionary *)arg1 ;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(INCodableDescription *)_codableDescription;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(INImage *)_keyImage;
-(long long)_intentHandlingStatus;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(BOOL)_shouldForwardIntentToApp;
-(BOOL)_userConfirmationRequired;
-(id)intentSlotDescriptions;
-(id)localizeValueOfSlotDescription:(id)arg1 withLocalizer:(id)arg2 ;
-(long long)_intents_toggleState;
-(BOOL)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)_requiresProtectedData;
-(BOOL)_isValidKey:(id)arg1 ;
-(id)_responseTemplateWithLocalizer:(id)arg1 ;
-(id)_responseTemplateWithLocalizer:(id)arg1 requiresSiriCompatibility:(BOOL)arg2 ;
-(id)_originatingBundleIdentifier;
-(id)_propertiesByNameWithLocalizer:(id)arg1 ;
-(id)_renderedResponseWithLocalizer:(id)arg1 requiresSiriCompatibility:(BOOL)arg2 ;
-(id)_responseTemplateForLanguage:(id)arg1 ;
-(id)_responseTemplateForLanguage:(id)arg1 requiresSiriCompatibility:(BOOL)arg2 ;
-(id)_propertiesByNameForLanguage:(id)arg1 ;
-(id)_renderedResponseForLanguage:(id)arg1 requiresSiriCompatibility:(BOOL)arg2 ;
-(NSDictionary *)_JSONDictionaryRepresentation;
-(void)_updateWithJSONDictionary:(id)arg1 ;
-(id)_inCodable;
-(PBCodable *)_responseMessagePBRepresentation;
-(id)initWithPropertiesByName:(id)arg1 ;
-(id)_payloadResponseMessageData;
-(void)_setPayloadResponseMessageData:(id)arg1 ;
-(void)_setCode:(long long)arg1 ;
-(NSString *)_payloadResponseTypeName;
-(void)_setPayloadResponseTypeName:(id)arg1 ;
-(INIntentResponseCodableCode *)_intentResponseCodableCode;
-(INIntentResponseDescription *)_instanceDescription;
-(void)_setRequiresAuthentication:(BOOL)arg1 ;
-(void)_setRequiresProtectedData:(BOOL)arg1 ;
-(long long)_stageWithName:(id)arg1 ;
-(void)_setResponseMessagePBRepresentation:(id)arg1 ;
-(id)_querySchemaWithBlock:(/*^block*/id)arg1 ;
-(void)_setStage:(long long)arg1 ;
-(BOOL)_enumerateWithValueProcessingBlock:(/*^block*/id)arg1 ;
-(void)_intents_prepareResponse;
@end

