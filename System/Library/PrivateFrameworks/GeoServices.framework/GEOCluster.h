/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPlaceResult;

@interface GEOCluster : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE85* _indexs;
	GEOPlaceResult* _container;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasContainer; 
@property (nonatomic,retain) GEOPlaceResult * container; 
@property (nonatomic,readonly) unsigned long long indexsCount; 
@property (nonatomic,readonly) int* indexs; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(GEOPlaceResult *)container;
-(void)addIndex:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setContainer:(GEOPlaceResult *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)clearSensitiveFields;
-(BOOL)hasContainer;
-(unsigned long long)indexsCount;
-(void)clearIndexs;
-(int)indexAtIndex:(unsigned long long)arg1 ;
-(int*)indexs;
-(void)setIndexs:(int*)arg1 count:(unsigned long long)arg2 ;
@end

