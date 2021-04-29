/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSNumber, NSString;

@interface CEMPasscodeScreensaverDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSNumber* _payloadAskForPassword;
	NSNumber* _payloadAskForPasswordDelay;
	NSNumber* _payloadLoginWindowIdleTime;
	NSString* _payloadLoginWindowModulePath;

}

@property (nonatomic,copy) NSNumber * payloadAskForPassword;                     //@synthesize payloadAskForPassword=_payloadAskForPassword - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAskForPasswordDelay;                //@synthesize payloadAskForPasswordDelay=_payloadAskForPasswordDelay - In the implementation block
@property (nonatomic,copy) NSNumber * payloadLoginWindowIdleTime;                //@synthesize payloadLoginWindowIdleTime=_payloadLoginWindowIdleTime - In the implementation block
@property (nonatomic,copy) NSString * payloadLoginWindowModulePath;              //@synthesize payloadLoginWindowModulePath=_payloadLoginWindowModulePath - In the implementation block
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
+(id)buildWithIdentifier:(id)arg1 withAskForPassword:(id)arg2 withAskForPasswordDelay:(id)arg3 withLoginWindowIdleTime:(id)arg4 withLoginWindowModulePath:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAskForPassword:(NSNumber *)arg1 ;
-(void)setPayloadAskForPasswordDelay:(NSNumber *)arg1 ;
-(void)setPayloadLoginWindowIdleTime:(NSNumber *)arg1 ;
-(void)setPayloadLoginWindowModulePath:(NSString *)arg1 ;
-(NSNumber *)payloadAskForPassword;
-(NSNumber *)payloadAskForPasswordDelay;
-(NSNumber *)payloadLoginWindowIdleTime;
-(NSString *)payloadLoginWindowModulePath;
@end

