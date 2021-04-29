/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOSurchargeOption.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, PBUnknownFields, NSMutableArray;

@interface GEORequestOptions : PBCodable <GEOSurchargeOption, NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _requestOptions;
	int _optionUsed;
	struct {
		unsigned has_optionUsed : 1;
	}  _flags;

}

@property (nonatomic,readonly) NSArray * surchargeTypes; 
@property (nonatomic,readonly) unsigned long long selectedSurchargeTypeIndex; 
@property (nonatomic,readonly) id<GEOSurchargeType> selectedSurchargeType; 
@property (nonatomic,retain) NSMutableArray * requestOptions; 
@property (assign,nonatomic) BOOL hasOptionUsed; 
@property (assign,nonatomic) int optionUsed; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)requestOptionType;
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
-(void)addRequestOption:(id)arg1 ;
-(void)setOptionUsed:(int)arg1 ;
-(unsigned long long)requestOptionsCount;
-(void)clearRequestOptions;
-(id)requestOptionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)requestOptions;
-(void)setRequestOptions:(NSMutableArray *)arg1 ;
-(int)optionUsed;
-(void)setHasOptionUsed:(BOOL)arg1 ;
-(BOOL)hasOptionUsed;
-(unsigned long long)selectedSurchargeTypeIndex;
-(NSArray *)surchargeTypes;
-(id<GEOSurchargeType>)selectedSurchargeType;
@end

