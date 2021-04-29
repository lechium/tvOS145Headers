/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitPresenceEvent : PBCodable <NSCopying> {

	int _presenceEventGranularity;
	int _presenceEventType;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasPresenceEventType; 
@property (assign,nonatomic) int presenceEventType;                         //@synthesize presenceEventType=_presenceEventType - In the implementation block
@property (assign,nonatomic) BOOL hasPresenceEventGranularity; 
@property (assign,nonatomic) int presenceEventGranularity;                  //@synthesize presenceEventGranularity=_presenceEventGranularity - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)presenceEventType;
-(void)setPresenceEventType:(int)arg1 ;
-(void)setHasPresenceEventType:(BOOL)arg1 ;
-(BOOL)hasPresenceEventType;
-(id)presenceEventTypeAsString:(int)arg1 ;
-(int)StringAsPresenceEventType:(id)arg1 ;
-(int)presenceEventGranularity;
-(void)setPresenceEventGranularity:(int)arg1 ;
-(void)setHasPresenceEventGranularity:(BOOL)arg1 ;
-(BOOL)hasPresenceEventGranularity;
-(id)presenceEventGranularityAsString:(int)arg1 ;
-(int)StringAsPresenceEventGranularity:(id)arg1 ;
@end
