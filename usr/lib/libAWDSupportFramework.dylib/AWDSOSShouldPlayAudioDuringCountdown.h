/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSOSShouldPlayAudioDuringCountdown : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	BOOL _shouldPlayAudioDuringCountdown;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasShouldPlayAudioDuringCountdown; 
@property (assign,nonatomic) BOOL shouldPlayAudioDuringCountdown;                 //@synthesize shouldPlayAudioDuringCountdown=_shouldPlayAudioDuringCountdown - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setShouldPlayAudioDuringCountdown:(BOOL)arg1 ;
-(void)setHasShouldPlayAudioDuringCountdown:(BOOL)arg1 ;
-(BOOL)hasShouldPlayAudioDuringCountdown;
-(BOOL)shouldPlayAudioDuringCountdown;
@end

