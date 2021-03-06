/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SideBoardCore.framework/SideBoardCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, SIBCConnectionManagerFactory, SIBCConnectionManagerDelegate;
@class NSObject, NSMutableArray;

@interface SIBCConnectionManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _connections;
	id<SIBCConnectionManagerFactory> _factory;
	id<SIBCConnectionManagerDelegate> _delegate;

}

@property (__weak) id<SIBCConnectionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)connectionManagerWithQueue:(id)arg1 ;
-(id<SIBCConnectionManagerDelegate>)delegate;
-(void)setDelegate:(id<SIBCConnectionManagerDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)_removeConnection:(id)arg1 ;
-(void)_addConnection:(id)arg1 ;
-(id)initWithQueue:(id)arg1 factory:(id)arg2 ;
-(id)connectionWithEndpointIdentifier:(id)arg1 ;
-(id)addConnectionWithEndpointIdentifier:(id)arg1 applicationName:(id)arg2 ;
-(void)removeConnectionWithEndpointIdentifier:(id)arg1 ;
@end

