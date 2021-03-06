/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEOLocation, NSMutableArray;

@interface GEOAddressCorrectionInitResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _addressID;
	GEOLocation* _addressLocation;
	NSMutableArray* _address;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _numberOfVisitsBucketSize;
	int _statusCode;
	struct {
		unsigned has_numberOfVisitsBucketSize : 1;
		unsigned has_statusCode : 1;
		unsigned read_addressID : 1;
		unsigned read_addressLocation : 1;
		unsigned read_address : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode; 
@property (nonatomic,readonly) BOOL hasAddressLocation; 
@property (nonatomic,retain) GEOLocation * addressLocation; 
@property (nonatomic,readonly) BOOL hasAddressID; 
@property (nonatomic,retain) NSString * addressID; 
@property (assign,nonatomic) BOOL hasNumberOfVisitsBucketSize; 
@property (assign,nonatomic) unsigned numberOfVisitsBucketSize; 
@property (nonatomic,retain) NSMutableArray * address; 
+(BOOL)isValid:(id)arg1 ;
+(Class)addressType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)statusCode;
-(NSMutableArray *)address;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAddress:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)clearSensitiveFields;
-(void)setStatusCode:(int)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(BOOL)hasStatusCode;
-(id)statusCodeAsString:(int)arg1 ;
-(int)StringAsStatusCode:(id)arg1 ;
-(GEOLocation *)addressLocation;
-(NSString *)addressID;
-(void)setAddressLocation:(GEOLocation *)arg1 ;
-(void)setAddressID:(NSString *)arg1 ;
-(BOOL)hasAddressLocation;
-(BOOL)hasAddressID;
-(void)setNumberOfVisitsBucketSize:(unsigned)arg1 ;
-(void)addAddress:(id)arg1 ;
-(unsigned long long)addressCount;
-(void)clearAddress;
-(id)addressAtIndex:(unsigned long long)arg1 ;
-(unsigned)numberOfVisitsBucketSize;
-(void)setHasNumberOfVisitsBucketSize:(BOOL)arg1 ;
-(BOOL)hasNumberOfVisitsBucketSize;
@end

