/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOMultiTabsState;

@interface GEOLogMsgStateMapUI : PBCodable <NSCopying> {

	GEOMultiTabsState* _multiTabsState;
	int _layoutInfo;
	int _layoutStyle;
	BOOL _landscape;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasLayoutInfo; 
@property (assign,nonatomic) int layoutInfo; 
@property (nonatomic,readonly) BOOL hasMultiTabsState; 
@property (nonatomic,retain) GEOMultiTabsState * multiTabsState; 
@property (assign,nonatomic) BOOL hasLayoutStyle; 
@property (assign,nonatomic) int layoutStyle; 
@property (assign,nonatomic) BOOL hasLandscape; 
@property (assign,nonatomic) BOOL landscape; 
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
-(void)setLayoutInfo:(int)arg1 ;
-(void)setLayoutStyle:(int)arg1 ;
-(BOOL)hasLandscape;
-(BOOL)landscape;
-(void)setLandscape:(BOOL)arg1 ;
-(void)setHasLandscape:(BOOL)arg1 ;
-(GEOMultiTabsState *)multiTabsState;
-(void)setMultiTabsState:(GEOMultiTabsState *)arg1 ;
-(int)layoutInfo;
-(void)setHasLayoutInfo:(BOOL)arg1 ;
-(BOOL)hasLayoutInfo;
-(id)layoutInfoAsString:(int)arg1 ;
-(int)StringAsLayoutInfo:(id)arg1 ;
-(BOOL)hasMultiTabsState;
-(int)layoutStyle;
-(void)setHasLayoutStyle:(BOOL)arg1 ;
-(BOOL)hasLayoutStyle;
-(id)layoutStyleAsString:(int)arg1 ;
-(int)StringAsLayoutStyle:(id)arg1 ;
@end

