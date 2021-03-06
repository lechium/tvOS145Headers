/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class NSObject;

@interface DMTimer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _fireBlock;
	unsigned long long _secondsBeforeFirstFire;
	unsigned long long _secondsOfLeeway;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                    //@synthesize timer=_timer - In the implementation block
@property (nonatomic,copy) id fireBlock;                                             //@synthesize fireBlock=_fireBlock - In the implementation block
@property (assign,nonatomic) unsigned long long secondsBeforeFirstFire;              //@synthesize secondsBeforeFirstFire=_secondsBeforeFirstFire - In the implementation block
@property (assign,nonatomic) unsigned long long secondsOfLeeway;                     //@synthesize secondsOfLeeway=_secondsOfLeeway - In the implementation block
-(void)cancel;
-(void)resume;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setFireBlock:(id)arg1 ;
-(void)setSecondsBeforeFirstFire:(unsigned long long)arg1 ;
-(void)setSecondsOfLeeway:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(unsigned long long)secondsBeforeFirstFire;
-(unsigned long long)secondsOfLeeway;
-(id)fireBlock;
-(id)initWithSecondsBeforeFirstFire:(unsigned long long)arg1 secondsOfLeeway:(unsigned long long)arg2 fireBlock:(/*^block*/id)arg3 ;
-(void)cancelSynchronously;
@end

