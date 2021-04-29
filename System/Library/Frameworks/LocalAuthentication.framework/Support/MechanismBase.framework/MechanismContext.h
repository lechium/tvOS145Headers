/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol LABackoffCounter, OS_dispatch_queue;
@class NSObject;

@interface MechanismContext : NSObject {

	id<LABackoffCounter> _backoffCounter;
	NSObject*<OS_dispatch_queue> _serverQueue;

}

@property (nonatomic,retain) id<LABackoffCounter> backoffCounter;                   //@synthesize backoffCounter=_backoffCounter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serverQueue;              //@synthesize serverQueue=_serverQueue - In the implementation block
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)serverQueue;
-(id<LABackoffCounter>)backoffCounter;
-(void)setBackoffCounter:(id<LABackoffCounter>)arg1 ;
-(void)setServerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

