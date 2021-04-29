/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOServerFormatTokenPriceValue.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PBUnknownFields;

@interface GEOPrice : PBCodable <GEOServerFormatTokenPriceValue, NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _currencyCode;
	float _amount;
	struct {
		unsigned has_amount : 1;
	}  _flags;

}

@property (nonatomic,readonly) double value; 
@property (nonatomic,readonly) NSString * currencyCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasAmount; 
@property (assign,nonatomic) float amount; 
@property (nonatomic,readonly) BOOL hasCurrencyCode; 
@property (nonatomic,retain) NSString * currencyCode; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)currencyCode;
-(double)value;
-(id)dictionaryRepresentation;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)amount;
-(void)setAmount:(float)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasCurrencyCode;
-(void)setHasAmount:(BOOL)arg1 ;
-(BOOL)hasAmount;
@end

