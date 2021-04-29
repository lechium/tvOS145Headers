/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEORoadComplexity : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _attributes;
	unsigned _offset;
	unsigned _zilchPathIndex;
	struct {
		unsigned has_offset : 1;
		unsigned has_zilchPathIndex : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * attributes; 
@property (assign,nonatomic) BOOL hasOffset; 
@property (assign,nonatomic) unsigned offset; 
@property (assign,nonatomic) BOOL hasZilchPathIndex; 
@property (assign,nonatomic) unsigned zilchPathIndex; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)attributeType;
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableArray *)attributes;
-(id)dictionaryRepresentation;
-(void)setAttributes:(NSMutableArray *)arg1 ;
-(unsigned)offset;
-(void)setOffset:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setZilchPathIndex:(unsigned)arg1 ;
-(unsigned)zilchPathIndex;
-(void)setHasZilchPathIndex:(BOOL)arg1 ;
-(BOOL)hasZilchPathIndex;
-(void)setHasOffset:(BOOL)arg1 ;
-(BOOL)hasOffset;
-(void)addAttribute:(id)arg1 ;
-(unsigned long long)attributesCount;
-(void)clearAttributes;
-(id)attributeAtIndex:(unsigned long long)arg1 ;
@end

