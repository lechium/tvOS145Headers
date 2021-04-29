/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, AMSBuyParams, NSString, NSNumber, NSArray, NSURL;

@interface AMSMarketingItemAction : NSObject {

	NSDictionary* _rawValues;

}

@property (nonatomic,retain) NSDictionary * rawValues;                      //@synthesize rawValues=_rawValues - In the implementation block
@property (nonatomic,readonly) AMSBuyParams * buyParams; 
@property (nonatomic,readonly) NSString * callToActionLabel; 
@property (nonatomic,readonly) NSString * disclaimerText; 
@property (nonatomic,readonly) BOOL isDefault; 
@property (nonatomic,readonly) BOOL isFamily; 
@property (nonatomic,readonly) BOOL isRecommended; 
@property (nonatomic,readonly) NSString * offerID; 
@property (nonatomic,readonly) NSNumber * price; 
@property (nonatomic,readonly) NSString * priceForDisplay; 
@property (nonatomic,readonly) NSNumber * priceDiff; 
@property (nonatomic,readonly) NSString * priceDiffForDisplay; 
@property (nonatomic,readonly) NSString * valuePropDetail; 
@property (nonatomic,readonly) NSString * valuePropInfo; 
@property (nonatomic,readonly) NSArray * serviceComponents; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSURL * url; 
-(id)name;
-(id)description;
-(NSString *)type;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(BOOL)isDefault;
-(AMSBuyParams *)buyParams;
-(NSNumber *)price;
-(BOOL)isRecommended;
-(NSDictionary *)rawValues;
-(NSString *)offerID;
-(id)freeTrialPeriod;
-(id)introOfferPeriod;
-(id)_serviceNames;
-(id)_servicesData;
-(id)_serviceComponentsFromMap:(id)arg1 withNames:(id)arg2 ;
-(NSString *)callToActionLabel;
-(NSString *)disclaimerText;
-(BOOL)isFamily;
-(NSNumber *)priceDiff;
-(NSString *)priceDiffForDisplay;
-(NSString *)priceForDisplay;
-(NSArray *)serviceComponents;
-(NSString *)valuePropDetail;
-(NSString *)valuePropInfo;
-(id)dismissLabel;
-(id)inAppID;
-(id)introOfferPrice;
-(id)introOfferPriceForDisplay;
-(BOOL)isYearly;
-(id)priceFormatted;
-(id)priceString;
-(id)recurringSubscriptionPeriod;
-(void)setRawValues:(NSDictionary *)arg1 ;
@end

