//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSSet, PKMapsBrand, PKMapsMerchant;

@protocol PDMapsBrandAndMerchantUpdaterDataSource <NSObject>
- (NSSet *)mapsMerchantsWithLastUpdatedDateFromStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2 limit:(long long)arg3;
- (NSSet *)mapsBrandsWithLastUpdatedDateFromStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2 limit:(long long)arg3;
- (void)updateMapsBrand:(PKMapsBrand *)arg1;
- (void)updateMapsMerchant:(PKMapsMerchant *)arg1;
- (PKMapsMerchant *)mapsMerchantWithIdentifier:(long long)arg1;
- (PKMapsBrand *)mapsBrandWithIdentifier:(long long)arg1;
@end

