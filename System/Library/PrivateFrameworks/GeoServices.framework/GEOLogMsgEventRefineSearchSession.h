/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOLogMsgEventRefineSearchSession : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _searchString;
	NSMutableArray* _suggestionItems;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _refineSearchType;
	int _searchType;
	struct {
		unsigned has_refineSearchType : 1;
		unsigned has_searchType : 1;
		unsigned read_searchString : 1;
		unsigned read_suggestionItems : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSearchType; 
@property (assign,nonatomic) int searchType; 
@property (assign,nonatomic) BOOL hasRefineSearchType; 
@property (assign,nonatomic) int refineSearchType; 
@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString; 
@property (nonatomic,retain) NSMutableArray * suggestionItems; 
+(BOOL)isValid:(id)arg1 ;
+(Class)suggestionItemType;
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
-(void)setSearchType:(int)arg1 ;
-(int)searchType;
-(void)setHasSearchType:(BOOL)arg1 ;
-(BOOL)hasSearchType;
-(id)searchTypeAsString:(int)arg1 ;
-(int)StringAsSearchType:(id)arg1 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(BOOL)hasSearchString;
-(void)setRefineSearchType:(int)arg1 ;
-(void)addSuggestionItem:(id)arg1 ;
-(unsigned long long)suggestionItemsCount;
-(void)clearSuggestionItems;
-(id)suggestionItemAtIndex:(unsigned long long)arg1 ;
-(int)refineSearchType;
-(void)setHasRefineSearchType:(BOOL)arg1 ;
-(BOOL)hasRefineSearchType;
-(id)refineSearchTypeAsString:(int)arg1 ;
-(int)StringAsRefineSearchType:(id)arg1 ;
-(NSMutableArray *)suggestionItems;
-(void)setSuggestionItems:(NSMutableArray *)arg1 ;
@end

