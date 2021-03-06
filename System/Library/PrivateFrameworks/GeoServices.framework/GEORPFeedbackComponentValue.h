/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORPFeedbackConversation, GEORPFeedbackNotification, GEORPFeedbackOverview, GEORPPoiEnrichment;

@interface GEORPFeedbackComponentValue : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEORPFeedbackConversation* _conversation;
	GEORPFeedbackNotification* _notification;
	GEORPFeedbackOverview* _overview;
	GEORPPoiEnrichment* _poiEnrichment;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_conversation : 1;
		unsigned read_notification : 1;
		unsigned read_overview : 1;
		unsigned read_poiEnrichment : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasNotification; 
@property (nonatomic,retain) GEORPFeedbackNotification * notification; 
@property (nonatomic,readonly) BOOL hasOverview; 
@property (nonatomic,retain) GEORPFeedbackOverview * overview; 
@property (nonatomic,readonly) BOOL hasConversation; 
@property (nonatomic,retain) GEORPFeedbackConversation * conversation; 
@property (nonatomic,readonly) BOOL hasPoiEnrichment; 
@property (nonatomic,retain) GEORPPoiEnrichment * poiEnrichment; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEORPFeedbackNotification *)notification;
-(void)setNotification:(GEORPFeedbackNotification *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEORPFeedbackOverview *)overview;
-(GEORPFeedbackConversation *)conversation;
-(GEORPPoiEnrichment *)poiEnrichment;
-(void)setOverview:(GEORPFeedbackOverview *)arg1 ;
-(void)setConversation:(GEORPFeedbackConversation *)arg1 ;
-(void)setPoiEnrichment:(GEORPPoiEnrichment *)arg1 ;
-(BOOL)hasNotification;
-(BOOL)hasOverview;
-(BOOL)hasConversation;
-(BOOL)hasPoiEnrichment;
@end

