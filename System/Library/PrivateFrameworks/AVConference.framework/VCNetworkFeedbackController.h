/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/WCMClientDelegate.h>
#import <libobjc.A.dylib/WRMClientDelegate.h>

@protocol VCNetworkFeedbackControllerDelegate;
@class VCWCMClient, WRMClient, VCConnectionManager, VCRecommendedNetworkSettings;

@interface VCNetworkFeedbackController : NSObject <WCMClientDelegate, WRMClientDelegate> {

	id<VCNetworkFeedbackControllerDelegate> _weakDelegate;
	VCWCMClient* _WCMClient;
	WRMClient* _WRMClient;
	VCConnectionManager* _connectionManager;
	VCRecommendedNetworkSettings* _recommendedSettings;
	unsigned _clientTargetBitrate;
	unsigned _clientTargetBitrateCap;
	double _wrmReportingInterval;
	unsigned _downlinkTargetBitrate;
	unsigned _downlinkTargetCellBitrateCap;
	int _wrmPendingBitrateCapDelta;
	BOOL _isWRMNotificationPending;
	SCD_Struct_VC109 _savedWRMNotification;

}

@property (readonly) unsigned recommendedTargetBitrateCap; 
@property (assign) unsigned clientTargetBitrate;                                 //@synthesize clientTargetBitrate=_clientTargetBitrate - In the implementation block
@property (assign) unsigned clientTargetBitrateCap;                              //@synthesize clientTargetBitrateCap=_clientTargetBitrateCap - In the implementation block
@property (assign,nonatomic) unsigned downlinkTargetBitrate;                     //@synthesize downlinkTargetBitrate=_downlinkTargetBitrate - In the implementation block
@property (assign,nonatomic) unsigned downlinkTargetCellBitrateCap;              //@synthesize downlinkTargetCellBitrateCap=_downlinkTargetCellBitrateCap - In the implementation block
-(void)dealloc;
-(void)start;
-(void)stop;
-(id)strongDelegate;
-(void)setPreWarmState:(BOOL)arg1 ;
-(void)requestWRMNotification;
-(void)setupWCMClient;
-(void)setupWRMClient;
-(void)cleanupWRMClient;
-(void)cleanupWCMClient;
-(unsigned)clientTargetBitrateCap;
-(unsigned)clientTargetBitrate;
-(void)wcmSetCallConfig:(unsigned)arg1 interferenceLevel:(unsigned)arg2 ;
-(void)wcmGetCallConfig:(unsigned*)arg1 targetBitrate:(unsigned*)arg2 ;
-(void)setWRMMetricConfig:(SCD_Struct_VC108*)arg1 ;
-(void)setWRMNotification:(SCD_Struct_VC109*)arg1 ;
-(void)setWRMCoexMetrics:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 connectionManager:(id)arg2 ;
-(unsigned)recommendedTargetBitrateCap;
-(void)sendFeedbackControllerReport:(SCD_Struct_VC110)arg1 ;
-(void)sendStatusUpdate:(const SCD_Struct_VC111*)arg1 ;
-(void)setDownlinkTargetBitrate:(unsigned)arg1 ;
-(void)setDownlinkTargetCellBitrateCap:(unsigned)arg1 ;
-(void)setClientTargetBitrate:(unsigned)arg1 ;
-(void)setClientTargetBitrateCap:(unsigned)arg1 ;
-(unsigned)downlinkTargetBitrate;
-(unsigned)downlinkTargetCellBitrateCap;
@end
