/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineModelClusterStandardDeviationInstance : PBCodable <NSCopying> {

	int _entryStandardDeviation;
	int _exitStandardDeviation;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasEntryStandardDeviation; 
@property (assign,nonatomic) int entryStandardDeviation;                  //@synthesize entryStandardDeviation=_entryStandardDeviation - In the implementation block
@property (assign,nonatomic) BOOL hasExitStandardDeviation; 
@property (assign,nonatomic) int exitStandardDeviation;                   //@synthesize exitStandardDeviation=_exitStandardDeviation - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setEntryStandardDeviation:(int)arg1 ;
-(void)setHasEntryStandardDeviation:(BOOL)arg1 ;
-(BOOL)hasEntryStandardDeviation;
-(void)setExitStandardDeviation:(int)arg1 ;
-(void)setHasExitStandardDeviation:(BOOL)arg1 ;
-(BOOL)hasExitStandardDeviation;
-(int)entryStandardDeviation;
-(int)exitStandardDeviation;
@end

