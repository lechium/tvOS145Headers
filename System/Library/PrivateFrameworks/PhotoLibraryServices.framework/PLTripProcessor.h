/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PLTripProcessor : NSObject
+(id)processTripsWithItems:(id)arg1 frequentLocations:(id)arg2 lastHomeVisitDate:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
+(double)_timeIntervalBetweenItem:(id)arg1 andItem:(id)arg2 ;
+(unsigned long long)_numberOfAssetsInItems:(id)arg1 ;
+(double)_minimumDistanceBetweenFrequentLocations:(id)arg1 andItem:(id)arg2 ;
+(id)_filterFrequentLocations:(id)arg1 forDateInterval:(id)arg2 ;
@end

