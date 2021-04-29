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

@class PBDataReader, GEOCacheHit, GEOCacheMiss;

@interface GEOLogMsgEventTileCacheAnalytic : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOCacheHit* _cacheHit;
	GEOCacheMiss* _cacheMiss;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) BOOL hasCacheHit; 
@property (nonatomic,retain) GEOCacheHit * cacheHit; 
@property (nonatomic,readonly) BOOL hasCacheMiss; 
@property (nonatomic,retain) GEOCacheMiss * cacheMiss; 
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
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setCacheHit:(GEOCacheHit *)arg1 ;
-(GEOCacheHit *)cacheHit;
-(void)setCacheMiss:(GEOCacheMiss *)arg1 ;
-(GEOCacheMiss *)cacheMiss;
-(BOOL)hasCacheHit;
-(BOOL)hasCacheMiss;
@end

