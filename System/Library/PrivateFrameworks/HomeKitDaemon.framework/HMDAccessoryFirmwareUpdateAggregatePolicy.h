/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDAccessoryFirmwareUpdatePolicy.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSArray, NSString;

@interface HMDAccessoryFirmwareUpdateAggregatePolicy : HMDAccessoryFirmwareUpdatePolicy <HMFLogging> {

	NSArray* _policies;

}

@property (nonatomic,readonly) NSArray * policies;                  //@synthesize policies=_policies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSArray *)policies;
-(void)configure;
-(BOOL)evaluate;
-(void)_registerForNotifications;
-(void)handlePolicyStatusChange:(id)arg1 ;
-(id)initWithPolicies:(id)arg1 workQueue:(id)arg2 ;
@end

