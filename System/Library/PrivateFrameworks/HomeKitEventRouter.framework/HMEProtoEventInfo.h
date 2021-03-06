/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitEventRouter.framework/HomeKitEventRouter
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitEventRouter/HomeKitEventRouter-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMEProtoEvent, NSString;

@interface HMEProtoEventInfo : PBCodable <NSCopying> {

	HMEProtoEvent* _event;
	NSString* _topic;

}

@property (nonatomic,readonly) BOOL hasTopic; 
@property (nonatomic,retain) NSString * topic;                   //@synthesize topic=_topic - In the implementation block
@property (nonatomic,readonly) BOOL hasEvent; 
@property (nonatomic,retain) HMEProtoEvent * event;              //@synthesize event=_event - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setTopic:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(HMEProtoEvent *)event;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)topic;
-(BOOL)hasTopic;
-(void)setEvent:(HMEProtoEvent *)arg1 ;
-(BOOL)hasEvent;
@end

