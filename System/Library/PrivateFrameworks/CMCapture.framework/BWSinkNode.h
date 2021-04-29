/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class FigStateMachine, NSMutableArray, NSString;

@interface BWSinkNode : BWNode {

	FigStateMachine* _stateMachine;
	os_unfair_lock_s _stateLock;
	NSMutableArray* _handlersToCallWhenIdle;
	NSMutableArray* _handlersToCallWhenActive;
	NSString* _sinkID;
	OpaqueFigSimpleMutexRef _configurationHandlerLock;
	long long _liveConfigurationID;
	NSMutableArray* _configurationLiveHandlers;
	NSMutableArray* _configurationLiveIDs;

}

@property (nonatomic,copy,readonly) NSString * sinkID;                //@synthesize sinkID=_sinkID - In the implementation block
@property (readonly) NSString * currentStateDebugString; 
@property (readonly) BOOL isActive; 
@property (readonly) long long liveConfigurationID; 
+(void)initialize;
-(void)dealloc;
-(BOOL)isActive;
-(id)nodeType;
-(void)addOutput:(id)arg1 ;
-(NSString *)sinkID;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)initWithSinkID:(id)arg1 ;
-(void)_setupSinkNodeStateMachine;
-(void)notifyWhenActive:(/*^block*/id)arg1 ;
-(void)notifyWhenIdle:(/*^block*/id)arg1 ;
-(void)notifyWhenConfigurationID:(long long)arg1 becomesLive:(/*^block*/id)arg2 ;
-(NSString *)currentStateDebugString;
-(long long)liveConfigurationID;
@end
