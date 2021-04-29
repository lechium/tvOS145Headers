/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDBrowseCategoriesFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	BOOL _includeAllCategoriesForVenue;
	SCD_Struct_GE118 _flags;

}

@property (assign,nonatomic) BOOL hasIncludeAllCategoriesForVenue; 
@property (assign,nonatomic) BOOL includeAllCategoriesForVenue; 
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
-(void)setIncludeAllCategoriesForVenue:(BOOL)arg1 ;
-(BOOL)includeAllCategoriesForVenue;
-(void)setHasIncludeAllCategoriesForVenue:(BOOL)arg1 ;
-(BOOL)hasIncludeAllCategoriesForVenue;
@end

