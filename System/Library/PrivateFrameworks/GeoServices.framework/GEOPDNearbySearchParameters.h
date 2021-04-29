/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDViewportInfo;

@interface GEOPDNearbySearchParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _maxResults;
	int _sortOrder;
	struct {
		unsigned has_maxResults : 1;
		unsigned has_sortOrder : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSortOrder; 
@property (assign,nonatomic) int sortOrder; 
@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) unsigned maxResults; 
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
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
-(GEOPDViewportInfo *)viewportInfo;
-(void)setMaxResults:(unsigned)arg1 ;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(unsigned)maxResults;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(BOOL)hasMaxResults;
-(BOOL)hasViewportInfo;
-(void)setSortOrder:(int)arg1 ;
-(int)sortOrder;
-(void)setHasSortOrder:(BOOL)arg1 ;
-(BOOL)hasSortOrder;
-(id)sortOrderAsString:(int)arg1 ;
-(int)StringAsSortOrder:(id)arg1 ;
@end

