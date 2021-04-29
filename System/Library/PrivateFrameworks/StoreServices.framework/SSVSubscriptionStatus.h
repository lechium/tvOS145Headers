/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSArray, NSString, NSDictionary, NSDate;

@interface SSVSubscriptionStatus : NSObject <SSXPCCoding, NSCopying> {

	NSNumber* _accountIdentifier;
	NSArray* _accountPermissions;
	long long _accountStatus;
	unsigned long long _acceptedStoreTermsVersion;
	long long _carrierBundlingStatus;
	long long _carrierBundlingErrorCode;
	NSString* _cellularOperatorName;
	BOOL _discoveryModeEligible;
	BOOL _familyOrganizer;
	BOOL _familySubscription;
	BOOL _freeTrialIneligible;
	BOOL _hasFamily;
	BOOL _hasFamilyMembers;
	BOOL _hasOfflineSlots;
	unsigned long long _latestStoreTermsVersion;
	NSString* _phoneNumber;
	NSDictionary* _rawResponseData;
	double _subscriptionExpirationTime;
	BOOL _subscriptionPurchaser;
	BOOL _hasOfflineSlot;
	NSString* _sessionIdentifier;

}

@property (nonatomic,copy) NSNumber * accountIdentifier;                                             //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * accountPermissions;                                             //@synthesize accountPermissions=_accountPermissions - In the implementation block
@property (assign,nonatomic) long long accountStatus;                                                //@synthesize accountStatus=_accountStatus - In the implementation block
@property (assign,nonatomic) unsigned long long acceptedStoreTermsVersion;                           //@synthesize acceptedStoreTermsVersion=_acceptedStoreTermsVersion - In the implementation block
@property (assign,nonatomic) long long carrierBundlingStatus;                                        //@synthesize carrierBundlingStatus=_carrierBundlingStatus - In the implementation block
@property (assign,nonatomic) long long carrierBundlingErrorCode;                                     //@synthesize carrierBundlingErrorCode=_carrierBundlingErrorCode - In the implementation block
@property (nonatomic,copy) NSString * cellularOperatorName;                                          //@synthesize cellularOperatorName=_cellularOperatorName - In the implementation block
@property (assign,getter=isDiscoveryModeEligible,nonatomic) BOOL discoveryModeEligible;              //@synthesize discoveryModeEligible=_discoveryModeEligible - In the implementation block
@property (assign,getter=isFamilyOrganizer,nonatomic) BOOL familyOrganizer;                          //@synthesize familyOrganizer=_familyOrganizer - In the implementation block
@property (assign,getter=isFamilySubscription,nonatomic) BOOL familySubscription;                    //@synthesize familySubscription=_familySubscription - In the implementation block
@property (assign,getter=isFreeTrialIneligible,nonatomic) BOOL freeTrialIneligible;                  //@synthesize freeTrialIneligible=_freeTrialIneligible - In the implementation block
@property (assign,nonatomic) BOOL hasFamily;                                                         //@synthesize hasFamily=_hasFamily - In the implementation block
@property (assign,nonatomic) BOOL hasFamilyMembers;                                                  //@synthesize hasFamilyMembers=_hasFamilyMembers - In the implementation block
@property (assign,nonatomic) BOOL hasOfflineSlots;                                                   //@synthesize hasOfflineSlots=_hasOfflineSlots - In the implementation block
@property (assign,nonatomic) unsigned long long latestStoreTermsVersion;                             //@synthesize latestStoreTermsVersion=_latestStoreTermsVersion - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                                                   //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSDictionary * rawResponseData;                                           //@synthesize rawResponseData=_rawResponseData - In the implementation block
@property (nonatomic,copy) NSString * sessionIdentifier;                                             //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,getter=isSubscribed,nonatomic) BOOL subscribed; 
@property (nonatomic,copy) NSDate * subscriptionExpirationDate; 
@property (assign,getter=isSubscriptionPurchaser,nonatomic) BOOL subscriptionPurchaser;              //@synthesize subscriptionPurchaser=_subscriptionPurchaser - In the implementation block
@property (nonatomic,readonly) BOOL hasOfflineSlot;                                                  //@synthesize hasOfflineSlot=_hasOfflineSlot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSString *)phoneNumber;
-(long long)accountStatus;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)accountIdentifier;
-(NSString *)sessionIdentifier;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(void)setAccountStatus:(long long)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithUserDefaultsRepresentation:(id)arg1 ;
-(long long)carrierBundlingStatus;
-(NSDate *)subscriptionExpirationDate;
-(id)copyUserDefaultsRepresentation;
-(void)resetAccountBasedProperties;
-(void)resetCarrierBundlingProperties;
-(NSDictionary *)rawResponseData;
-(void)setAcceptedStoreTermsVersion:(unsigned long long)arg1 ;
-(void)setCarrierBundlingStatus:(long long)arg1 ;
-(void)setCarrierBundlingErrorCode:(long long)arg1 ;
-(void)setCellularOperatorName:(NSString *)arg1 ;
-(void)setDiscoveryModeEligible:(BOOL)arg1 ;
-(void)setSubscriptionExpirationDate:(NSDate *)arg1 ;
-(void)setFamilyOrganizer:(BOOL)arg1 ;
-(void)setFamilySubscription:(BOOL)arg1 ;
-(void)setFreeTrialIneligible:(BOOL)arg1 ;
-(void)setHasFamily:(BOOL)arg1 ;
-(void)setHasFamilyMembers:(BOOL)arg1 ;
-(void)setHasOfflineSlots:(BOOL)arg1 ;
-(void)setLatestStoreTermsVersion:(unsigned long long)arg1 ;
-(void)setSubscriptionPurchaser:(BOOL)arg1 ;
-(void)_setSubscribed:(BOOL)arg1 ;
-(void)setAccountPermissions:(NSArray *)arg1 ;
-(void)setRawResponseData:(NSDictionary *)arg1 ;
-(NSArray *)accountPermissions;
-(unsigned long long)acceptedStoreTermsVersion;
-(long long)carrierBundlingErrorCode;
-(NSString *)cellularOperatorName;
-(BOOL)isDiscoveryModeEligible;
-(BOOL)isFamilyOrganizer;
-(BOOL)isFamilySubscription;
-(BOOL)isFreeTrialIneligible;
-(BOOL)hasFamily;
-(BOOL)hasFamilyMembers;
-(BOOL)hasOfflineSlots;
-(unsigned long long)latestStoreTermsVersion;
-(BOOL)isSubscriptionPurchaser;
-(BOOL)isSubscribed;
-(void)setSubscribed:(BOOL)arg1 ;
-(void)setValuesUsingStatusDictionary:(id)arg1 ;
-(BOOL)isEqualToStatus:(id)arg1 ;
-(BOOL)hasOfflineSlot;
@end

