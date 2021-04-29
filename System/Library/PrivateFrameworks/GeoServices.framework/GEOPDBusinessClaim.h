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

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDBusinessClaim : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _buttonLabel;
	NSString* _descriptionText;
	NSString* _titleText;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _buttonEnabled;
	struct {
		unsigned has_buttonEnabled : 1;
		unsigned read_unknownFields : 1;
		unsigned read_buttonLabel : 1;
		unsigned read_descriptionText : 1;
		unsigned read_titleText : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasButtonLabel; 
@property (nonatomic,retain) NSString * buttonLabel; 
@property (assign,nonatomic) BOOL hasButtonEnabled; 
@property (assign,nonatomic) BOOL buttonEnabled; 
@property (nonatomic,readonly) BOOL hasTitleText; 
@property (nonatomic,retain) NSString * titleText; 
@property (nonatomic,readonly) BOOL hasDescriptionText; 
@property (nonatomic,retain) NSString * descriptionText; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)businessClaimForPlaceData:(id)arg1 ;
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
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)buttonLabel;
-(NSString *)titleText;
-(NSString *)descriptionText;
-(void)setButtonLabel:(NSString *)arg1 ;
-(void)setButtonEnabled:(BOOL)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setDescriptionText:(NSString *)arg1 ;
-(BOOL)hasButtonLabel;
-(BOOL)buttonEnabled;
-(void)setHasButtonEnabled:(BOOL)arg1 ;
-(BOOL)hasButtonEnabled;
-(BOOL)hasTitleText;
-(BOOL)hasDescriptionText;
@end

