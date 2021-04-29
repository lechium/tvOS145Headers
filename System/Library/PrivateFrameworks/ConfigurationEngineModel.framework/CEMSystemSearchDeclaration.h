/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMSystemSearchDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadAllowSpotlightInternetResults;
	NSNumber* _payloadAllowDefinitionLookup;

}

@property (nonatomic,copy) NSNumber * payloadAllowSpotlightInternetResults;              //@synthesize payloadAllowSpotlightInternetResults=_payloadAllowSpotlightInternetResults - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowDefinitionLookup;                      //@synthesize payloadAllowDefinitionLookup=_payloadAllowDefinitionLookup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg1 withAllowSpotlightInternetResults:(id)arg2 withAllowDefinitionLookup:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllowSpotlightInternetResults:(NSNumber *)arg1 ;
-(void)setPayloadAllowDefinitionLookup:(NSNumber *)arg1 ;
-(NSNumber *)payloadAllowSpotlightInternetResults;
-(NSNumber *)payloadAllowDefinitionLookup;
@end

