/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface VUIAirTrafficController : NSObject {

	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSMutableSet* _observers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;              //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,retain) NSMutableSet * observers;                                  //@synthesize observers=_observers - In the implementation block
+(id)defaultController;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeAllObservers;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableSet *)observers;
-(void)setObservers:(NSMutableSet *)arg1 ;
-(void)_onConnectionQueue_startObservingIfIdle;
-(void)_onConnectionQueue_stopObservingIfIdle;
@end

