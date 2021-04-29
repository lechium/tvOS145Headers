/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSDeviceOffersTracking.h>

@class NSDictionary, NSArray, NSString;

@interface AMSDeviceOffersStore : NSObject <AMSDeviceOffersTracking>

@property (nonatomic,retain) NSDictionary * deviceOfferEligibility; 
@property (nonatomic,retain) NSArray * deviceOffers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)deviceOffers;
-(NSDictionary *)deviceOfferEligibility;
-(void)setDeviceOfferEligibility:(NSDictionary *)arg1 ;
-(void)setDeviceOffers:(NSArray *)arg1 ;
@end

