/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MCUserNotificationManager : NSObject

@property (nonatomic,readonly) BOOL hasOutstandingNotifications; 
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(BOOL)displayQueueProfileAlertForError:(id)arg1 targetDevice:(unsigned long long)arg2 ;
-(void)mainQueueDidReceiveAppWhitelistChangedNotification;
-(void)cancelAllNotificationsCompletionBlock:(/*^block*/id)arg1 ;
-(id)_purgatoryMessageForDevice:(unsigned long long)arg1 ;
-(void)_updateTitle:(id*)arg1 andMessage:(id*)arg2 withTargetFailureInfoForDevice:(unsigned long long)arg3 fromError:(id)arg4 ;
-(void)displayUserNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonText:(id)arg4 alternateButtonText:(id)arg5 otherButtonText:(id)arg6 textfieldPlaceholder:(id)arg7 displayOnLockScreen:(BOOL)arg8 dismissOnLock:(BOOL)arg9 displayInAppWhitelistModes:(BOOL)arg10 dismissAfterTimeInterval:(double)arg11 assertion:(id)arg12 completionBlock:(/*^block*/id)arg13 ;
-(void)cancelNotificationEntriesMatchingPredicate:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_invalidTargetMessageForDevice:(unsigned long long)arg1 ;
-(void)_updateTitle:(id*)arg1 andMessage:(id*)arg2 withUnavailableTargetInfoForDevice:(unsigned long long)arg3 ;
-(BOOL)hasOutstandingNotifications;
-(void)promptUserToLogIntoiTunesWithTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)inviteUserToVPPWithTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)cancelNotificationsWithIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

