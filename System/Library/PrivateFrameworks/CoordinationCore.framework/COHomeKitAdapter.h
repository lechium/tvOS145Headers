/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoordinationCore/CoordinationCore-Structs.h>
#import <libobjc.A.dylib/HMHomeManagerDelegate.h>

@class HMHomeManager, NSCondition, NSString;

@interface COHomeKitAdapter : NSObject <HMHomeManagerDelegate> {

	os_unfair_lock_s _lock;
	BOOL _ready;
	HMHomeManager* _homekit;
	NSCondition* _condition;

}

@property (nonatomic,readonly) HMHomeManager * homekit;              //@synthesize homekit=_homekit - In the implementation block
@property (nonatomic,readonly) NSCondition * condition;              //@synthesize condition=_condition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSCondition *)condition;
-(void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2 ;
-(void)homeManager:(id)arg1 didUpdateAuthorizationStatus:(unsigned long long)arg2 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(id)currentAccessory;
-(id)initWithHomeManager:(id)arg1 ;
-(id)accessoryWithUniqueIdentifier:(id)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(id)mediaSystemForAccessory:(id)arg1 ;
-(id)alarmsForAccessory:(id)arg1 ;
-(HMHomeManager *)homekit;
-(id)accessoriesInRoom:(id)arg1 ;
-(id)settingsForKeyPath:(id)arg1 fromSettings:(id)arg2 ;
-(id)accessoriesInMediaSystem:(id)arg1 ;
-(id)zoneForAccessory:(id)arg1 ;
-(id)accessoriesInZone:(id)arg1 ;
-(id)roomForAccessory:(id)arg1 ;
-(id)settingsForKeyPath:(id)arg1 onAccessory:(id)arg2 ;
-(id)settingsForKeyPath:(id)arg1 onMediaObject:(id)arg2 ;
-(id)distantSettingsForKeyPath:(id)arg1 onAccessory:(id)arg2 ;
-(id)accessorySettingForDistantAccessorySetting:(id)arg1 ;
-(id)distantAccessorySettingForAccessorySetting:(id)arg1 onAccessory:(id)arg2 ;
-(id)alarmsCollectionForAccessory:(id)arg1 ;
-(id)allAccessoriesForSiriContextTargetReference:(id)arg1 ;
-(id)addAlarm:(id)arg1 toAccessory:(id)arg2 ;
-(id)updateAlarm:(id)arg1 onAccessory:(id)arg2 ;
-(id)accessoriesForSiriContextTargetReference:(id)arg1 ;
-(id)removeAlarm:(id)arg1 fromAccessory:(id)arg2 ;
@end
