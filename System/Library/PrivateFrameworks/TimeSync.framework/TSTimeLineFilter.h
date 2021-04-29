/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TimeSync/TimeSync-Structs.h>
@interface TSTimeLineFilter : NSObject

@property (nonatomic,readonly) SCD_Struct_TS0 rateRatio; 
@property (nonatomic,readonly) BOOL canConvertTime; 
-(void)addTimestamps:(SCD_Struct_TS0)arg1 ;
-(SCD_Struct_TS0)rateRatio;
-(void)getAnchors:(SCD_Struct_TS0*)arg1 andRateRatio:(SCD_Struct_TS0*)arg2 ;
-(unsigned long long)domainATimeFromDomainBTime:(unsigned long long)arg1 ;
-(unsigned long long)domainAIntervalFromDomainBInterval:(unsigned long long)arg1 ;
-(unsigned long long)domainBTimeFromDomainATime:(unsigned long long)arg1 ;
-(unsigned long long)domainBIntervalFromDomainAInterval:(unsigned long long)arg1 ;
-(void)resetFilter;
-(BOOL)canConvertTime;
@end

