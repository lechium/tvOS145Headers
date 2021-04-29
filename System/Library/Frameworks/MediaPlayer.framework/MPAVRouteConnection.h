/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface MPAVRouteConnection : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	BOOL _invalidated;
	NSMutableArray* _pendingConnectionHandlers;
	/*^block*/id _invalidationHandler;
	void* _externalDevice;

}

@property (nonatomic,readonly) void* externalDevice;                               //@synthesize externalDevice=_externalDevice - In the implementation block
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (getter=isConnecting,nonatomic,readonly) BOOL connecting; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@property (nonatomic,copy) id invalidationHandler;                                 //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(id)description;
-(void)dealloc;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)reset;
-(BOOL)isInvalidated;
-(id)invalidationHandler;
-(BOOL)isConnected;
-(BOOL)isConnecting;
-(void*)externalDevice;
-(void)_externalDeviceConnectionStateDidChangeNotification:(id)arg1 ;
-(id)initWithExternalDevice:(void*)arg1 ;
-(void)connectWithCompletion:(/*^block*/id)arg1 ;
-(void)connectWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)connectWithUserInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)connectWithOptions:(unsigned long long)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendCustomData:(id)arg1 ;
-(void)sendMediaRemoteCommand:(unsigned)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_connectionStateDidChange:(unsigned)arg1 error:(id)arg2 ;
@end

