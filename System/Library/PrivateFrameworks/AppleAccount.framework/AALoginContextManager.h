/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppleAccount/AppleAccount-Structs.h>
@class AAStorableLoginContext;

@interface AALoginContextManager : NSObject {

	AAStorableLoginContext* _stashedContext;
	os_unfair_lock_s _stashedContextLock;

}

@property (nonatomic,retain) AAStorableLoginContext * stashedContext; 
+(id)sharedManager;
+(void)stashLoginResponseWithAuthenticationResults:(id)arg1 cloudKitToken:(id)arg2 ;
-(id)init;
-(void)setStashedContext:(AAStorableLoginContext *)arg1 ;
-(void)persistStashedContext;
-(AAStorableLoginContext *)stashedContext;
@end

