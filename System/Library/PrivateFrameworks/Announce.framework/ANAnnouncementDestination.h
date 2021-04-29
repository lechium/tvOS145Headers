/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface ANAnnouncementDestination : NSObject <NSSecureCoding> {

	BOOL _replyToSender;
	unsigned long long _type;
	id _home;
	NSArray* _zones;
	NSArray* _rooms;
	NSString* _announcementIdentifier;

}

@property (assign,nonatomic) unsigned long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) id home;                                        //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSArray * zones;                                //@synthesize zones=_zones - In the implementation block
@property (nonatomic,retain) NSArray * rooms;                                //@synthesize rooms=_rooms - In the implementation block
@property (nonatomic,retain) NSString * announcementIdentifier;              //@synthesize announcementIdentifier=_announcementIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)destinationWithHomeName:(id)arg1 zoneNames:(id)arg2 roomNames:(id)arg3 ;
+(id)destinationWithHomeIdentifier:(id)arg1 zoneIdentifiers:(id)arg2 roomIdentifiers:(id)arg3 ;
+(id)destinationWithReplyToAnnouncementIdentifier:(id)arg1 ;
+(id)stringFromAnnouncementDestinationType:(unsigned long long)arg1 ;
+(id)destinationWithHome:(id)arg1 zones:(id)arg2 rooms:(id)arg3 ;
+(id)destinationWithHomeName:(id)arg1 ;
+(id)destinationWithHomeIdentifier:(id)arg1 ;
-(id)description;
-(id)init;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(id)home;
-(void)setHome:(id)arg1 ;
-(NSArray *)zones;
-(void)setZones:(NSArray *)arg1 ;
-(NSArray *)rooms;
-(void)setRooms:(NSArray *)arg1 ;
-(NSString *)announcementIdentifier;
-(BOOL)replyToSender;
-(void)setAnnouncementIdentifier:(NSString *)arg1 ;
-(void)setReplyToSender:(BOOL)arg1 ;
@end

