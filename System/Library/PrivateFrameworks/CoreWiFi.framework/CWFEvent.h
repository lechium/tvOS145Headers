/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSDictionary, NSUUID, CWFEventID;

@interface CWFEvent : NSObject <NSCopying> {

	NSDate* _timestamp;
	NSDictionary* _info;
	NSUUID* _UUID;
	CWFEventID* _eventID;
	unsigned long long _acknowledgementTimeout;
	/*^block*/id _acknowledge;

}

@property (nonatomic,copy) NSUUID * UUID;                                            //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy) CWFEventID * eventID;                                     //@synthesize eventID=_eventID - In the implementation block
@property (assign,nonatomic) unsigned long long acknowledgementTimeout;              //@synthesize acknowledgementTimeout=_acknowledgementTimeout - In the implementation block
@property (nonatomic,copy) id acknowledge;                                           //@synthesize acknowledge=_acknowledge - In the implementation block
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSDate * timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSDictionary * info;                                      //@synthesize info=_info - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSUUID *)UUID;
-(NSDate *)timestamp;
-(id)acknowledge;
-(NSDictionary *)info;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(void)setEventID:(CWFEventID *)arg1 ;
-(CWFEventID *)eventID;
-(BOOL)isEqualToEvent:(id)arg1 ;
-(unsigned long long)acknowledgementTimeout;
-(void)setAcknowledgementTimeout:(unsigned long long)arg1 ;
-(void)setAcknowledge:(id)arg1 ;
@end

