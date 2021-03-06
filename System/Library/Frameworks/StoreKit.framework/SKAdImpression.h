/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber, NSString;

@interface SKAdImpression : NSObject {

	NSNumber* _sourceAppStoreItemIdentifier;
	NSNumber* _advertisedAppStoreItemIdentifier;
	NSString* _adNetworkIdentifier;
	NSNumber* _adCampaignIdentifier;
	NSString* _adImpressionIdentifier;
	NSString* _adType;
	NSString* _adDescription;
	NSString* _adPurchaserName;
	NSNumber* _timestamp;
	NSString* _signature;
	NSString* _version;

}

@property (nonatomic,retain) NSNumber * sourceAppStoreItemIdentifier;                  //@synthesize sourceAppStoreItemIdentifier=_sourceAppStoreItemIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * advertisedAppStoreItemIdentifier;              //@synthesize advertisedAppStoreItemIdentifier=_advertisedAppStoreItemIdentifier - In the implementation block
@property (nonatomic,retain) NSString * adNetworkIdentifier;                           //@synthesize adNetworkIdentifier=_adNetworkIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * adCampaignIdentifier;                          //@synthesize adCampaignIdentifier=_adCampaignIdentifier - In the implementation block
@property (nonatomic,retain) NSString * adImpressionIdentifier;                        //@synthesize adImpressionIdentifier=_adImpressionIdentifier - In the implementation block
@property (nonatomic,retain) NSString * adType;                                        //@synthesize adType=_adType - In the implementation block
@property (nonatomic,retain) NSString * adDescription;                                 //@synthesize adDescription=_adDescription - In the implementation block
@property (nonatomic,retain) NSString * adPurchaserName;                               //@synthesize adPurchaserName=_adPurchaserName - In the implementation block
@property (nonatomic,retain) NSNumber * timestamp;                                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * signature;                                     //@synthesize signature=_signature - In the implementation block
@property (nonatomic,retain) NSString * version;                                       //@synthesize version=_version - In the implementation block
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(NSNumber *)timestamp;
-(NSString *)signature;
-(void)setTimestamp:(NSNumber *)arg1 ;
-(void)setSignature:(NSString *)arg1 ;
-(NSNumber *)sourceAppStoreItemIdentifier;
-(void)setSourceAppStoreItemIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)advertisedAppStoreItemIdentifier;
-(void)setAdvertisedAppStoreItemIdentifier:(NSNumber *)arg1 ;
-(NSString *)adNetworkIdentifier;
-(void)setAdNetworkIdentifier:(NSString *)arg1 ;
-(NSNumber *)adCampaignIdentifier;
-(void)setAdCampaignIdentifier:(NSNumber *)arg1 ;
-(NSString *)adImpressionIdentifier;
-(void)setAdImpressionIdentifier:(NSString *)arg1 ;
-(NSString *)adType;
-(void)setAdType:(NSString *)arg1 ;
-(NSString *)adDescription;
-(void)setAdDescription:(NSString *)arg1 ;
-(NSString *)adPurchaserName;
-(void)setAdPurchaserName:(NSString *)arg1 ;
@end

