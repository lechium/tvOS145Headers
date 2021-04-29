/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/MediaFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MFStateDumpable.h>
#import <libobjc.A.dylib/MFResettable.h>
#import <libobjc.A.dylib/MFAudioSessionControlling.h>

@class NSDictionary;

@interface MediaFoundation.PlayerController : _UKNOWN_SUPERCLASS_ <MFStateDumpable, MFResettable, MFAudioSessionControlling> {

	 delegate;
	 setQueueBehavior;
	 currentItemTransition;
	 player;
	 audioSession;
	 audioSessionConfiguration;
	 videoPlayerViewController;
	 queue;
	 fsm;
	 playerObserver;
	 playerSubscription;
	 systemObserver;
	 systemSubscription;
	 didBecomeActiveSubscription;
	 willResignActiveSubscription;
	 videoPlayerBehavior;
	 userEventsMonitor;
	 reporter;
	 leaseController;
	 lastUserEvent;
	 previousItemID;

}

@property (readonly,nonatomic) NSDictionary * stateDictionary; 
-(void)reset;
-(BOOL)setAudioSessionActive:(BOOL)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3 ;
-(NSDictionary *)stateDictionary;
-(void)updateAudioSessionWithConfiguration:(id)arg1 ;
@end
