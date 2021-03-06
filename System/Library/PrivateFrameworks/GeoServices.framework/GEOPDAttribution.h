/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOPDAttribution : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _actionUrlComponent;
	NSMutableArray* _attributionUrls;
	NSString* _externalComponentId;
	NSString* _externalItemId;
	NSString* _vendorId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_actionUrlComponent : 1;
		unsigned read_attributionUrls : 1;
		unsigned read_externalComponentId : 1;
		unsigned read_externalItemId : 1;
		unsigned read_vendorId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasVendorId; 
@property (nonatomic,retain) NSString * vendorId; 
@property (nonatomic,readonly) BOOL hasExternalItemId; 
@property (nonatomic,retain) NSString * externalItemId; 
@property (nonatomic,readonly) BOOL hasExternalComponentId; 
@property (nonatomic,retain) NSString * externalComponentId; 
@property (nonatomic,retain) NSMutableArray * attributionUrls; 
@property (nonatomic,readonly) BOOL hasActionUrlComponent; 
@property (nonatomic,retain) NSString * actionUrlComponent; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)attributionForPlaceDataEncyclopedia:(id)arg1 ;
+(id)attributionForPlaceDataReview:(id)arg1 ;
+(id)attributionForPlaceDataPhotos:(id)arg1 ;
+(id)attributionForPlaceDataEntity:(id)arg1 ;
+(id)attributionForPlaceDataRestaurantReservationLink:(id)arg1 ;
+(id)attributionForAnnotatedItemList:(id)arg1 placeData:(id)arg2 ;
+(Class)attributionUrlType;
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
-(NSString *)vendorId;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)externalItemId;
-(void)setVendorId:(NSString *)arg1 ;
-(void)setExternalItemId:(NSString *)arg1 ;
-(BOOL)hasVendorId;
-(BOOL)hasExternalItemId;
-(NSMutableArray *)attributionUrls;
-(BOOL)_isYelp;
-(NSString *)externalComponentId;
-(NSString *)actionUrlComponent;
-(void)setExternalComponentId:(NSString *)arg1 ;
-(void)addAttributionUrl:(id)arg1 ;
-(void)setActionUrlComponent:(NSString *)arg1 ;
-(unsigned long long)attributionUrlsCount;
-(void)clearAttributionUrls;
-(id)attributionUrlAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasExternalComponentId;
-(void)setAttributionUrls:(NSMutableArray *)arg1 ;
-(BOOL)hasActionUrlComponent;
@end

