/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString, NSNumber;

@interface HMDXPCMessageCountersLogEvent : HMDLogEvent {

	NSString* _type;
	NSString* _peerInformation;
	NSString* _messageName;
	NSNumber* _count;

}

@property (nonatomic,readonly) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * peerInformation;              //@synthesize peerInformation=_peerInformation - In the implementation block
@property (nonatomic,readonly) NSString * messageName;                  //@synthesize messageName=_messageName - In the implementation block
@property (nonatomic,readonly) NSNumber * count;                        //@synthesize count=_count - In the implementation block
+(id)XPCMessageCountersLogEventWithType:(id)arg1 peerInformation:(id)arg2 messageName:(id)arg3 count:(id)arg4 ;
-(NSNumber *)count;
-(NSString *)type;
-(NSString *)messageName;
-(NSString *)peerInformation;
-(id)__initWithType:(id)arg1 peerInformation:(id)arg2 messageName:(id)arg3 count:(id)arg4 ;
@end

