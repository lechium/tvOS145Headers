/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HMPersonManager.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSUUID, NSString;

@interface HMPhotosPersonManager : HMPersonManager <HMFLogging> {

	NSUUID* _userUUID;

}

@property (copy,readonly) NSUUID * userUUID;                        //@synthesize userUUID=_userUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)personManagerUUIDFromUserUUID:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)initWithUser:(id)arg1 ;
-(void)configure;
-(NSUUID *)userUUID;
-(id)logIdentifier;
-(void)handleDidUpdateSettingsMessage:(id)arg1 ;
-(void)fetchSettingsWithCompletion:(/*^block*/id)arg1 ;
-(void)updateSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithContext:(id)arg1 UUID:(id)arg2 ;
@end

