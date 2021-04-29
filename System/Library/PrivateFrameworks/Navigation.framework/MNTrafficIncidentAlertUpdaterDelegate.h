/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MNTrafficIncidentAlertUpdaterDelegate <NSObject>
@required
-(void)trafficIncidentAlertUpdater:(id)arg1 receivedAlert:(id)arg2 responseCallback:(/*^block*/id)arg3;
-(void)trafficIncidentAlertUpdater:(id)arg1 invalidatedAlert:(id)arg2;
-(void)trafficIncidentAlertUpdater:(id)arg1 didDismissAlert:(id)arg2 withReroute:(BOOL)arg3;
-(void)trafficIncidentAlertUpdater:(id)arg1 updatedAlert:(id)arg2;
-(void)trafficIncidentAlertUpdater:(id)arg1 didSwitchToNewRoute:(id)arg2 forAlert:(id)arg3;
-(double)trafficIncidentAlertUpdaterRemainingTimeOnRoute:(id)arg1;
-(double)trafficIncidentAlertUpdaterTimeSinceLastAnnouncement:(id)arg1;
-(double)trafficIncidentAlertUpdaterTimeUntilNextAnnouncement:(id)arg1;
-(BOOL)trafficIncidentAlertUpdaterIsCurrentlySpeaking:(id)arg1;

@end

