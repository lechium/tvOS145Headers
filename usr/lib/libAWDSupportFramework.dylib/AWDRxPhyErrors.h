/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDRxPhyErrors : PBCodable <NSCopying> {

	unsigned long long _bphyBadplcp;
	unsigned long long _bphyRxcrsglitch;
	unsigned long long _rfdisable;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasRfdisable; 
@property (assign,nonatomic) unsigned long long rfdisable;                    //@synthesize rfdisable=_rfdisable - In the implementation block
@property (assign,nonatomic) BOOL hasBphyRxcrsglitch; 
@property (assign,nonatomic) unsigned long long bphyRxcrsglitch;              //@synthesize bphyRxcrsglitch=_bphyRxcrsglitch - In the implementation block
@property (assign,nonatomic) BOOL hasBphyBadplcp; 
@property (assign,nonatomic) unsigned long long bphyBadplcp;                  //@synthesize bphyBadplcp=_bphyBadplcp - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRfdisable:(unsigned long long)arg1 ;
-(void)setHasRfdisable:(BOOL)arg1 ;
-(BOOL)hasRfdisable;
-(void)setBphyRxcrsglitch:(unsigned long long)arg1 ;
-(void)setHasBphyRxcrsglitch:(BOOL)arg1 ;
-(BOOL)hasBphyRxcrsglitch;
-(void)setBphyBadplcp:(unsigned long long)arg1 ;
-(void)setHasBphyBadplcp:(BOOL)arg1 ;
-(BOOL)hasBphyBadplcp;
-(unsigned long long)rfdisable;
-(unsigned long long)bphyRxcrsglitch;
-(unsigned long long)bphyBadplcp;
@end

