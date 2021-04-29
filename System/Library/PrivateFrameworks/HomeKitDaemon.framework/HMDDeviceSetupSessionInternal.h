/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, NSData, NSDictionary;

@interface HMDDeviceSetupSessionInternal : HMFObject {

	unsigned long long _state;
	HMDHomeManager* _homeManager;
	NSData* _sessionData;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic) unsigned long long state;                 //@synthesize state=_state - In the implementation block
@property (__weak,readonly) HMDHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) NSData * sessionData;                     //@synthesize sessionData=_sessionData - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                  //@synthesize userInfo=_userInfo - In the implementation block
+(id)allowedClasses;
+(long long)role;
+(BOOL)isSupported;
-(NSDictionary *)userInfo;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSData *)sessionData;
-(void)setSessionData:(NSData *)arg1 ;
-(HMDHomeManager *)homeManager;
-(id)initWithHomeManager:(id)arg1 ;
-(BOOL)processSessionData:(id)arg1 error:(id*)arg2 ;
@end

