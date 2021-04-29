/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TimeSync/TSKernelClock.h>

@interface TSUserFilteredClock : TSKernelClock

@property (nonatomic,readonly) unsigned long long nominalMachInterval; 
@property (nonatomic,readonly) unsigned long long nominalDomainInterval; 
@property (nonatomic,readonly) unsigned char filterShift; 
@property (getter=isAdaptive,nonatomic,readonly) BOOL adaptive; 
+(id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1 ;
-(BOOL)isAdaptive;
-(BOOL)addTimestampWithMachAbsolute:(unsigned long long)arg1 andDomainTime:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)resetFilterToNominal:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)resetSyncServiceWithError:(id*)arg1 ;
-(unsigned long long)nominalMachInterval;
-(unsigned long long)nominalDomainInterval;
-(unsigned char)filterShift;
@end

