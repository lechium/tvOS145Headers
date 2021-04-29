/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPVisibleTileSet : PBCodable <NSCopying> {

	GEORPVisibleTileKey* _tileKeys;
	unsigned long long _tileKeysCount;
	unsigned long long _tileKeysSpace;
	unsigned _identifier;
	int _style;
	SCD_Struct_GE114 _flags;

}

@property (assign,nonatomic) BOOL hasStyle; 
@property (assign,nonatomic) int style; 
@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) unsigned identifier; 
@property (nonatomic,readonly) unsigned long long tileKeysCount; 
@property (nonatomic,readonly) GEORPVisibleTileKey* tileKeys; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)identifier;
-(void)setIdentifier:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setHasStyle:(BOOL)arg1 ;
-(BOOL)hasStyle;
-(id)styleAsString:(int)arg1 ;
-(int)StringAsStyle:(id)arg1 ;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(GEORPVisibleTileKey*)tileKeys;
-(void)clearTileKeys;
-(void)addTileKey:(GEORPVisibleTileKey)arg1 ;
-(unsigned long long)tileKeysCount;
-(GEORPVisibleTileKey)tileKeyAtIndex:(unsigned long long)arg1 ;
-(void)setTileKeys:(GEORPVisibleTileKey*)arg1 count:(unsigned long long)arg2 ;
@end
