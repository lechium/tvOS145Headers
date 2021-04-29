/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HMPBEncodeOption : PBCodable <NSCopying> {

	BOOL _isSPI;
	BOOL _isXPC;
	SCD_Struct_HM9 _has;

}

@property (assign,nonatomic) BOOL hasIsXPC; 
@property (assign,nonatomic) BOOL isXPC;                 //@synthesize isXPC=_isXPC - In the implementation block
@property (assign,nonatomic) BOOL hasIsSPI; 
@property (assign,nonatomic) BOOL isSPI;                 //@synthesize isSPI=_isSPI - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIsXPC:(BOOL)arg1 ;
-(void)setHasIsXPC:(BOOL)arg1 ;
-(BOOL)hasIsXPC;
-(void)setIsSPI:(BOOL)arg1 ;
-(void)setHasIsSPI:(BOOL)arg1 ;
-(BOOL)hasIsSPI;
-(BOOL)isXPC;
-(BOOL)isSPI;
@end

