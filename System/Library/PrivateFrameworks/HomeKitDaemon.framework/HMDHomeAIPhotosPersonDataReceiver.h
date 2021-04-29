/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDHomeAIPersonDataReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMIExternalPersonManagerDataSource.h>

@class HMIExternalPersonManager, NSString;

@interface HMDHomeAIPhotosPersonDataReceiver : HMDHomeAIPersonDataReceiver <HMFLogging, HMIExternalPersonManagerDataSource> {

	HMIExternalPersonManager* _photosPersonManager;

}

@property (readonly) HMIExternalPersonManager * photosPersonManager;              //@synthesize photosPersonManager=_photosPersonManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)logIdentifier;
-(void)fetchSettingsWithCompletion:(/*^block*/id)arg1 ;
-(HMIExternalPersonManager *)photosPersonManager;
-(void)handleUpdatedSettings:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(id)initWithPersonManagerUUID:(id)arg1 homeUUID:(id)arg2 workQueue:(id)arg3 ;
-(id)initWithPhotosPersonManager:(id)arg1 workQueue:(id)arg2 ;
@end

