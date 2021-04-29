/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSMutableArray, NSString;

@interface WiFiUsageRangingSession : NSObject {

	NSDate* _sessionStartTimestamp;
	NSDate* _sessionLinkUpTimestamp;
	NSDate* _peerDiscoveryTimestamp;
	NSDate* _rangingStartedTimestamp;
	NSDate* _rangingCompletionTimestamp;
	unsigned long long _selfPreferredChannel;
	unsigned long long _selfMainChannel;
	unsigned long long _selfChannelFlags;
	unsigned long long _peerPreferredChannel;
	unsigned long long _peerMainChannel;
	unsigned long long _peerChannelFlags;
	unsigned long long _numRequestedMeasurements;
	unsigned long long _numValidMeasurements;
	long long _measurementStatus;
	unsigned long long _measurementFlags;
	double _linkUpLatency;
	double _rangingLatency;
	NSMutableArray* _rttSamples;
	NSString* _requester;

}
-(id)init;
-(id)metricName;
-(id)sessionSummary:(BOOL)arg1 ;
-(void)rangingLinkUp;
-(void)rangingSessionRequestedWithSelfPreferredChannel:(unsigned long long)arg1 selfMainChannel:(unsigned long long)arg2 selfChannelFlags:(unsigned long long)arg3 peerPreferredChannel:(unsigned long long)arg4 peerMainChannel:(unsigned long long)arg5 peerChannelFlags:(unsigned long long)arg6 requester:(id)arg7 ;
-(void)rangingStartedWithNumMeasurements:(unsigned long long)arg1 ;
-(void)rangingCompletedWithValidCount:(unsigned long long)arg1 resultStatus:(long long)arg2 resultFlags:(unsigned long long)arg3 ;
-(void)addRangingRttSampleWithRssi:(long long)arg1 rtt:(long long)arg2 snr:(unsigned long long)arg3 flags:(unsigned long long)arg4 channel:(unsigned long long)arg5 coreId:(unsigned long long)arg6 bitErrorRate:(unsigned long long)arg7 phyError:(unsigned long long)arg8 andPeerSnr:(unsigned long long)arg9 andPeerCoreId:(unsigned long long)arg10 andPeerBitErrorRate:(unsigned long long)arg11 andPeerPhyError:(unsigned long long)arg12 ;
@end

