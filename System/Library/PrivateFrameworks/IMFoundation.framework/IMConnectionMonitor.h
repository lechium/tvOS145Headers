/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IMConnectionMonitorDelegate;
@class NSString;

@interface IMConnectionMonitor : NSObject {

	NSString* _remoteHost;
	id<IMConnectionMonitorDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL isImmediatelyReachable; 
@property (nonatomic,readonly) BOOL requiresDataConnectionActivation; 
@property (assign,setter=setDataConnectionActive:,nonatomic) BOOL isDataConnectionActive; 
@property (assign,nonatomic,__weak) id<IMConnectionMonitorDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) NSString * remoteHost;                                           //@synthesize remoteHost=_remoteHost - In the implementation block
+(id)alloc;
-(id<IMConnectionMonitorDelegate>)delegate;
-(void)setDelegate:(id<IMConnectionMonitorDelegate>)arg1 ;
-(void)_setup;
-(void)clear;
-(id)initWithRemoteHost:(id)arg1 delegate:(id)arg2 ;
-(BOOL)isImmediatelyReachable;
-(void)goConnectedWithLocalSocketAddress:(id)arg1 remoteSocketAddress:(id)arg2 ;
-(void)goDisconnected;
-(void)setDataConnectionActive:(BOOL)arg1 ;
-(BOOL)isDataConnectionActive;
-(BOOL)requiresDataConnectionActivation;
-(NSString *)remoteHost;
@end

