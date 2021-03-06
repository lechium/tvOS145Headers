/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:30 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSNumber;


@protocol DNDSMutableHeartbeatMetricsProtocol <DNDSHeartbeatMetricsProtocol>
@property (assign,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL manuallyEnabled; 
@property (nonatomic,copy) NSNumber * numberOfSessions; 
@property (nonatomic,copy) NSNumber * numberOfManualSessions; 
@property (assign,nonatomic) BOOL enabledFromControlCenterPhone; 
@property (assign,nonatomic) BOOL enabledFromControlCenterWatch; 
@property (assign,nonatomic) BOOL enabledForOneHour; 
@property (assign,nonatomic) BOOL enabledUntilEvening; 
@property (assign,nonatomic) BOOL enabledUntilMorning; 
@property (assign,nonatomic) BOOL enabledAtLocation; 
@property (assign,nonatomic) BOOL enabledDuringEvent; 
@property (assign,nonatomic) BOOL enabledDrivingMode; 
@property (assign,nonatomic) BOOL enabledSleepMode; 
@required
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1;
-(void)setManuallyEnabled:(BOOL)arg1;
-(NSNumber *)numberOfSessions;
-(void)setNumberOfSessions:(id)arg1;
-(NSNumber *)numberOfManualSessions;
-(void)setNumberOfManualSessions:(id)arg1;
-(void)setEnabledFromControlCenterPhone:(BOOL)arg1;
-(void)setEnabledFromControlCenterWatch:(BOOL)arg1;
-(void)setEnabledForOneHour:(BOOL)arg1;
-(void)setEnabledUntilEvening:(BOOL)arg1;
-(void)setEnabledUntilMorning:(BOOL)arg1;
-(void)setEnabledAtLocation:(BOOL)arg1;
-(void)setEnabledDuringEvent:(BOOL)arg1;
-(void)setEnabledDrivingMode:(BOOL)arg1;
-(void)setEnabledSleepMode:(BOOL)arg1;
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

