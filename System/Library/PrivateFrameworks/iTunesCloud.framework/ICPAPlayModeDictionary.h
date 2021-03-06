/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ICPAPlayModeDictionary : PBCodable <NSCopying> {

	int _autoPlayMode;
	int _repeatPlayMode;
	int _shufflePlayMode;
	SCD_Struct_IC17 _has;

}

@property (assign,nonatomic) BOOL hasRepeatPlayMode; 
@property (assign,nonatomic) int repeatPlayMode;                   //@synthesize repeatPlayMode=_repeatPlayMode - In the implementation block
@property (assign,nonatomic) BOOL hasShufflePlayMode; 
@property (assign,nonatomic) int shufflePlayMode;                  //@synthesize shufflePlayMode=_shufflePlayMode - In the implementation block
@property (assign,nonatomic) BOOL hasAutoPlayMode; 
@property (assign,nonatomic) int autoPlayMode;                     //@synthesize autoPlayMode=_autoPlayMode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)repeatPlayMode;
-(void)setRepeatPlayMode:(int)arg1 ;
-(void)setHasRepeatPlayMode:(BOOL)arg1 ;
-(BOOL)hasRepeatPlayMode;
-(int)shufflePlayMode;
-(void)setShufflePlayMode:(int)arg1 ;
-(void)setHasShufflePlayMode:(BOOL)arg1 ;
-(BOOL)hasShufflePlayMode;
-(int)autoPlayMode;
-(void)setAutoPlayMode:(int)arg1 ;
-(void)setHasAutoPlayMode:(BOOL)arg1 ;
-(BOOL)hasAutoPlayMode;
@end

