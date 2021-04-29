/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface MPNetworkPlayabilityMonitor : NSObject <ICEnvironmentMonitorObserver> {

	long long _effectiveNetworkTypeForCloudPlayback;
	long long _networkType;
	double _lastAverageBitrate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) double lastAverageBitrate; 
@property (nonatomic,readonly) long long networkType; 
@property (nonatomic,readonly) long long effectiveNetworkTypeForPlayback; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedNetworkPlayabilityMonitor;
-(id)init;
-(long long)networkType;
-(void)environmentMonitorDidChangeNetworkType:(id)arg1 ;
-(void)adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:(id)arg1 ;
-(long long)effectiveNetworkTypeForPlayback;
-(double)lastAverageBitrate;
-(long long)_onQueueEffectiveNetworkTypeForAverageBitrate:(double)arg1 ;
-(void)_onQueueUpdateEffectiveNetworkTypesForPlayback;
@end

