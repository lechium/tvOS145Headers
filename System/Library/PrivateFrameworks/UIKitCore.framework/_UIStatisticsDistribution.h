/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIStatistics.h>

@interface _UIStatisticsDistribution : _UIStatistics
-(void)startTimingForObject:(id)arg1 ;
-(void)recordTimingForObject:(id)arg1 ;
-(void)recordDistributionValue:(double)arg1 ;
-(BOOL)isTimingForObject:(id)arg1 ;
-(void)cancelTimingForObject:(id)arg1 ;
-(void)resetDistribution;
-(void)resetDistributionToValue:(double)arg1 ;
@end

