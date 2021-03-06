/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, AVConferenceXPCClient;

@interface AVCTestMonitor : NSObject {

	id _delegate;
	NSObject*<OS_dispatch_queue> _delegateNotificationQueue;
	AVConferenceXPCClient* _connection;

}
-(void)dealloc;
-(id)delegate;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)registerBlocksForNotifications;
-(void)deregisterBlocksForNotifications;
-(id)delegateNotificationQueue;
-(void)setupNotificationQueue:(id)arg1 ;
-(void)requestReport;
-(void)updateAudioInjectConfig:(id)arg1 ;
-(void)forceNetworkCellular:(BOOL)arg1 ;
-(void)setEnableLoopbackInterface:(BOOL)arg1 ;
-(void)setEnableOneToOneMode:(BOOL)arg1 ;
-(void)setEmulatedRxPLR:(double)arg1 ;
-(void)setCannedReplayPath:(id)arg1 ;
-(void)setForcedTargetBitrate:(int)arg1 ;
-(void)setForcedCapBitrate:(int)arg1 ;
-(void)setEmulatedNetworkConfigurationPath:(id)arg1 ;
@end

