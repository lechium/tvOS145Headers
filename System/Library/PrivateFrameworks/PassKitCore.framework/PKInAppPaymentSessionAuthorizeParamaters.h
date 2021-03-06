/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData;

@interface PKInAppPaymentSessionAuthorizeParamaters : NSObject {

	NSData* _nonce;
	NSData* _authenticationCredential;
	NSData* _networkMerchantIdentifier;
	long long _cryptogramType;
	BOOL* _isFeatureNotSupportedError;

}

@property (nonatomic,retain) NSData * nonce;                                  //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,retain) NSData * authenticationCredential;               //@synthesize authenticationCredential=_authenticationCredential - In the implementation block
@property (nonatomic,retain) NSData * networkMerchantIdentifier;              //@synthesize networkMerchantIdentifier=_networkMerchantIdentifier - In the implementation block
@property (assign,nonatomic) long long cryptogramType;                        //@synthesize cryptogramType=_cryptogramType - In the implementation block
@property (assign,nonatomic) BOOL* isFeatureNotSupportedError;                //@synthesize isFeatureNotSupportedError=_isFeatureNotSupportedError - In the implementation block
-(NSData *)nonce;
-(void)setNonce:(NSData *)arg1 ;
-(long long)cryptogramType;
-(NSData *)networkMerchantIdentifier;
-(void)setCryptogramType:(long long)arg1 ;
-(id)initWithNonce:(id)arg1 authenticationCredential:(id)arg2 networkMerchantIdentifier:(id)arg3 cryptogramType:(long long)arg4 ;
-(void)setIsFeatureNotSupportedError:(BOOL*)arg1 ;
-(void)setNetworkMerchantIdentifier:(NSData *)arg1 ;
-(NSData *)authenticationCredential;
-(void)setAuthenticationCredential:(NSData *)arg1 ;
-(BOOL*)isFeatureNotSupportedError;
@end

