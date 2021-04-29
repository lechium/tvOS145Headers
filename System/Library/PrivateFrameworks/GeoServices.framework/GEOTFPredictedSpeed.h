/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTFPredictedSpeed : PBCodable <NSCopying> {

	unsigned _deltaMinutesInFuture;
	unsigned _speed;
	struct {
		unsigned has_deltaMinutesInFuture : 1;
		unsigned has_speed : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDeltaMinutesInFuture; 
@property (assign,nonatomic) unsigned deltaMinutesInFuture; 
@property (assign,nonatomic) BOOL hasSpeed; 
@property (assign,nonatomic) unsigned speed; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSpeed:(unsigned)arg1 ;
-(unsigned)speed;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasSpeed:(BOOL)arg1 ;
-(BOOL)hasSpeed;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setDeltaMinutesInFuture:(unsigned)arg1 ;
-(unsigned)deltaMinutesInFuture;
-(void)setHasDeltaMinutesInFuture:(BOOL)arg1 ;
-(BOOL)hasDeltaMinutesInFuture;
@end

