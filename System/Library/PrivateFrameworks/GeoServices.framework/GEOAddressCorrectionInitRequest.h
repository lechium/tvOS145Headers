/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOAddressCorrectionInitRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	NSString* _personID;
	NSString* _token;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _supportsCollectionByRegion;
	BOOL _supportsMultipleAddresses;
	struct {
		unsigned has_supportsCollectionByRegion : 1;
		unsigned has_supportsMultipleAddresses : 1;
		unsigned read_personID : 1;
		unsigned read_token : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) NSString * token; 
@property (nonatomic,readonly) BOOL hasPersonID; 
@property (nonatomic,retain) NSString * personID; 
@property (assign,nonatomic) BOOL hasSupportsMultipleAddresses; 
@property (assign,nonatomic) BOOL supportsMultipleAddresses; 
@property (assign,nonatomic) BOOL hasSupportsCollectionByRegion; 
@property (assign,nonatomic) BOOL supportsCollectionByRegion; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)token;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setToken:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(void)setSupportsMultipleAddresses:(BOOL)arg1 ;
-(void)setSupportsCollectionByRegion:(BOOL)arg1 ;
-(BOOL)hasToken;
-(BOOL)hasPersonID;
-(BOOL)supportsMultipleAddresses;
-(void)setHasSupportsMultipleAddresses:(BOOL)arg1 ;
-(BOOL)hasSupportsMultipleAddresses;
-(BOOL)supportsCollectionByRegion;
-(void)setHasSupportsCollectionByRegion:(BOOL)arg1 ;
-(BOOL)hasSupportsCollectionByRegion;
@end

