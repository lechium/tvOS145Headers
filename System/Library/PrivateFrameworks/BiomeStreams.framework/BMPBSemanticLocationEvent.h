/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomeStreams/BiomeStreams-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BMPBSemanticLocationEvent : PBCodable <NSCopying> {

	int _label;
	BOOL _starting;
	SCD_Struct_BM4 _has;

}

@property (assign,nonatomic) BOOL hasStarting; 
@property (assign,nonatomic) BOOL starting;                 //@synthesize starting=_starting - In the implementation block
@property (assign,nonatomic) BOOL hasLabel; 
@property (assign,nonatomic) int label;                     //@synthesize label=_label - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)label;
-(void)setLabel:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasLabel;
-(void)setHasLabel:(BOOL)arg1 ;
-(BOOL)starting;
-(void)setStarting:(BOOL)arg1 ;
-(void)setHasStarting:(BOOL)arg1 ;
-(BOOL)hasStarting;
-(id)labelAsString:(int)arg1 ;
-(int)StringAsLabel:(id)arg1 ;
@end
