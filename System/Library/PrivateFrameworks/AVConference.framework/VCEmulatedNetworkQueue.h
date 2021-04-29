/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/VCEmulatedNetworkElement.h>

@class VCEmulatedNetworkAlgorithmQueueBandwidth, VCEmulatedNetworkAlgorithmQueueLoss, VCEmulatedNetworkAlgorithmQueueDelay;

@interface VCEmulatedNetworkQueue : VCEmulatedNetworkElement {

	VCEmulatedNetworkAlgorithmQueueBandwidth* _queueBandwidthAlgorithm;
	VCEmulatedNetworkAlgorithmQueueLoss* _queueLossAlgorithm;
	VCEmulatedNetworkAlgorithmQueueDelay* _queueDelayAlgorithm;
	double _lastPolicyLoadingTime;

}
-(void)dealloc;
-(int)write:(id)arg1 ;
-(id)initWithPolicies:(id)arg1 ;
-(void)runUntilTime:(double)arg1 ;
-(int)enqueuePacket:(id)arg1 ;
-(void)markPacketLoss:(id)arg1 ;
-(void)updateSettingsAtTime:(double)arg1 ;
-(int)dequeuePacket:(id)arg1 time:(double)arg2 ;
@end

