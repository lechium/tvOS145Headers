/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HMHome, NSArray;

@interface ANAnnounceServiceDestination : NSObject {

	HMHome* _home;
	NSArray* _accessories;
	NSArray* _users;
	NSArray* _devices;

}

@property (nonatomic,retain) HMHome * home;                      //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSArray * accessories;              //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,retain) NSArray * users;                    //@synthesize users=_users - In the implementation block
@property (nonatomic,retain) NSArray * devices;                  //@synthesize devices=_devices - In the implementation block
+(id)_destinationForAppleAccessories:(id)arg1 home:(id)arg2 rooms:(id)arg3 rapportConnection:(id)arg4 ;
+(id)_bestRemoteRelayAccessoryFromAccessories:(id)arg1 inHome:(id)arg2 ;
+(id)relayDestinationForHome:(id)arg1 rooms:(id)arg2 rapportConnection:(id)arg3 error:(id*)arg4 ;
+(id)destinationForHome:(id)arg1 excludingUsers:(id)arg2 rapportConnection:(id)arg3 ;
+(id)destinationForAccessoriesInHome:(id)arg1 rooms:(id)arg2 rapportConnection:(id)arg3 ;
-(id)init;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(NSArray *)users;
-(void)setUsers:(NSArray *)arg1 ;
-(NSArray *)accessories;
-(BOOL)addAccessory:(id)arg1 ;
-(void)setAccessories:(NSArray *)arg1 ;
-(void)removeUser:(id)arg1 ;
-(BOOL)addUser:(id)arg1 inHome:(id)arg2 ;
-(void)removeDeviceWithID:(id)arg1 ;
-(id)idsIdentifiersForService:(id)arg1 ;
-(id)participantsWithService:(id)arg1 ;
-(BOOL)addDeviceWithID:(id)arg1 rapportConnection:(id)arg2 ;
-(void)addUser:(id)arg1 inHome:(id)arg2 rapportConnection:(id)arg3 ;
-(void)removeUser:(id)arg1 rapportConnection:(id)arg2 ;
@end

