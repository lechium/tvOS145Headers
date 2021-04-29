/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OTSupportSOSMessage : PBCodable <NSCopying> {

	int _supported;
	SCD_Struct_OT1 _has;

}

@property (assign,nonatomic) BOOL hasSupported; 
@property (assign,nonatomic) int supported;                  //@synthesize supported=_supported - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)supported;
-(void)setSupported:(int)arg1 ;
-(void)setHasSupported:(BOOL)arg1 ;
-(BOOL)hasSupported;
-(id)supportedAsString:(int)arg1 ;
-(int)StringAsSupported:(id)arg1 ;
@end

