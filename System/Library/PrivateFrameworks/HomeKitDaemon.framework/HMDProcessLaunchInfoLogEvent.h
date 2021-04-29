/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString;

@interface HMDProcessLaunchInfoLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	NSString* _dataSyncState;
	double _timeSincePreviousProcessLaunch;
	double _timeSinceLaunchToDataSyncStateGood;

}

@property (nonatomic,copy,readonly) NSString * dataSyncState;                //@synthesize dataSyncState=_dataSyncState - In the implementation block
@property (readonly) double timeSincePreviousProcessLaunch;                  //@synthesize timeSincePreviousProcessLaunch=_timeSincePreviousProcessLaunch - In the implementation block
@property (readonly) double timeSinceLaunchToDataSyncStateGood;              //@synthesize timeSinceLaunchToDataSyncStateGood=_timeSinceLaunchToDataSyncStateGood - In the implementation block
-(id)eventName;
-(NSString *)dataSyncState;
-(id)serializedEvent;
-(double)timeSincePreviousProcessLaunch;
-(double)timeSinceLaunchToDataSyncStateGood;
-(id)initWithDataSyncState:(id)arg1 timeSincePreviousProcessLaunch:(double)arg2 timeSinceLaunchToDataSyncStateGood:(double)arg3 ;
@end

