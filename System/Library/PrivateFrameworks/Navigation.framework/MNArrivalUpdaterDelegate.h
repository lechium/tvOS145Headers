/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MNArrivalUpdaterDelegate <NSObject>
@optional
-(void)arrivalUpdater:(id)arg1 didArriveAtEndOfLegAtIndex:(unsigned long long)arg2;
-(void)arrivalUpdater:(id)arg1 didEnterPreArrivalStateForLegIndex:(unsigned long long)arg2;
-(void)arrivalUpdaterDidTimeoutInArrivalRegion:(id)arg1;

@end

