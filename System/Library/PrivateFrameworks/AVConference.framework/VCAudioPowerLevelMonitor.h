/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VCAudioPowerLevelMonitorDelegate;
@class NSObject;

@interface VCAudioPowerLevelMonitor : NSObject {

	unsigned startDetectRemoteAudioLowPowerTime;
	float audioPowerThreshold;
	unsigned audioLowPowerTimeInterval;
	BOOL isAudioPowerBelowThreshold;
	BOOL isAudioPowerMovingAverage;
	float audioPowerMovingAverageCoefficient;
	float currentAudioAverage;
	NSObject*<VCAudioPowerLevelMonitorDelegate> delegate;

}

@property (assign,nonatomic) NSObject*<VCAudioPowerLevelMonitorDelegate> delegate; 
-(id)init;
-(NSObject*<VCAudioPowerLevelMonitorDelegate>)delegate;
-(void)setDelegate:(NSObject*<VCAudioPowerLevelMonitorDelegate>)arg1 ;
-(void)detectRemoteAveragePowerLevel:(float)arg1 timestamp:(unsigned)arg2 ;
@end
