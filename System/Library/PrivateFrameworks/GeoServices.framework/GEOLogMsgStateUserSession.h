/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLocalTime;

@interface GEOLogMsgStateUserSession : PBCodable <NSCopying> {

	GEOSessionID _navSessionId;
	GEOSessionID _sessionId;
	GEOLocalTime* _eventTime;
	double _navSessionRelativeTimestamp;
	double _relativeTimestamp;
	unsigned long long _sessionEpoch;
	unsigned _sequenceNumber;
	struct {
		unsigned has_navSessionId : 1;
		unsigned has_sessionId : 1;
		unsigned has_navSessionRelativeTimestamp : 1;
		unsigned has_relativeTimestamp : 1;
		unsigned has_sessionEpoch : 1;
		unsigned has_sequenceNumber : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSessionId; 
@property (assign,nonatomic) GEOSessionID sessionId; 
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) unsigned sequenceNumber; 
@property (assign,nonatomic) BOOL hasRelativeTimestamp; 
@property (assign,nonatomic) double relativeTimestamp; 
@property (assign,nonatomic) BOOL hasNavSessionId; 
@property (assign,nonatomic) GEOSessionID navSessionId; 
@property (assign,nonatomic) BOOL hasNavSessionRelativeTimestamp; 
@property (assign,nonatomic) double navSessionRelativeTimestamp; 
@property (nonatomic,readonly) BOOL hasEventTime; 
@property (nonatomic,retain) GEOLocalTime * eventTime; 
@property (assign,nonatomic) BOOL hasSessionEpoch; 
@property (assign,nonatomic) unsigned long long sessionEpoch; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)sequenceNumber;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasSequenceNumber;
-(void)setSessionId:(GEOSessionID)arg1 ;
-(BOOL)hasSessionId;
-(GEOSessionID)sessionId;
-(void)setHasSessionId:(BOOL)arg1 ;
-(GEOLocalTime *)eventTime;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setRelativeTimestamp:(double)arg1 ;
-(double)relativeTimestamp;
-(void)setHasRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasRelativeTimestamp;
-(void)setNavSessionId:(GEOSessionID)arg1 ;
-(void)setNavSessionRelativeTimestamp:(double)arg1 ;
-(void)setSessionEpoch:(unsigned long long)arg1 ;
-(void)setEventTime:(GEOLocalTime *)arg1 ;
-(GEOSessionID)navSessionId;
-(void)setHasNavSessionId:(BOOL)arg1 ;
-(BOOL)hasNavSessionId;
-(double)navSessionRelativeTimestamp;
-(void)setHasNavSessionRelativeTimestamp:(BOOL)arg1 ;
-(BOOL)hasNavSessionRelativeTimestamp;
-(BOOL)hasEventTime;
-(unsigned long long)sessionEpoch;
-(void)setHasSessionEpoch:(BOOL)arg1 ;
-(BOOL)hasSessionEpoch;
@end

