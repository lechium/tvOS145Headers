/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkStatistics/NetworkStatistics-Structs.h>
#import <NetworkStatistics/NWSProtocolSnapshot.h>

@class NSString, NSData;

@interface NWSUDPSnapshot : NWSProtocolSnapshot {

	NSString* _processName;
	NSString* _uuid;
	NSString* _euuid;
	NSString* _vuuid;
	NSData* _localAddress;
	NSData* _remoteAddress;
	nstat_udp_descriptor _descriptor;
	unsigned _provider;
	unsigned long long _eventFlags;

}
-(id)description;
-(id)localAddress;
-(id)remoteAddress;
-(id)processName;
-(id)uuid;
-(id)provider;
-(int)processID;
-(unsigned)trafficClass;
-(unsigned)interfaceIndex;
-(id)traditionalDictionary;
-(id)flowStartTimestamp;
-(double)flowDuration;
-(unsigned long long)flowStartContinuousTime;
-(unsigned)receiveBufferSize;
-(unsigned)receiveBufferUsed;
-(unsigned long long)uniqueProcessID;
-(unsigned long long)eupid;
-(int)epid;
-(id)euuid;
-(id)vuuid;
-(BOOL)interfaceUnknown;
-(BOOL)interfaceLoopback;
-(BOOL)interfaceCellular;
-(BOOL)interfaceWifi;
-(BOOL)interfaceWired;
-(BOOL)interfaceAWDL;
-(BOOL)interfaceExpensive;
-(BOOL)interfaceCompanionLink;
-(BOOL)countsIncludeHeaderOverhead;
-(unsigned long long)networkActivityMapStartTime;
-(unsigned long long)networkActivityMapPart1;
-(unsigned long long)networkActivityMapPart2;
-(unsigned long long)eventFlags;
-(id)initWithCounts:(const nstat_counts*)arg1 UDPDescriptor:(nstat_udp_descriptor*)arg2 sourceIdent:(unsigned long long)arg3 events:(unsigned long long)arg4 seqno:(unsigned long long)arg5 provider:(unsigned)arg6 ;
@end

