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

@class PBDataReader, PBUnknownFields, GEOPDVenueIdentifier, GEOPDViewportInfo;

@interface GEOPDSearchBrowseCategorySuggestionParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE85* _engineTypes;
	double _requestLocalTimestamp;
	GEOPDVenueIdentifier* _venueFilter;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _minimumNumberOfCategories;
	int _preferredTransportType;
	int _suggestionType;
	BOOL _isCarplayRequest;
	BOOL _isFlatCategoryListRequest;
	BOOL _isFromNoQueryState;
	BOOL _isWidgetRequest;
	struct {
		unsigned has_requestLocalTimestamp : 1;
		unsigned has_minimumNumberOfCategories : 1;
		unsigned has_preferredTransportType : 1;
		unsigned has_suggestionType : 1;
		unsigned has_isCarplayRequest : 1;
		unsigned has_isFlatCategoryListRequest : 1;
		unsigned has_isFromNoQueryState : 1;
		unsigned has_isWidgetRequest : 1;
		unsigned read_unknownFields : 1;
		unsigned read_engineTypes : 1;
		unsigned read_venueFilter : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (assign,nonatomic) BOOL hasRequestLocalTimestamp; 
@property (assign,nonatomic) double requestLocalTimestamp; 
@property (assign,nonatomic) BOOL hasMinimumNumberOfCategories; 
@property (assign,nonatomic) int minimumNumberOfCategories; 
@property (assign,nonatomic) BOOL hasIsCarplayRequest; 
@property (assign,nonatomic) BOOL isCarplayRequest; 
@property (assign,nonatomic) BOOL hasSuggestionType; 
@property (assign,nonatomic) int suggestionType; 
@property (nonatomic,readonly) unsigned long long engineTypesCount; 
@property (nonatomic,readonly) int* engineTypes; 
@property (nonatomic,readonly) BOOL hasVenueFilter; 
@property (nonatomic,retain) GEOPDVenueIdentifier * venueFilter; 
@property (assign,nonatomic) BOOL hasIsFromNoQueryState; 
@property (assign,nonatomic) BOOL isFromNoQueryState; 
@property (assign,nonatomic) BOOL hasIsFlatCategoryListRequest; 
@property (assign,nonatomic) BOOL isFlatCategoryListRequest; 
@property (assign,nonatomic) BOOL hasPreferredTransportType; 
@property (assign,nonatomic) int preferredTransportType; 
@property (assign,nonatomic) BOOL hasIsWidgetRequest; 
@property (assign,nonatomic) BOOL isWidgetRequest; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
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
-(GEOPDViewportInfo *)viewportInfo;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(BOOL)hasViewportInfo;
-(void)setSuggestionType:(int)arg1 ;
-(int)suggestionType;
-(void)setHasSuggestionType:(BOOL)arg1 ;
-(BOOL)hasSuggestionType;
-(id)suggestionTypeAsString:(int)arg1 ;
-(int)StringAsSuggestionType:(id)arg1 ;
-(void)setRequestLocalTimestamp:(double)arg1 ;
-(double)requestLocalTimestamp;
-(void)setHasRequestLocalTimestamp:(BOOL)arg1 ;
-(BOOL)hasRequestLocalTimestamp;
-(void)setPreferredTransportType:(int)arg1 ;
-(int)preferredTransportType;
-(void)setHasPreferredTransportType:(BOOL)arg1 ;
-(BOOL)hasPreferredTransportType;
-(id)preferredTransportTypeAsString:(int)arg1 ;
-(int)StringAsPreferredTransportType:(id)arg1 ;
-(GEOPDVenueIdentifier *)venueFilter;
-(void)setMinimumNumberOfCategories:(int)arg1 ;
-(void)setIsCarplayRequest:(BOOL)arg1 ;
-(void)addEngineType:(int)arg1 ;
-(void)setVenueFilter:(GEOPDVenueIdentifier *)arg1 ;
-(void)setIsFromNoQueryState:(BOOL)arg1 ;
-(void)setIsFlatCategoryListRequest:(BOOL)arg1 ;
-(void)setIsWidgetRequest:(BOOL)arg1 ;
-(unsigned long long)engineTypesCount;
-(void)clearEngineTypes;
-(int)engineTypeAtIndex:(unsigned long long)arg1 ;
-(int)minimumNumberOfCategories;
-(void)setHasMinimumNumberOfCategories:(BOOL)arg1 ;
-(BOOL)hasMinimumNumberOfCategories;
-(BOOL)isCarplayRequest;
-(void)setHasIsCarplayRequest:(BOOL)arg1 ;
-(BOOL)hasIsCarplayRequest;
-(int*)engineTypes;
-(void)setEngineTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)engineTypesAsString:(int)arg1 ;
-(int)StringAsEngineTypes:(id)arg1 ;
-(BOOL)hasVenueFilter;
-(BOOL)isFromNoQueryState;
-(void)setHasIsFromNoQueryState:(BOOL)arg1 ;
-(BOOL)hasIsFromNoQueryState;
-(BOOL)isFlatCategoryListRequest;
-(void)setHasIsFlatCategoryListRequest:(BOOL)arg1 ;
-(BOOL)hasIsFlatCategoryListRequest;
-(BOOL)isWidgetRequest;
-(void)setHasIsWidgetRequest:(BOOL)arg1 ;
-(BOOL)hasIsWidgetRequest;
@end

