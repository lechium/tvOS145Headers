/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VCUserNotificationManagerDelegate <NSObject>
@required
-(void)notificationManager:(id)arg1 receivedConfirmationToRunTriggerWithIdentifier:(id)arg2 pendingTriggerEventIDs:(id)arg3;
-(void)notificationManager:(id)arg1 didDismissTriggerWithIdentifier:(id)arg2 pendingTriggerEventIDs:(id)arg3;
-(void)notificationManager:(id)arg1 didFailToPostNotificationPromptWithTriggerIdentifier:(id)arg2 pendingTriggerEventIDs:(id)arg3;

@end

