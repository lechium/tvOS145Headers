/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface MTCFUserNotificationPoster : NSObject {

	NSMutableDictionary* _notifications;

}

@property (nonatomic,retain) NSMutableDictionary * notifications;              //@synthesize notifications=_notifications - In the implementation block
+(id)sharedInstance;
+(void)cancelNotificationsWithIdentifiers:(id)arg1 ;
+(void)postNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 bypassDND:(BOOL)arg6 handler:(/*^block*/id)arg7 ;
-(id)init;
-(void)setNotifications:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)notifications;
@end
