/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiPolicy/WiFiUsageSession.h>

@class WiFiUsageNetworkDetails, NSDate, NSMutableSet;

@interface WiFiUsageNetworkSession : WiFiUsageSession {

	WiFiUsageNetworkDetails* _lastNetworkDetails;
	BOOL _linkUp;
	NSDate* _lastLinkUpTime;
	NSDate* _lastLinkDownTime;
	double _networkUsageDuration;
	NSMutableSet* _neighborBssList;
	NSMutableSet* _otherBssList;

}
-(id)initWithInterfaceName:(id)arg1 ;
-(id)metricName;
-(void)sessionDidStart;
-(void)sessionDidEnd;
-(void)linkStateDidChange:(BOOL)arg1 isInvoluntary:(BOOL)arg2 linkChangeReason:(long long)arg3 linkChangeSubreason:(long long)arg4 withNetworkDetails:(id)arg5 ;
-(void)displayStateDidChange:(BOOL)arg1 ;
-(void)joinStateDidChange:(id)arg1 withReason:(unsigned long long)arg2 lastDisconnectReason:(long long)arg3 lastJoinFailure:(long long)arg4 andNetworkDetails:(id)arg5 ;
-(void)scanningStateDidChange:(BOOL)arg1 client:(unsigned long long)arg2 neighborBSS:(id)arg3 otherBSS:(id)arg4 ;
-(BOOL)isSessionHarvestable;
@end

