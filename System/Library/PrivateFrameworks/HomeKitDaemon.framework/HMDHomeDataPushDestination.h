/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, HMDUser;

@interface HMDHomeDataPushDestination : NSObject {

	BOOL _ignoreConfigCompare;
	NSString* _username;
	HMDUser* _user;
	NSString* _destination;

}

@property (nonatomic,readonly) NSString * username;                     //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) HMDUser * user;                          //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSString * destination;                  //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) NSString * pushDestination; 
@property (assign,nonatomic) BOOL ignoreConfigCompare;                  //@synthesize ignoreConfigCompare=_ignoreConfigCompare - In the implementation block
-(id)description;
-(HMDUser *)user;
-(NSString *)username;
-(NSString *)destination;
-(BOOL)ignoreConfigCompare;
-(id)initWithUser:(id)arg1 destination:(id)arg2 ;
-(NSString *)pushDestination;
-(void)setIgnoreConfigCompare:(BOOL)arg1 ;
@end

