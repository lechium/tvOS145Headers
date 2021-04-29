/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkStatistics/NetworkStatistics-Structs.h>
#import <NetworkStatistics/NWStatisticsSource.h>

@interface NWStatisticsUDPSource : NWStatisticsSource {

	nstat_udp_descriptor _descriptor;
	unsigned long long _eventFlags;

}
-(id)description;
-(id)initWithManager:(id)arg1 local:(const sockaddr*)arg2 remote:(const sockaddr*)arg3 ;
-(int)handleDescriptor:(void*)arg1 length:(unsigned long long)arg2 events:(unsigned long long)arg3 ;
-(id)_currentSnapshot;
@end

