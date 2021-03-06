/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray, NSDictionary, NSSet;

@interface PKPaymentDigitalIssuanceMetadata : NSObject {

	NSString* _serviceProviderIdentifier;
	NSString* _serviceProviderCountryCode;
	NSArray* _serviceProviderAcceptedNetworks;
	NSArray* _serviceProviderCapabilities;
	NSDictionary* _serviceProviderDict;
	NSString* _action;
	NSString* _merchantID;
	NSArray* _defaultSuggestions;
	NSSet* _serviceProviderSupportedCountries;

}

@property (nonatomic,copy,readonly) NSString * serviceProviderIdentifier;                    //@synthesize serviceProviderIdentifier=_serviceProviderIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceProviderCountryCode;                   //@synthesize serviceProviderCountryCode=_serviceProviderCountryCode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * serviceProviderSupportedNetworks; 
@property (nonatomic,copy,readonly) NSArray * serviceProviderAcceptedNetworks;               //@synthesize serviceProviderAcceptedNetworks=_serviceProviderAcceptedNetworks - In the implementation block
@property (nonatomic,copy,readonly) NSArray * serviceProviderCapabilities;                   //@synthesize serviceProviderCapabilities=_serviceProviderCapabilities - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * serviceProviderDict;                      //@synthesize serviceProviderDict=_serviceProviderDict - In the implementation block
@property (nonatomic,copy,readonly) NSString * action;                                       //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * merchantID;                                   //@synthesize merchantID=_merchantID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * defaultSuggestions;                            //@synthesize defaultSuggestions=_defaultSuggestions - In the implementation block
@property (nonatomic,copy,readonly) NSSet * serviceProviderSupportedCountries;               //@synthesize serviceProviderSupportedCountries=_serviceProviderSupportedCountries - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)action;
-(NSArray *)serviceProviderSupportedNetworks;
-(NSString *)serviceProviderIdentifier;
-(NSString *)serviceProviderCountryCode;
-(NSArray *)serviceProviderAcceptedNetworks;
-(NSArray *)serviceProviderCapabilities;
-(NSDictionary *)serviceProviderDict;
-(NSString *)merchantID;
-(NSArray *)defaultSuggestions;
-(NSSet *)serviceProviderSupportedCountries;
@end

