/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomePresenceCheck.h>

@class HMDHome, NSDictionary, HMDDevice, NSArray, NSString;

@interface HMDHomePresence : HMFObject <HMFLogging, HMDHomePresenceCheck> {

	HMDHome* _home;
	NSDictionary* _userPresenceMap;
	HMDDevice* _lastUpdateByDevice;

}

@property (nonatomic,__weak,readonly) HMDHome * home;                          //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSDictionary * userPresenceMap;                 //@synthesize userPresenceMap=_userPresenceMap - In the implementation block
@property (nonatomic,readonly) NSArray * authorizedUsers; 
@property (nonatomic,readonly) HMDDevice * lastUpdateByDevice;                 //@synthesize lastUpdateByDevice=_lastUpdateByDevice - In the implementation block
@property (nonatomic,readonly) BOOL hasPresenceRegionForAllUsers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(HMDHome *)home;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(id)serializedIdentifierDictionary;
-(id)initWithHome:(id)arg1 userPresenceMap:(id)arg2 lastUpdateByDevice:(id)arg3 ;
-(id)serializedUUIDDictionary;
-(BOOL)isUserAtHome:(id)arg1 ;
-(BOOL)isUserNotAtHome:(id)arg1 ;
-(BOOL)isAnyUserAtHome;
-(BOOL)isNoUserAtHome;
-(BOOL)areUsersAtHome:(id)arg1 ;
-(BOOL)areUsersNotAtHome:(id)arg1 ;
-(BOOL)hasPresenceRegionForAllUsers;
-(NSDictionary *)userPresenceMap;
-(NSArray *)authorizedUsers;
-(BOOL)isPresenceRegionKnownForUser:(id)arg1 ;
-(HMDDevice *)lastUpdateByDevice;
@end

