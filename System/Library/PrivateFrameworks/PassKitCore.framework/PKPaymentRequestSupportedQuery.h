/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString, NSSet, PKPaymentWebService;

@interface PKPaymentRequestSupportedQuery : NSObject {

	BOOL _issuedOnTheWeb;
	NSArray* _supportedNetworkIDs;
	unsigned long long _merchantCapabilities;
	NSString* _merchantCountryCode;
	long long _paymentMode;
	NSSet* _paymentApplicationStates;
	PKPaymentWebService* _webService;

}

@property (nonatomic,readonly) BOOL issuedOnTheWeb;                                  //@synthesize issuedOnTheWeb=_issuedOnTheWeb - In the implementation block
@property (nonatomic,readonly) NSArray * supportedNetworkIDs;                        //@synthesize supportedNetworkIDs=_supportedNetworkIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long merchantCapabilities;              //@synthesize merchantCapabilities=_merchantCapabilities - In the implementation block
@property (nonatomic,readonly) NSString * merchantCountryCode;                       //@synthesize merchantCountryCode=_merchantCountryCode - In the implementation block
@property (nonatomic,readonly) long long paymentMode;                                //@synthesize paymentMode=_paymentMode - In the implementation block
@property (nonatomic,readonly) NSSet * paymentApplicationStates;                     //@synthesize paymentApplicationStates=_paymentApplicationStates - In the implementation block
@property (nonatomic,readonly) PKPaymentWebService * webService;                     //@synthesize webService=_webService - In the implementation block
+(id)webQueryWithSupportedNetworkIDs:(id)arg1 merchantCapabilities:(unsigned long long)arg2 merchantCountryCode:(id)arg3 paymentMode:(long long)arg4 paymentApplicationStates:(id)arg5 webService:(id)arg6 ;
+(id)inAppQueryWithSupportedNetworkIDs:(id)arg1 merchantCapabilities:(unsigned long long)arg2 merchantCountryCode:(id)arg3 paymentMode:(long long)arg4 paymentApplicationStates:(id)arg5 ;
-(NSString *)merchantCountryCode;
-(PKPaymentWebService *)webService;
-(unsigned long long)merchantCapabilities;
-(id)initWithIssuedOnTheWeb:(BOOL)arg1 supportedNetworkIDs:(id)arg2 merchantCapabilities:(unsigned long long)arg3 merchantCountryCode:(id)arg4 paymentMode:(long long)arg5 paymentApplicationStates:(id)arg6 webService:(id)arg7 ;
-(BOOL)issuedOnTheWeb;
-(NSArray *)supportedNetworkIDs;
-(long long)paymentMode;
-(NSSet *)paymentApplicationStates;
@end

