/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEORPPlaceRequestResponse;

@interface GEORPSearchFeedbackContext : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _autocompleteSuggestionLists;
	GEORPPlaceRequestResponse* _requestContext;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_autocompleteSuggestionLists : 1;
		unsigned read_requestContext : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * autocompleteSuggestionLists; 
@property (nonatomic,readonly) BOOL hasRequestContext; 
@property (nonatomic,retain) GEORPPlaceRequestResponse * requestContext; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)autocompleteSuggestionListType;
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
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEORPPlaceRequestResponse *)requestContext;
-(void)addAutocompleteSuggestionList:(id)arg1 ;
-(void)setRequestContext:(GEORPPlaceRequestResponse *)arg1 ;
-(unsigned long long)autocompleteSuggestionListsCount;
-(void)clearAutocompleteSuggestionLists;
-(id)autocompleteSuggestionListAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)autocompleteSuggestionLists;
-(void)setAutocompleteSuggestionLists:(NSMutableArray *)arg1 ;
-(BOOL)hasRequestContext;
@end

