/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKAccountWebServiceRequest.h>
#import <libobjc.A.dylib/PKAccountWebServiceApplePayTrustProtocol.h>

@class NSURL, PKApplePayTrustHashResponse, NSData, NSString, NSDecimalNumber, CNPostalAddress;

@interface PKAccountWebServiceInstallmentAuthorizationRequest : PKAccountWebServiceRequest <PKAccountWebServiceApplePayTrustProtocol> {

	NSURL* baseURL;
	PKApplePayTrustHashResponse* hashResponse;
	NSData* _publicKeyHash;
	NSString* _accountIdentifier;
	NSString* _bindToken;
	NSDecimalNumber* _authorizationAmount;
	NSString* _installmentGroupIdentifier;
	CNPostalAddress* _shippingAddress;

}

@property (nonatomic,copy) NSString * accountIdentifier;                              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bindToken;                                      //@synthesize bindToken=_bindToken - In the implementation block
@property (nonatomic,retain) NSDecimalNumber * authorizationAmount;                   //@synthesize authorizationAmount=_authorizationAmount - In the implementation block
@property (nonatomic,copy) NSString * installmentGroupIdentifier;                     //@synthesize installmentGroupIdentifier=_installmentGroupIdentifier - In the implementation block
@property (nonatomic,retain) CNPostalAddress * shippingAddress;                       //@synthesize shippingAddress=_shippingAddress - In the implementation block
@property (nonatomic,retain) PKApplePayTrustHashResponse * hashResponse; 
@property (nonatomic,retain) NSURL * baseURL; 
@property (nonatomic,copy) NSData * publicKeyHash;                                    //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)baseURL;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(CNPostalAddress *)shippingAddress;
-(void)setShippingAddress:(CNPostalAddress *)arg1 ;
-(NSData *)publicKeyHash;
-(void)setPublicKeyHash:(NSData *)arg1 ;
-(id)manifestHashWithReferenceIdentifier:(id)arg1 ;
-(Class)signatureResponseClass;
-(id)endpointComponents;
-(PKApplePayTrustHashResponse *)hashResponse;
-(void)setHashResponse:(PKApplePayTrustHashResponse *)arg1 ;
-(NSString *)bindToken;
-(void)setBindToken:(NSString *)arg1 ;
-(NSDecimalNumber *)authorizationAmount;
-(void)setAuthorizationAmount:(NSDecimalNumber *)arg1 ;
-(NSString *)installmentGroupIdentifier;
-(void)setInstallmentGroupIdentifier:(NSString *)arg1 ;
@end

