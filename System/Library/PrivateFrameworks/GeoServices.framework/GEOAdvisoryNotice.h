/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOFormattedString;

@interface GEOAdvisoryNotice : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _incidentIndexs;
	NSMutableArray* _advisoryCards;
	GEOFormattedString* _noticeText;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _shouldAlwaysShowAdvisoryCard;
	struct {
		unsigned has_shouldAlwaysShowAdvisoryCard : 1;
		unsigned read_unknownFields : 1;
		unsigned read_incidentIndexs : 1;
		unsigned read_advisoryCards : 1;
		unsigned read_noticeText : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasNoticeText; 
@property (nonatomic,retain) GEOFormattedString * noticeText; 
@property (nonatomic,readonly) unsigned long long incidentIndexsCount; 
@property (nonatomic,readonly) unsigned* incidentIndexs; 
@property (nonatomic,retain) NSMutableArray * advisoryCards; 
@property (assign,nonatomic) BOOL hasShouldAlwaysShowAdvisoryCard; 
@property (assign,nonatomic) BOOL shouldAlwaysShowAdvisoryCard; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)advisoryCardType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)incidentIndexsCount;
-(unsigned)incidentIndexAtIndex:(unsigned long long)arg1 ;
-(GEOFormattedString *)noticeText;
-(void)setNoticeText:(GEOFormattedString *)arg1 ;
-(void)addIncidentIndex:(unsigned)arg1 ;
-(void)addAdvisoryCard:(id)arg1 ;
-(void)setShouldAlwaysShowAdvisoryCard:(BOOL)arg1 ;
-(void)clearIncidentIndexs;
-(unsigned long long)advisoryCardsCount;
-(void)clearAdvisoryCards;
-(id)advisoryCardAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasNoticeText;
-(unsigned*)incidentIndexs;
-(void)setIncidentIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(NSMutableArray *)advisoryCards;
-(void)setAdvisoryCards:(NSMutableArray *)arg1 ;
-(BOOL)shouldAlwaysShowAdvisoryCard;
-(void)setHasShouldAlwaysShowAdvisoryCard:(BOOL)arg1 ;
-(BOOL)hasShouldAlwaysShowAdvisoryCard;
@end

