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

@interface AWDSpringBoardClawGesture : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _timestamp;
	BOOL _didPressLock;
	BOOL _didPressVolumeDown;
	BOOL _didPressVolumeUp;
	BOOL _didTriggerSOS;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDidPressLock; 
@property (assign,nonatomic) BOOL didPressLock;                         //@synthesize didPressLock=_didPressLock - In the implementation block
@property (assign,nonatomic) BOOL hasDidPressVolumeUp; 
@property (assign,nonatomic) BOOL didPressVolumeUp;                     //@synthesize didPressVolumeUp=_didPressVolumeUp - In the implementation block
@property (assign,nonatomic) BOOL hasDidPressVolumeDown; 
@property (assign,nonatomic) BOOL didPressVolumeDown;                   //@synthesize didPressVolumeDown=_didPressVolumeDown - In the implementation block
@property (assign,nonatomic) BOOL hasDidTriggerSOS; 
@property (assign,nonatomic) BOOL didTriggerSOS;                        //@synthesize didTriggerSOS=_didTriggerSOS - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;               //@synthesize duration=_duration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setDidPressLock:(BOOL)arg1 ;
-(void)setHasDidPressLock:(BOOL)arg1 ;
-(BOOL)hasDidPressLock;
-(void)setDidPressVolumeUp:(BOOL)arg1 ;
-(void)setHasDidPressVolumeUp:(BOOL)arg1 ;
-(BOOL)hasDidPressVolumeUp;
-(void)setDidPressVolumeDown:(BOOL)arg1 ;
-(void)setHasDidPressVolumeDown:(BOOL)arg1 ;
-(BOOL)hasDidPressVolumeDown;
-(void)setDidTriggerSOS:(BOOL)arg1 ;
-(void)setHasDidTriggerSOS:(BOOL)arg1 ;
-(BOOL)hasDidTriggerSOS;
-(BOOL)didPressLock;
-(BOOL)didPressVolumeUp;
-(BOOL)didPressVolumeDown;
-(BOOL)didTriggerSOS;
@end
