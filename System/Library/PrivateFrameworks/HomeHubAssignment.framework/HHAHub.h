/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeHubAssignment.framework/HomeHubAssignment
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, HHAHubAttributes;

@interface HHAHub : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _idleCallback;
	BOOL _present;
	HHAHubAttributes* _attributes;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) HHAHubAttributes * attributes;                   //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) BOOL present;                                    //@synthesize present=_present - In the implementation block
-(HHAHubAttributes *)attributes;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)present;
-(void)_cancelTimer;
-(void)_startTimer;
-(void)_handleTimerFired;
-(id)initWithAttributes:(id)arg1 queue:(id)arg2 idleCallback:(/*^block*/id)arg3 ;
-(void)setPresenceInMesh:(BOOL)arg1 ;
@end

