/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWAWDLibnetcoreCellularFallbackReport, NSString, NSMutableArray, NWAWDLibnetcoreConnectionStatisticsReport;

@interface NWAWDLibnetcoreTCPConnectionReport : PBCodable <NSCopying> {

	unsigned long long _iPAddressAttemptCount;
	unsigned long long _timestamp;
	NWAWDLibnetcoreCellularFallbackReport* _cellularFallbackReport;
	NSString* _clientIdentifier;
	NSMutableArray* _connectionAttemptStatisticsReports;
	NWAWDLibnetcoreConnectionStatisticsReport* _connectionStatisticsReport;
	int _reportReason;
	NSString* _sourceAppIdentifier;
	BOOL _delegated;
	SCD_Struct_NW35 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasClientIdentifier; 
@property (nonatomic,retain) NSString * clientIdentifier;                                                         //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasDelegated; 
@property (assign,nonatomic) BOOL delegated;                                                                      //@synthesize delegated=_delegated - In the implementation block
@property (assign,nonatomic) BOOL hasReportReason; 
@property (assign,nonatomic) int reportReason;                                                                    //@synthesize reportReason=_reportReason - In the implementation block
@property (nonatomic,readonly) BOOL hasConnectionStatisticsReport; 
@property (nonatomic,retain) NWAWDLibnetcoreConnectionStatisticsReport * connectionStatisticsReport;              //@synthesize connectionStatisticsReport=_connectionStatisticsReport - In the implementation block
@property (nonatomic,readonly) BOOL hasCellularFallbackReport; 
@property (nonatomic,retain) NWAWDLibnetcoreCellularFallbackReport * cellularFallbackReport;                      //@synthesize cellularFallbackReport=_cellularFallbackReport - In the implementation block
@property (assign,nonatomic) BOOL hasIPAddressAttemptCount; 
@property (assign,nonatomic) unsigned long long iPAddressAttemptCount;                                            //@synthesize iPAddressAttemptCount=_iPAddressAttemptCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * connectionAttemptStatisticsReports;                                 //@synthesize connectionAttemptStatisticsReports=_connectionAttemptStatisticsReports - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceAppIdentifier; 
@property (nonatomic,retain) NSString * sourceAppIdentifier;                                                      //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
+(Class)connectionAttemptStatisticsReportsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)clientIdentifier;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setIPAddressAttemptCount:(unsigned long long)arg1 ;
-(void)setHasIPAddressAttemptCount:(BOOL)arg1 ;
-(BOOL)hasIPAddressAttemptCount;
-(unsigned long long)iPAddressAttemptCount;
-(void)setReportReason:(int)arg1 ;
-(void)setHasReportReason:(BOOL)arg1 ;
-(BOOL)hasReportReason;
-(int)reportReason;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setConnectionStatisticsReport:(NWAWDLibnetcoreConnectionStatisticsReport *)arg1 ;
-(void)setCellularFallbackReport:(NWAWDLibnetcoreCellularFallbackReport *)arg1 ;
-(void)setConnectionAttemptStatisticsReports:(NSMutableArray *)arg1 ;
-(void)setSourceAppIdentifier:(NSString *)arg1 ;
-(void)addConnectionAttemptStatisticsReports:(id)arg1 ;
-(unsigned long long)connectionAttemptStatisticsReportsCount;
-(void)clearConnectionAttemptStatisticsReports;
-(id)connectionAttemptStatisticsReportsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasClientIdentifier;
-(void)setDelegated:(BOOL)arg1 ;
-(void)setHasDelegated:(BOOL)arg1 ;
-(BOOL)hasDelegated;
-(id)reportReasonAsString:(int)arg1 ;
-(int)StringAsReportReason:(id)arg1 ;
-(BOOL)hasConnectionStatisticsReport;
-(BOOL)hasCellularFallbackReport;
-(BOOL)hasSourceAppIdentifier;
-(BOOL)delegated;
-(NWAWDLibnetcoreConnectionStatisticsReport *)connectionStatisticsReport;
-(NWAWDLibnetcoreCellularFallbackReport *)cellularFallbackReport;
-(NSMutableArray *)connectionAttemptStatisticsReports;
-(NSString *)sourceAppIdentifier;
@end
