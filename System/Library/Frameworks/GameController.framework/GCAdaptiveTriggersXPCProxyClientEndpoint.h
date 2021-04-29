/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_GCIPCEndpointClient.h>
#import <libobjc.A.dylib/GCAdaptiveTriggers.h>
#import <libobjc.A.dylib/GCAdaptiveTriggersXPCProxyRemoteClientEndpointInterface.h>

@protocol GCAdaptiveTriggersXPCProxyRemoteServerEndpointInterface, NSObjectNSCopyingNSSecureCoding;
@class GCDeviceAdaptiveTriggersPayload, GCDeviceAdaptiveTriggersStatusPayload, GCController, NSString;

@interface GCAdaptiveTriggersXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCAdaptiveTriggers, GCAdaptiveTriggersXPCProxyRemoteClientEndpointInterface> {

	GCController* _controller;
	id<GCAdaptiveTriggersXPCProxyRemoteServerEndpointInterface> _serverEndpoint;
	id _connectionInterruptionRegistration;
	id _connectionInvalidationRegistration;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	GCDeviceAdaptiveTriggersPayload* _leftTrigger;
	GCDeviceAdaptiveTriggersPayload* _rightTrigger;
	GCDeviceAdaptiveTriggersStatusPayload* _leftStatus;
	GCDeviceAdaptiveTriggersStatusPayload* _rightStatus;

}

@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) GCDeviceAdaptiveTriggersPayload * leftTrigger;                    //@synthesize leftTrigger=_leftTrigger - In the implementation block
@property (nonatomic,retain) GCDeviceAdaptiveTriggersStatusPayload * leftStatus;               //@synthesize leftStatus=_leftStatus - In the implementation block
@property (nonatomic,retain) GCDeviceAdaptiveTriggersPayload * rightTrigger;                   //@synthesize rightTrigger=_rightTrigger - In the implementation block
@property (nonatomic,retain) GCDeviceAdaptiveTriggersStatusPayload * rightStatus;              //@synthesize rightStatus=_rightStatus - In the implementation block
-(id)init;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(GCDeviceAdaptiveTriggersPayload *)leftTrigger;
-(GCDeviceAdaptiveTriggersPayload *)rightTrigger;
-(void)setController:(id)arg1 ;
-(void)invalidateConnection;
-(void)refreshStatuses;
-(void)setLeftStatus:(GCDeviceAdaptiveTriggersStatusPayload *)arg1 ;
-(void)setRightStatus:(GCDeviceAdaptiveTriggersStatusPayload *)arg1 ;
-(void)_remoteEndpointHasSetStatuses:(id)arg1 ;
-(void)setLeftTrigger:(GCDeviceAdaptiveTriggersPayload *)arg1 ;
-(GCDeviceAdaptiveTriggersStatusPayload *)leftStatus;
-(void)setRightTrigger:(GCDeviceAdaptiveTriggersPayload *)arg1 ;
-(GCDeviceAdaptiveTriggersStatusPayload *)rightStatus;
-(void)fetchObjectIdentifierWithReply:(/*^block*/id)arg1 ;
-(void)newStatuses:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 initialStatuses:(id)arg2 ;
-(void)setRemoteEndpoint:(id)arg1 connection:(id)arg2 ;
@end
