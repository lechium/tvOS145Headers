/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NRPBCompressedData : PBCodable <NSCopying> {

	NSData* _possiblyCompressedData;
	BOOL _compressed;
	SCD_Struct_NR2 _has;

}

@property (assign,nonatomic) BOOL hasCompressed; 
@property (assign,nonatomic) BOOL compressed;                               //@synthesize compressed=_compressed - In the implementation block
@property (nonatomic,readonly) BOOL hasPossiblyCompressedData; 
@property (nonatomic,retain) NSData * possiblyCompressedData;               //@synthesize possiblyCompressedData=_possiblyCompressedData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCompressed:(BOOL)arg1 ;
-(BOOL)compressed;
-(void)setPossiblyCompressedData:(NSData *)arg1 ;
-(NSData *)possiblyCompressedData;
-(void)setHasCompressed:(BOOL)arg1 ;
-(BOOL)hasCompressed;
-(BOOL)hasPossiblyCompressedData;
@end

