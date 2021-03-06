/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMediaNegotiationBlobVideoRuleCollection : PBCodable <NSCopying> {

	unsigned _formats;
	unsigned _formatsExt1;
	int _operation;
	unsigned _preferredFormat;
	unsigned _preferredFormatExt1;
	int _transport;
	SCD_Struct_VC64 _has;

}

@property (assign,nonatomic) int transport;                             //@synthesize transport=_transport - In the implementation block
@property (assign,nonatomic) int operation;                             //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) unsigned formats;                          //@synthesize formats=_formats - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredFormat; 
@property (assign,nonatomic) unsigned preferredFormat;                  //@synthesize preferredFormat=_preferredFormat - In the implementation block
@property (assign,nonatomic) BOOL hasFormatsExt1; 
@property (assign,nonatomic) unsigned formatsExt1;                      //@synthesize formatsExt1=_formatsExt1 - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredFormatExt1; 
@property (assign,nonatomic) unsigned preferredFormatExt1;              //@synthesize preferredFormatExt1=_preferredFormatExt1 - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)operation;
-(void)setOperation:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)transport;
-(void)setTransport:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)transportAsString:(int)arg1 ;
-(int)StringAsTransport:(id)arg1 ;
-(unsigned)preferredFormat;
-(id)operationAsString:(int)arg1 ;
-(int)StringAsOperation:(id)arg1 ;
-(void)setPreferredFormat:(unsigned)arg1 ;
-(unsigned)formats;
-(void)setFormats:(unsigned)arg1 ;
-(unsigned)preferredFormatExt1;
-(void)setPreferredFormatExt1:(unsigned)arg1 ;
-(unsigned)formatsExt1;
-(void)setFormatsExt1:(unsigned)arg1 ;
-(BOOL)hasPreferredFormat;
-(BOOL)hasPreferredFormatExt1;
-(void)setHasPreferredFormat:(BOOL)arg1 ;
-(void)setHasFormatsExt1:(BOOL)arg1 ;
-(BOOL)hasFormatsExt1;
-(void)setHasPreferredFormatExt1:(BOOL)arg1 ;
@end

