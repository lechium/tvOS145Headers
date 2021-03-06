/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitEventRouter/HMEEventAccessControl.h>

@interface HMDRemoteEventAccessControl : HMEEventAccessControl {

	unsigned long long _allowedUserTypes;
	unsigned long long _allowedDeviceCategories;

}

@property (readonly) unsigned long long allowedUserTypes;                     //@synthesize allowedUserTypes=_allowedUserTypes - In the implementation block
@property (readonly) unsigned long long allowedDeviceCategories;              //@synthesize allowedDeviceCategories=_allowedDeviceCategories - In the implementation block
+(id)type;
+(id)allUsersAndAllDevicesCategories;
+(id)adminsAndAllDevicesCategories;
+(id)ownerAndAllDevicesCategories;
-(unsigned long long)allowedUserTypes;
-(id)initWithUser:(unsigned long long)arg1 deviceCategory:(unsigned long long)arg2 ;
-(unsigned long long)allowedDeviceCategories;
@end

