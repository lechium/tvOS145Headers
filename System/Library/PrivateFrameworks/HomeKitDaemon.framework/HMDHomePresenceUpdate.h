/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMDHomePresence, HMDUserPresence, HMDDevice;

@interface HMDHomePresenceUpdate : HMFObject {

	BOOL _update;
	HMDHomePresence* _homePresence;
	HMDUserPresence* _userPresence;
	HMDDevice* _causingDevice;

}

@property (nonatomic,readonly) HMDHomePresence * homePresence;              //@synthesize homePresence=_homePresence - In the implementation block
@property (nonatomic,readonly) HMDUserPresence * userPresence;              //@synthesize userPresence=_userPresence - In the implementation block
@property (getter=isUpdate,nonatomic,readonly) BOOL update;                 //@synthesize update=_update - In the implementation block
@property (nonatomic,readonly) HMDDevice * causingDevice;                   //@synthesize causingDevice=_causingDevice - In the implementation block
-(id)description;
-(BOOL)isUpdate;
-(id)initWithHomePresence:(id)arg1 userPresence:(id)arg2 update:(BOOL)arg3 causingDevice:(id)arg4 ;
-(HMDHomePresence *)homePresence;
-(HMDUserPresence *)userPresence;
-(HMDDevice *)causingDevice;
@end

