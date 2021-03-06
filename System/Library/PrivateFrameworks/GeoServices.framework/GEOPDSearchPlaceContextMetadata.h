/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString;

@interface GEOPDSearchPlaceContextMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _alternateSearchableNames;
	NSString* _interpretedCategory;
	NSString* _matchedDisplayNameLanguageCode;
	NSString* _matchedDisplayName;
	NSString* _normalizedQuery;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _isDefaultName;
	struct {
		unsigned has_isDefaultName : 1;
		unsigned read_unknownFields : 1;
		unsigned read_alternateSearchableNames : 1;
		unsigned read_interpretedCategory : 1;
		unsigned read_matchedDisplayNameLanguageCode : 1;
		unsigned read_matchedDisplayName : 1;
		unsigned read_normalizedQuery : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMatchedDisplayName; 
@property (nonatomic,retain) NSString * matchedDisplayName; 
@property (assign,nonatomic) BOOL hasIsDefaultName; 
@property (assign,nonatomic) BOOL isDefaultName; 
@property (nonatomic,readonly) BOOL hasNormalizedQuery; 
@property (nonatomic,retain) NSString * normalizedQuery; 
@property (nonatomic,readonly) BOOL hasInterpretedCategory; 
@property (nonatomic,retain) NSString * interpretedCategory; 
@property (nonatomic,readonly) BOOL hasMatchedDisplayNameLanguageCode; 
@property (nonatomic,retain) NSString * matchedDisplayNameLanguageCode; 
@property (nonatomic,retain) NSMutableArray * alternateSearchableNames; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)alternateSearchableNameType;
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
-(NSMutableArray *)alternateSearchableNames;
-(NSString *)matchedDisplayName;
-(NSString *)matchedDisplayNameLanguageCode;
-(void)setMatchedDisplayName:(NSString *)arg1 ;
-(void)setIsDefaultName:(BOOL)arg1 ;
-(void)setMatchedDisplayNameLanguageCode:(NSString *)arg1 ;
-(void)addAlternateSearchableName:(id)arg1 ;
-(unsigned long long)alternateSearchableNamesCount;
-(void)clearAlternateSearchableNames;
-(id)alternateSearchableNameAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasMatchedDisplayName;
-(BOOL)isDefaultName;
-(void)setHasIsDefaultName:(BOOL)arg1 ;
-(BOOL)hasIsDefaultName;
-(BOOL)hasMatchedDisplayNameLanguageCode;
-(void)setAlternateSearchableNames:(NSMutableArray *)arg1 ;
-(NSString *)normalizedQuery;
-(NSString *)interpretedCategory;
-(void)setNormalizedQuery:(NSString *)arg1 ;
-(void)setInterpretedCategory:(NSString *)arg1 ;
-(BOOL)hasNormalizedQuery;
-(BOOL)hasInterpretedCategory;
@end

