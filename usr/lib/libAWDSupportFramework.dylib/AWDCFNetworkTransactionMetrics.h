/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCFNetworkTransactionMetrics : PBCodable <NSCopying> {

	unsigned long long _requestEnd;
	unsigned long long _requestStart;
	unsigned long long _responseEnd;
	unsigned long long _responseStart;
	unsigned long long _timestamp;
	unsigned long long _totalBytesExpectedToRead;
	unsigned long long _totalBytesExpectedToWrite;
	unsigned long long _totalBytesRead;
	unsigned long long _totalBytesWritten;
	NSString* _connectionUUID;
	int _http3Status;
	int _networkLoadType;
	int _networkProtocolName;
	BOOL _apsRelayAttempted;
	BOOL _apsRelaySucceeded;
	BOOL _isRedirected;
	BOOL _reusedConnection;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkProtocolName; 
@property (assign,nonatomic) int networkProtocolName;                                   //@synthesize networkProtocolName=_networkProtocolName - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkLoadType; 
@property (assign,nonatomic) int networkLoadType;                                       //@synthesize networkLoadType=_networkLoadType - In the implementation block
@property (assign,nonatomic) BOOL hasReusedConnection; 
@property (assign,nonatomic) BOOL reusedConnection;                                     //@synthesize reusedConnection=_reusedConnection - In the implementation block
@property (assign,nonatomic) BOOL hasIsRedirected; 
@property (assign,nonatomic) BOOL isRedirected;                                         //@synthesize isRedirected=_isRedirected - In the implementation block
@property (assign,nonatomic) BOOL hasRequestStart; 
@property (assign,nonatomic) unsigned long long requestStart;                           //@synthesize requestStart=_requestStart - In the implementation block
@property (assign,nonatomic) BOOL hasRequestEnd; 
@property (assign,nonatomic) unsigned long long requestEnd;                             //@synthesize requestEnd=_requestEnd - In the implementation block
@property (assign,nonatomic) BOOL hasResponseStart; 
@property (assign,nonatomic) unsigned long long responseStart;                          //@synthesize responseStart=_responseStart - In the implementation block
@property (assign,nonatomic) BOOL hasResponseEnd; 
@property (assign,nonatomic) unsigned long long responseEnd;                            //@synthesize responseEnd=_responseEnd - In the implementation block
@property (assign,nonatomic) BOOL hasTotalBytesWritten; 
@property (assign,nonatomic) unsigned long long totalBytesWritten;                      //@synthesize totalBytesWritten=_totalBytesWritten - In the implementation block
@property (assign,nonatomic) BOOL hasTotalBytesRead; 
@property (assign,nonatomic) unsigned long long totalBytesRead;                         //@synthesize totalBytesRead=_totalBytesRead - In the implementation block
@property (nonatomic,readonly) BOOL hasConnectionUUID; 
@property (nonatomic,retain) NSString * connectionUUID;                                 //@synthesize connectionUUID=_connectionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasApsRelayAttempted; 
@property (assign,nonatomic) BOOL apsRelayAttempted;                                    //@synthesize apsRelayAttempted=_apsRelayAttempted - In the implementation block
@property (assign,nonatomic) BOOL hasApsRelaySucceeded; 
@property (assign,nonatomic) BOOL apsRelaySucceeded;                                    //@synthesize apsRelaySucceeded=_apsRelaySucceeded - In the implementation block
@property (assign,nonatomic) BOOL hasTotalBytesExpectedToWrite; 
@property (assign,nonatomic) unsigned long long totalBytesExpectedToWrite;              //@synthesize totalBytesExpectedToWrite=_totalBytesExpectedToWrite - In the implementation block
@property (assign,nonatomic) BOOL hasTotalBytesExpectedToRead; 
@property (assign,nonatomic) unsigned long long totalBytesExpectedToRead;               //@synthesize totalBytesExpectedToRead=_totalBytesExpectedToRead - In the implementation block
@property (assign,nonatomic) BOOL hasHttp3Status; 
@property (assign,nonatomic) int http3Status;                                           //@synthesize http3Status=_http3Status - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(unsigned long long)requestStart;
-(unsigned long long)requestEnd;
-(void)setHttp3Status:(int)arg1 ;
-(void)setApsRelaySucceeded:(BOOL)arg1 ;
-(void)setApsRelayAttempted:(BOOL)arg1 ;
-(void)setConnectionUUID:(NSString *)arg1 ;
-(void)setTotalBytesRead:(unsigned long long)arg1 ;
-(void)setTotalBytesWritten:(unsigned long long)arg1 ;
-(void)setResponseEnd:(unsigned long long)arg1 ;
-(void)setResponseStart:(unsigned long long)arg1 ;
-(void)setRequestEnd:(unsigned long long)arg1 ;
-(void)setRequestStart:(unsigned long long)arg1 ;
-(void)setIsRedirected:(BOOL)arg1 ;
-(void)setReusedConnection:(BOOL)arg1 ;
-(void)setNetworkLoadType:(int)arg1 ;
-(void)setNetworkProtocolName:(int)arg1 ;
-(int)networkProtocolName;
-(BOOL)reusedConnection;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasTotalBytesWritten:(BOOL)arg1 ;
-(BOOL)hasTotalBytesWritten;
-(unsigned long long)totalBytesWritten;
-(void)setHasNetworkProtocolName:(BOOL)arg1 ;
-(BOOL)hasNetworkProtocolName;
-(id)networkProtocolNameAsString:(int)arg1 ;
-(int)StringAsNetworkProtocolName:(id)arg1 ;
-(int)networkLoadType;
-(void)setHasNetworkLoadType:(BOOL)arg1 ;
-(BOOL)hasNetworkLoadType;
-(id)networkLoadTypeAsString:(int)arg1 ;
-(int)StringAsNetworkLoadType:(id)arg1 ;
-(void)setHasReusedConnection:(BOOL)arg1 ;
-(BOOL)hasReusedConnection;
-(void)setHasIsRedirected:(BOOL)arg1 ;
-(BOOL)hasIsRedirected;
-(void)setHasRequestStart:(BOOL)arg1 ;
-(BOOL)hasRequestStart;
-(void)setHasRequestEnd:(BOOL)arg1 ;
-(BOOL)hasRequestEnd;
-(void)setHasResponseStart:(BOOL)arg1 ;
-(BOOL)hasResponseStart;
-(void)setHasResponseEnd:(BOOL)arg1 ;
-(BOOL)hasResponseEnd;
-(void)setHasTotalBytesRead:(BOOL)arg1 ;
-(BOOL)hasTotalBytesRead;
-(BOOL)hasConnectionUUID;
-(void)setHasApsRelayAttempted:(BOOL)arg1 ;
-(BOOL)hasApsRelayAttempted;
-(void)setHasApsRelaySucceeded:(BOOL)arg1 ;
-(BOOL)hasApsRelaySucceeded;
-(void)setTotalBytesExpectedToWrite:(unsigned long long)arg1 ;
-(void)setHasTotalBytesExpectedToWrite:(BOOL)arg1 ;
-(BOOL)hasTotalBytesExpectedToWrite;
-(void)setTotalBytesExpectedToRead:(unsigned long long)arg1 ;
-(void)setHasTotalBytesExpectedToRead:(BOOL)arg1 ;
-(BOOL)hasTotalBytesExpectedToRead;
-(int)http3Status;
-(void)setHasHttp3Status:(BOOL)arg1 ;
-(BOOL)hasHttp3Status;
-(id)http3StatusAsString:(int)arg1 ;
-(int)StringAsHttp3Status:(id)arg1 ;
-(BOOL)isRedirected;
-(unsigned long long)responseStart;
-(unsigned long long)responseEnd;
-(unsigned long long)totalBytesRead;
-(NSString *)connectionUUID;
-(BOOL)apsRelayAttempted;
-(BOOL)apsRelaySucceeded;
-(unsigned long long)totalBytesExpectedToWrite;
-(unsigned long long)totalBytesExpectedToRead;
@end

