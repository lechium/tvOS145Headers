/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDAccessoryFirmwareUpdateTask.h>

@interface HMDAccessoryFirmwareUpdateStagingTask : HMDAccessoryFirmwareUpdateTask {

	BOOL _userInitiated;

}
-(void)run;
-(BOOL)isUserInitiated;
-(id)criteria;
-(BOOL)shouldRun;
-(id)initWithSession:(id)arg1 profile:(id)arg2 userInitiated:(BOOL)arg3 delay:(BOOL)arg4 ;
@end

