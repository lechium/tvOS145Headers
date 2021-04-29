/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOFormattedString;

@interface GEOTrafficBannerTextButton : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOFormattedString* _text;
	int _action;
	int _buttonDisplay;
	struct {
		unsigned has_action : 1;
		unsigned has_buttonDisplay : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasText; 
@property (nonatomic,retain) GEOFormattedString * text; 
@property (assign,nonatomic) BOOL hasAction; 
@property (assign,nonatomic) int action; 
@property (assign,nonatomic) BOOL hasButtonDisplay; 
@property (assign,nonatomic) int buttonDisplay; 
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
-(GEOFormattedString *)text;
-(void)setText:(GEOFormattedString *)arg1 ;
-(int)action;
-(void)setAction:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasAction:(BOOL)arg1 ;
-(BOOL)hasAction;
-(id)actionAsString:(int)arg1 ;
-(int)StringAsAction:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasText;
-(void)setButtonDisplay:(int)arg1 ;
-(int)buttonDisplay;
-(void)setHasButtonDisplay:(BOOL)arg1 ;
-(BOOL)hasButtonDisplay;
-(id)buttonDisplayAsString:(int)arg1 ;
-(int)StringAsButtonDisplay:(id)arg1 ;
@end
