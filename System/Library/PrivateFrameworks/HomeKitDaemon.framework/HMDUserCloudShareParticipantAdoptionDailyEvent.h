/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDCloudShareTrustManagerLogEvent.h>

@class NSNumber;

@interface HMDUserCloudShareParticipantAdoptionDailyEvent : HMDCloudShareTrustManagerLogEvent {

	NSNumber* _configureState;
	NSNumber* _hasOwnerCloudShareID;

}

@property (copy,readonly) NSNumber * configureState;                    //@synthesize configureState=_configureState - In the implementation block
@property (copy,readonly) NSNumber * hasOwnerCloudShareID;              //@synthesize hasOwnerCloudShareID=_hasOwnerCloudShareID - In the implementation block
-(id)eventName;
-(id)serializedEvent;
-(id)initWithConfigureState:(long long)arg1 hasOwnerCloudShareID:(BOOL)arg2 ;
-(NSNumber *)configureState;
-(NSNumber *)hasOwnerCloudShareID;
@end

