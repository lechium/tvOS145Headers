/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IOKitten/IOKRegistryEntry.h>

@interface IOKService : IOKRegistryEntry
+(id)serviceMatching:(id)arg1 ;
+(id)addNotificationOfType:(id)arg1 forMatching:(id)arg2 usingNotificationPort:(id)arg3 error:(id*)arg4 withHandler:(/*^block*/id)arg5 ;
+(id)matchingService:(id)arg1 ;
+(id)matchingServices:(id)arg1 error:(id*)arg2 ;
+(id)nameMatching:(id)arg1 ;
+(id)bsdNameMatching:(id)arg1 ;
+(id)entryIDMatching:(unsigned long long)arg1 ;
+(id)addNotificationOfType:(id)arg1 forMatching:(id)arg2 usingNotificationPort:(id)arg3 error:(id*)arg4 withEnumerationBlock:(/*^block*/id)arg5 ;
-(id)addInterestNotifcationOfType:(id)arg1 usingNotificationPort:(id)arg2 error:(id*)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)connectToServiceOfType:(unsigned)arg1 ;
-(id)initWithServiceEntry:(unsigned)arg1 ;
-(BOOL)matchesPropertyTable:(id)arg1 error:(id*)arg2 ;
-(unsigned)busyState;
-(BOOL)requestProbeWithOptions:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)isServiceAuthorizedForOpenAllowInteraction:(BOOL)arg1 ;
@end

