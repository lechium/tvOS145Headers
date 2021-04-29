/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng;

@interface GEORoadAccessPoint : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOLatLng* _location;
	int _cyclingDirection;
	int _drivingDirection;
	unsigned _significance;
	int _transitDirection;
	int _walkingDirection;
	BOOL _isApproximate;
	struct {
		unsigned has_cyclingDirection : 1;
		unsigned has_drivingDirection : 1;
		unsigned has_significance : 1;
		unsigned has_transitDirection : 1;
		unsigned has_walkingDirection : 1;
		unsigned has_isApproximate : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location; 
@property (assign,nonatomic) BOOL hasIsApproximate; 
@property (assign,nonatomic) BOOL isApproximate; 
@property (assign,nonatomic) BOOL hasCyclingDirection; 
@property (assign,nonatomic) int cyclingDirection; 
@property (assign,nonatomic) BOOL hasDrivingDirection; 
@property (assign,nonatomic) int drivingDirection; 
@property (assign,nonatomic) BOOL hasTransitDirection; 
@property (assign,nonatomic) int transitDirection; 
@property (assign,nonatomic) BOOL hasWalkingDirection; 
@property (assign,nonatomic) int walkingDirection; 
@property (assign,nonatomic) BOOL hasSignificance; 
@property (assign,nonatomic) unsigned significance; 
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
-(GEOLatLng *)location;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(BOOL)hasLocation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setSignificance:(unsigned)arg1 ;
-(unsigned)significance;
-(void)setHasSignificance:(BOOL)arg1 ;
-(BOOL)hasSignificance;
-(int)drivingDirection;
-(void)setDrivingDirection:(int)arg1 ;
-(void)setWalkingDirection:(int)arg1 ;
-(void)setIsApproximate:(BOOL)arg1 ;
-(void)setCyclingDirection:(int)arg1 ;
-(void)setTransitDirection:(int)arg1 ;
-(BOOL)isApproximate;
-(void)setHasIsApproximate:(BOOL)arg1 ;
-(BOOL)hasIsApproximate;
-(int)cyclingDirection;
-(void)setHasCyclingDirection:(BOOL)arg1 ;
-(BOOL)hasCyclingDirection;
-(id)cyclingDirectionAsString:(int)arg1 ;
-(int)StringAsCyclingDirection:(id)arg1 ;
-(void)setHasDrivingDirection:(BOOL)arg1 ;
-(BOOL)hasDrivingDirection;
-(id)drivingDirectionAsString:(int)arg1 ;
-(int)StringAsDrivingDirection:(id)arg1 ;
-(int)transitDirection;
-(void)setHasTransitDirection:(BOOL)arg1 ;
-(BOOL)hasTransitDirection;
-(id)transitDirectionAsString:(int)arg1 ;
-(int)StringAsTransitDirection:(id)arg1 ;
-(int)walkingDirection;
-(void)setHasWalkingDirection:(BOOL)arg1 ;
-(BOOL)hasWalkingDirection;
-(id)walkingDirectionAsString:(int)arg1 ;
-(int)StringAsWalkingDirection:(id)arg1 ;
@end

