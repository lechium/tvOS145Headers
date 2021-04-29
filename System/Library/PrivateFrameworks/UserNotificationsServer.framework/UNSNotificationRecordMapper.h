/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BSCFBundle, UNSNotificationCategoryRepository;

@interface UNSNotificationRecordMapper : NSObject {

	BSCFBundle* _bundle;
	UNSNotificationCategoryRepository* _categoryRepository;

}
-(id)initWithBundle:(id)arg1 categoryRepository:(id)arg2 ;
-(id)notificationForNotificationRecord:(id)arg1 ;
-(id)notificationRequestForNotificationRecord:(id)arg1 ;
-(id)_notificationContentForNotificationRecord:(id)arg1 ;
-(id)_notificationTriggerForNotificationRecord:(id)arg1 ;
-(id)_notificationSoundForNotificationRecord:(id)arg1 ;
-(id)_notificationIconForNotificationRecord:(id)arg1 ;
@end
