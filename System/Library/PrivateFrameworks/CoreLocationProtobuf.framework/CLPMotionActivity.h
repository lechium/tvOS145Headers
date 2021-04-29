/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPMotionActivity : PBCodable <NSCopying> {

	int _confidence;
	int _type;
	SCD_Struct_CL9 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) int confidence;                  //@synthesize confidence=_confidence - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)dictionaryRepresentation;
-(int)confidence;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConfidence:(int)arg1 ;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(id)confidenceAsString:(int)arg1 ;
-(int)StringAsConfidence:(id)arg1 ;
@end

