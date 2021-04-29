/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKAuxiliaryCapabilityWebServiceRequest.h>

@class NSArray, NSData, PKPaymentPass;

@interface PKAuxiliaryCapabilityRegisterRequest : PKAuxiliaryCapabilityWebServiceRequest {

	NSArray* _dpanIdentifiers;
	NSData* _deviceSignatureKeyAttestation;
	NSData* _deviceDecryptionKeyAttestation;
	NSArray* _validCertificatesOnDevice;
	PKPaymentPass* _pass;

}

@property (nonatomic,copy) NSArray * dpanIdentifiers;                            //@synthesize dpanIdentifiers=_dpanIdentifiers - In the implementation block
@property (nonatomic,copy) NSData * deviceSignatureKeyAttestation;               //@synthesize deviceSignatureKeyAttestation=_deviceSignatureKeyAttestation - In the implementation block
@property (nonatomic,copy) NSData * deviceDecryptionKeyAttestation;              //@synthesize deviceDecryptionKeyAttestation=_deviceDecryptionKeyAttestation - In the implementation block
@property (nonatomic,copy) NSArray * validCertificatesOnDevice;                  //@synthesize validCertificatesOnDevice=_validCertificatesOnDevice - In the implementation block
@property (nonatomic,retain) PKPaymentPass * pass;                               //@synthesize pass=_pass - In the implementation block
-(PKPaymentPass *)pass;
-(void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 webService:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(NSArray *)dpanIdentifiers;
-(void)setDpanIdentifiers:(NSArray *)arg1 ;
-(NSData *)deviceSignatureKeyAttestation;
-(void)setDeviceSignatureKeyAttestation:(NSData *)arg1 ;
-(NSData *)deviceDecryptionKeyAttestation;
-(void)setDeviceDecryptionKeyAttestation:(NSData *)arg1 ;
-(NSArray *)validCertificatesOnDevice;
-(void)setValidCertificatesOnDevice:(NSArray *)arg1 ;
@end

