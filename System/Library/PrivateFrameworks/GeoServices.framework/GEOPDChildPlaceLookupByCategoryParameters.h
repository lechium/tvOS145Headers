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

@class PBUnknownFields, NSData;

@interface GEOPDChildPlaceLookupByCategoryParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSData* _categoryMetadata;
	unsigned long long _parentMuid;
	struct {
		unsigned has_parentMuid : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCategoryMetadata; 
@property (nonatomic,retain) NSData * categoryMetadata; 
@property (assign,nonatomic) BOOL hasParentMuid; 
@property (assign,nonatomic) unsigned long long parentMuid; 
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
-(NSData *)categoryMetadata;
-(void)setCategoryMetadata:(NSData *)arg1 ;
-(void)setParentMuid:(unsigned long long)arg1 ;
-(BOOL)hasCategoryMetadata;
-(unsigned long long)parentMuid;
-(void)setHasParentMuid:(BOOL)arg1 ;
-(BOOL)hasParentMuid;
@end

