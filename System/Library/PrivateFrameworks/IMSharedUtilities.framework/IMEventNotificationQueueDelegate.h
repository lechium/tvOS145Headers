/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IMEventNotificationQueueDelegate <NSObject>
@optional
-(void)eventNotificationQueue:(id)arg1 didChangeBusyState:(BOOL)arg2;
-(void)eventNotificationQueue:(id)arg1 didChangePausedState:(BOOL)arg2;
-(void)eventNotificationQueueWillSendNotifications:(id)arg1;
-(void)eventNotificationQueueDidSendNotifications:(id)arg1;

@end

