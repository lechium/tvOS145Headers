/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDMapsIdentifierPlaceLookupParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _mapsIds;
	int _resultProviderId;
	BOOL _enablePartialClientization;
	struct {
		unsigned has_resultProviderId : 1;
		unsigned has_enablePartialClientization : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId; 
@property (nonatomic,retain) NSMutableArray * mapsIds; 
@property (assign,nonatomic) BOOL hasEnablePartialClientization; 
@property (assign,nonatomic) BOOL enablePartialClientization; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)mapsIdType;
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
-(void)setEnablePartialClientization:(BOOL)arg1 ;
-(BOOL)enablePartialClientization;
-(void)setHasEnablePartialClientization:(BOOL)arg1 ;
-(BOOL)hasEnablePartialClientization;
-(void)setResultProviderId:(int)arg1 ;
-(void)addMapsId:(id)arg1 ;
-(unsigned long long)mapsIdsCount;
-(void)clearMapsIds;
-(id)mapsIdAtIndex:(unsigned long long)arg1 ;
-(int)resultProviderId;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(BOOL)hasResultProviderId;
-(NSMutableArray *)mapsIds;
-(void)setMapsIds:(NSMutableArray *)arg1 ;
-(id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2 ;
@end

