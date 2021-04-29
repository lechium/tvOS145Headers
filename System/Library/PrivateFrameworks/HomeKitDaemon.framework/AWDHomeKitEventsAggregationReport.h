/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitEventsAggregationReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _acceptedXPCRequestsCount;
	unsigned _activeDay;
	unsigned _activeDaysPerMonthCount;
	unsigned _averageSampledProcessMemoryUsage;
	NSString* _dataSyncState;
	unsigned _erroredXPCRequestsCount;
	unsigned _filteredXPCNotificationsCount;
	unsigned _hapBTLEConnectionPerReasonsCount;
	unsigned _hapBTLEConnectionsCount;
	unsigned _hapBTLEDiscoveriesCount;
	unsigned _hapIPInvalidationCount;
	unsigned _hapIPReceivedHTTPEventCount;
	unsigned _hapIPReceivedHTTPResponsesCount;
	unsigned _hapIPSentHTTPRequestsCount;
	unsigned _jetsamReasonHighwaterCount;
	unsigned _jetsamReasonOtherCount;
	unsigned _jetsamReasonProcessLimitCount;
	unsigned _jetsamReasonUnknownKillCount;
	unsigned _peakSampledProcessMemoryUsage;
	unsigned _processLaunchCount;
	unsigned _processMemoryPressureStateCriticalCount;
	unsigned _processMemoryPressureStateWarningCount;
	unsigned _remoteMessagesReceivedCount;
	unsigned _remoteMessagesSentCount;
	unsigned _sentXPCNotificationsCount;
	SCD_Struct_AW18 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasDataSyncState; 
@property (nonatomic,retain) NSString * dataSyncState;                                      //@synthesize dataSyncState=_dataSyncState - In the implementation block
@property (assign,nonatomic) BOOL hasProcessLaunchCount; 
@property (assign,nonatomic) unsigned processLaunchCount;                                   //@synthesize processLaunchCount=_processLaunchCount - In the implementation block
@property (assign,nonatomic) BOOL hasJetsamReasonHighwaterCount; 
@property (assign,nonatomic) unsigned jetsamReasonHighwaterCount;                           //@synthesize jetsamReasonHighwaterCount=_jetsamReasonHighwaterCount - In the implementation block
@property (assign,nonatomic) BOOL hasJetsamReasonProcessLimitCount; 
@property (assign,nonatomic) unsigned jetsamReasonProcessLimitCount;                        //@synthesize jetsamReasonProcessLimitCount=_jetsamReasonProcessLimitCount - In the implementation block
@property (assign,nonatomic) BOOL hasJetsamReasonUnknownKillCount; 
@property (assign,nonatomic) unsigned jetsamReasonUnknownKillCount;                         //@synthesize jetsamReasonUnknownKillCount=_jetsamReasonUnknownKillCount - In the implementation block
@property (assign,nonatomic) BOOL hasJetsamReasonOtherCount; 
@property (assign,nonatomic) unsigned jetsamReasonOtherCount;                               //@synthesize jetsamReasonOtherCount=_jetsamReasonOtherCount - In the implementation block
@property (assign,nonatomic) BOOL hasProcessMemoryPressureStateWarningCount; 
@property (assign,nonatomic) unsigned processMemoryPressureStateWarningCount;               //@synthesize processMemoryPressureStateWarningCount=_processMemoryPressureStateWarningCount - In the implementation block
@property (assign,nonatomic) BOOL hasProcessMemoryPressureStateCriticalCount; 
@property (assign,nonatomic) unsigned processMemoryPressureStateCriticalCount;              //@synthesize processMemoryPressureStateCriticalCount=_processMemoryPressureStateCriticalCount - In the implementation block
@property (assign,nonatomic) BOOL hasAverageSampledProcessMemoryUsage; 
@property (assign,nonatomic) unsigned averageSampledProcessMemoryUsage;                     //@synthesize averageSampledProcessMemoryUsage=_averageSampledProcessMemoryUsage - In the implementation block
@property (assign,nonatomic) BOOL hasPeakSampledProcessMemoryUsage; 
@property (assign,nonatomic) unsigned peakSampledProcessMemoryUsage;                        //@synthesize peakSampledProcessMemoryUsage=_peakSampledProcessMemoryUsage - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteMessagesSentCount; 
@property (assign,nonatomic) unsigned remoteMessagesSentCount;                              //@synthesize remoteMessagesSentCount=_remoteMessagesSentCount - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteMessagesReceivedCount; 
@property (assign,nonatomic) unsigned remoteMessagesReceivedCount;                          //@synthesize remoteMessagesReceivedCount=_remoteMessagesReceivedCount - In the implementation block
@property (assign,nonatomic) BOOL hasAcceptedXPCRequestsCount; 
@property (assign,nonatomic) unsigned acceptedXPCRequestsCount;                             //@synthesize acceptedXPCRequestsCount=_acceptedXPCRequestsCount - In the implementation block
@property (assign,nonatomic) BOOL hasErroredXPCRequestsCount; 
@property (assign,nonatomic) unsigned erroredXPCRequestsCount;                              //@synthesize erroredXPCRequestsCount=_erroredXPCRequestsCount - In the implementation block
@property (assign,nonatomic) BOOL hasSentXPCNotificationsCount; 
@property (assign,nonatomic) unsigned sentXPCNotificationsCount;                            //@synthesize sentXPCNotificationsCount=_sentXPCNotificationsCount - In the implementation block
@property (assign,nonatomic) BOOL hasFilteredXPCNotificationsCount; 
@property (assign,nonatomic) unsigned filteredXPCNotificationsCount;                        //@synthesize filteredXPCNotificationsCount=_filteredXPCNotificationsCount - In the implementation block
@property (assign,nonatomic) BOOL hasHapIPInvalidationCount; 
@property (assign,nonatomic) unsigned hapIPInvalidationCount;                               //@synthesize hapIPInvalidationCount=_hapIPInvalidationCount - In the implementation block
@property (assign,nonatomic) BOOL hasHapIPSentHTTPRequestsCount; 
@property (assign,nonatomic) unsigned hapIPSentHTTPRequestsCount;                           //@synthesize hapIPSentHTTPRequestsCount=_hapIPSentHTTPRequestsCount - In the implementation block
@property (assign,nonatomic) BOOL hasHapIPReceivedHTTPResponsesCount; 
@property (assign,nonatomic) unsigned hapIPReceivedHTTPResponsesCount;                      //@synthesize hapIPReceivedHTTPResponsesCount=_hapIPReceivedHTTPResponsesCount - In the implementation block
@property (assign,nonatomic) BOOL hasHapIPReceivedHTTPEventCount; 
@property (assign,nonatomic) unsigned hapIPReceivedHTTPEventCount;                          //@synthesize hapIPReceivedHTTPEventCount=_hapIPReceivedHTTPEventCount - In the implementation block
@property (assign,nonatomic) BOOL hasHapBTLEConnectionsCount; 
@property (assign,nonatomic) unsigned hapBTLEConnectionsCount;                              //@synthesize hapBTLEConnectionsCount=_hapBTLEConnectionsCount - In the implementation block
@property (assign,nonatomic) BOOL hasHapBTLEConnectionPerReasonsCount; 
@property (assign,nonatomic) unsigned hapBTLEConnectionPerReasonsCount;                     //@synthesize hapBTLEConnectionPerReasonsCount=_hapBTLEConnectionPerReasonsCount - In the implementation block
@property (assign,nonatomic) BOOL hasHapBTLEDiscoveriesCount; 
@property (assign,nonatomic) unsigned hapBTLEDiscoveriesCount;                              //@synthesize hapBTLEDiscoveriesCount=_hapBTLEDiscoveriesCount - In the implementation block
@property (assign,nonatomic) BOOL hasActiveDay; 
@property (assign,nonatomic) unsigned activeDay;                                            //@synthesize activeDay=_activeDay - In the implementation block
@property (assign,nonatomic) BOOL hasActiveDaysPerMonthCount; 
@property (assign,nonatomic) unsigned activeDaysPerMonthCount;                              //@synthesize activeDaysPerMonthCount=_activeDaysPerMonthCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(NSString *)dataSyncState;
-(void)setDataSyncState:(NSString *)arg1 ;
-(unsigned)remoteMessagesSentCount;
-(unsigned)remoteMessagesReceivedCount;
-(unsigned)processLaunchCount;
-(unsigned)jetsamReasonHighwaterCount;
-(unsigned)jetsamReasonProcessLimitCount;
-(unsigned)jetsamReasonUnknownKillCount;
-(unsigned)jetsamReasonOtherCount;
-(unsigned)processMemoryPressureStateWarningCount;
-(unsigned)processMemoryPressureStateCriticalCount;
-(unsigned)hapIPInvalidationCount;
-(unsigned)hapIPSentHTTPRequestsCount;
-(unsigned)hapIPReceivedHTTPResponsesCount;
-(unsigned)hapIPReceivedHTTPEventCount;
-(unsigned)hapBTLEConnectionsCount;
-(unsigned)hapBTLEConnectionPerReasonsCount;
-(unsigned)hapBTLEDiscoveriesCount;
-(unsigned)acceptedXPCRequestsCount;
-(unsigned)erroredXPCRequestsCount;
-(unsigned)sentXPCNotificationsCount;
-(unsigned)filteredXPCNotificationsCount;
-(unsigned)activeDaysPerMonthCount;
-(unsigned)activeDay;
-(BOOL)hasDataSyncState;
-(void)setProcessLaunchCount:(unsigned)arg1 ;
-(void)setHasProcessLaunchCount:(BOOL)arg1 ;
-(BOOL)hasProcessLaunchCount;
-(void)setJetsamReasonHighwaterCount:(unsigned)arg1 ;
-(void)setHasJetsamReasonHighwaterCount:(BOOL)arg1 ;
-(BOOL)hasJetsamReasonHighwaterCount;
-(void)setJetsamReasonProcessLimitCount:(unsigned)arg1 ;
-(void)setHasJetsamReasonProcessLimitCount:(BOOL)arg1 ;
-(BOOL)hasJetsamReasonProcessLimitCount;
-(void)setJetsamReasonUnknownKillCount:(unsigned)arg1 ;
-(void)setHasJetsamReasonUnknownKillCount:(BOOL)arg1 ;
-(BOOL)hasJetsamReasonUnknownKillCount;
-(void)setJetsamReasonOtherCount:(unsigned)arg1 ;
-(void)setHasJetsamReasonOtherCount:(BOOL)arg1 ;
-(BOOL)hasJetsamReasonOtherCount;
-(void)setProcessMemoryPressureStateWarningCount:(unsigned)arg1 ;
-(void)setHasProcessMemoryPressureStateWarningCount:(BOOL)arg1 ;
-(BOOL)hasProcessMemoryPressureStateWarningCount;
-(void)setProcessMemoryPressureStateCriticalCount:(unsigned)arg1 ;
-(void)setHasProcessMemoryPressureStateCriticalCount:(BOOL)arg1 ;
-(BOOL)hasProcessMemoryPressureStateCriticalCount;
-(void)setAverageSampledProcessMemoryUsage:(unsigned)arg1 ;
-(void)setHasAverageSampledProcessMemoryUsage:(BOOL)arg1 ;
-(BOOL)hasAverageSampledProcessMemoryUsage;
-(void)setPeakSampledProcessMemoryUsage:(unsigned)arg1 ;
-(void)setHasPeakSampledProcessMemoryUsage:(BOOL)arg1 ;
-(BOOL)hasPeakSampledProcessMemoryUsage;
-(void)setRemoteMessagesSentCount:(unsigned)arg1 ;
-(void)setHasRemoteMessagesSentCount:(BOOL)arg1 ;
-(BOOL)hasRemoteMessagesSentCount;
-(void)setRemoteMessagesReceivedCount:(unsigned)arg1 ;
-(void)setHasRemoteMessagesReceivedCount:(BOOL)arg1 ;
-(BOOL)hasRemoteMessagesReceivedCount;
-(void)setAcceptedXPCRequestsCount:(unsigned)arg1 ;
-(void)setHasAcceptedXPCRequestsCount:(BOOL)arg1 ;
-(BOOL)hasAcceptedXPCRequestsCount;
-(void)setErroredXPCRequestsCount:(unsigned)arg1 ;
-(void)setHasErroredXPCRequestsCount:(BOOL)arg1 ;
-(BOOL)hasErroredXPCRequestsCount;
-(void)setSentXPCNotificationsCount:(unsigned)arg1 ;
-(void)setHasSentXPCNotificationsCount:(BOOL)arg1 ;
-(BOOL)hasSentXPCNotificationsCount;
-(void)setFilteredXPCNotificationsCount:(unsigned)arg1 ;
-(void)setHasFilteredXPCNotificationsCount:(BOOL)arg1 ;
-(BOOL)hasFilteredXPCNotificationsCount;
-(void)setHapIPInvalidationCount:(unsigned)arg1 ;
-(void)setHasHapIPInvalidationCount:(BOOL)arg1 ;
-(BOOL)hasHapIPInvalidationCount;
-(void)setHapIPSentHTTPRequestsCount:(unsigned)arg1 ;
-(void)setHasHapIPSentHTTPRequestsCount:(BOOL)arg1 ;
-(BOOL)hasHapIPSentHTTPRequestsCount;
-(void)setHapIPReceivedHTTPResponsesCount:(unsigned)arg1 ;
-(void)setHasHapIPReceivedHTTPResponsesCount:(BOOL)arg1 ;
-(BOOL)hasHapIPReceivedHTTPResponsesCount;
-(void)setHapIPReceivedHTTPEventCount:(unsigned)arg1 ;
-(void)setHasHapIPReceivedHTTPEventCount:(BOOL)arg1 ;
-(BOOL)hasHapIPReceivedHTTPEventCount;
-(void)setHapBTLEConnectionsCount:(unsigned)arg1 ;
-(void)setHasHapBTLEConnectionsCount:(BOOL)arg1 ;
-(BOOL)hasHapBTLEConnectionsCount;
-(void)setHapBTLEConnectionPerReasonsCount:(unsigned)arg1 ;
-(void)setHasHapBTLEConnectionPerReasonsCount:(BOOL)arg1 ;
-(BOOL)hasHapBTLEConnectionPerReasonsCount;
-(void)setHapBTLEDiscoveriesCount:(unsigned)arg1 ;
-(void)setHasHapBTLEDiscoveriesCount:(BOOL)arg1 ;
-(BOOL)hasHapBTLEDiscoveriesCount;
-(void)setActiveDay:(unsigned)arg1 ;
-(void)setHasActiveDay:(BOOL)arg1 ;
-(BOOL)hasActiveDay;
-(void)setActiveDaysPerMonthCount:(unsigned)arg1 ;
-(void)setHasActiveDaysPerMonthCount:(BOOL)arg1 ;
-(BOOL)hasActiveDaysPerMonthCount;
-(unsigned)averageSampledProcessMemoryUsage;
-(unsigned)peakSampledProcessMemoryUsage;
@end

