/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INRestaurant, NSString, NSNumber, NSDate;


@protocol INGetUserCurrentRestaurantReservationBookingsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INRestaurant * restaurant; 
@property (nonatomic,copy) NSString * reservationIdentifier; 
@property (nonatomic,copy) NSNumber * maximumNumberOfResults; 
@property (nonatomic,copy) NSDate * earliestBookingDateForResults; 
@required
-(id)init;
-(INRestaurant *)restaurant;
-(void)setRestaurant:(id)arg1;
-(NSString *)reservationIdentifier;
-(void)setReservationIdentifier:(id)arg1;
-(NSNumber *)maximumNumberOfResults;
-(void)setMaximumNumberOfResults:(id)arg1;
-(NSDate *)earliestBookingDateForResults;
-(void)setEarliestBookingDateForResults:(id)arg1;

@end

