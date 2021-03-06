/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSNumber;


@protocol DNDSHeartbeatMetricsProtocol <NSCopying,NSMutableCopying,DNDSBackingStoreRecord>
@property (nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) BOOL manuallyEnabled; 
@property (nonatomic,copy,readonly) NSNumber * numberOfSessions; 
@property (nonatomic,copy,readonly) NSNumber * numberOfManualSessions; 
@property (nonatomic,readonly) BOOL enabledFromControlCenterPhone; 
@property (nonatomic,readonly) BOOL enabledFromControlCenterWatch; 
@property (nonatomic,readonly) BOOL enabledForOneHour; 
@property (nonatomic,readonly) BOOL enabledUntilEvening; 
@property (nonatomic,readonly) BOOL enabledUntilMorning; 
@property (nonatomic,readonly) BOOL enabledAtLocation; 
@property (nonatomic,readonly) BOOL enabledDuringEvent; 
@property (nonatomic,readonly) BOOL enabledDrivingMode; 
@property (nonatomic,readonly) BOOL enabledSleepMode; 
@required
-(BOOL)enabled;
-(NSNumber *)numberOfSessions;
-(NSNumber *)numberOfManualSessions;
-(BOOL)manuallyEnabled;
-(BOOL)enabledFromControlCenterPhone;
-(BOOL)enabledFromControlCenterWatch;
-(BOOL)enabledForOneHour;
-(BOOL)enabledUntilEvening;
-(BOOL)enabledUntilMorning;
-(BOOL)enabledAtLocation;
-(BOOL)enabledDuringEvent;
-(BOOL)enabledDrivingMode;
-(BOOL)enabledSleepMode;

@end

