/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMAssetBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class CEMAssetBaseDescriptor, CEMAssetBaseReference, NSString;

@interface CEMBookEnterpriseDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol> {

	CEMAssetBaseDescriptor* _payloadDescriptor;
	CEMAssetBaseReference* _payloadReference;
	NSString* _payloadKind;
	NSString* _payloadVersion;
	NSString* _payloadAuthor;
	NSString* _payloadTitle;

}

@property (nonatomic,copy) CEMAssetBaseDescriptor * payloadDescriptor;              //@synthesize payloadDescriptor=_payloadDescriptor - In the implementation block
@property (nonatomic,copy) CEMAssetBaseReference * payloadReference;                //@synthesize payloadReference=_payloadReference - In the implementation block
@property (nonatomic,copy) NSString * payloadKind;                                  //@synthesize payloadKind=_payloadKind - In the implementation block
@property (nonatomic,copy) NSString * payloadVersion;                               //@synthesize payloadVersion=_payloadVersion - In the implementation block
@property (nonatomic,copy) NSString * payloadAuthor;                                //@synthesize payloadAuthor=_payloadAuthor - In the implementation block
@property (nonatomic,copy) NSString * payloadTitle;                                 //@synthesize payloadTitle=_payloadTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withReference:(id)arg3 withKind:(id)arg4 withVersion:(id)arg5 withAuthor:(id)arg6 withTitle:(id)arg7 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withReference:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)payloadVersion;
-(void)setPayloadVersion:(NSString *)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadDescriptor:(CEMAssetBaseDescriptor *)arg1 ;
-(CEMAssetBaseDescriptor *)payloadDescriptor;
-(void)setPayloadTitle:(NSString *)arg1 ;
-(NSString *)payloadTitle;
-(void)setPayloadReference:(CEMAssetBaseReference *)arg1 ;
-(void)setPayloadKind:(NSString *)arg1 ;
-(void)setPayloadAuthor:(NSString *)arg1 ;
-(CEMAssetBaseReference *)payloadReference;
-(NSString *)payloadKind;
-(NSString *)payloadAuthor;
@end

