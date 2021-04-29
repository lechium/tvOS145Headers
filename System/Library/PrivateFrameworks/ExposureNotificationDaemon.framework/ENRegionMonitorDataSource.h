/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ENRegionMonitorDataSource <NSObject>
@property (assign,nonatomic,__weak) NSObject*<ENRegionMonitorSourceDelegate> delegate; 
@required
-(NSObject*<ENRegionMonitorSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)startMonitoring;
-(void)stopMonitoring;
-(id)currentRegionVisit;

@end
