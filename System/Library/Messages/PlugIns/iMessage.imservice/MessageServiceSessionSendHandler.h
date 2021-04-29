/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MessageServiceSessionSendHandler : NSObject
+(void)_startTiming;
+(void)_stopTiming;
+(BOOL)_isDeviceRegisteredForAccount:(id)arg1 ;
+(void)_fixParticipantsForChat:(id)arg1 ;
+(void)sendMessage:(id)arg1 toChat:(id)arg2 style:(unsigned char)arg3 onSession:(id)arg4 ;
+(id)_buildSendMessageContextWithChatIdentifier:(id)arg1 withChatStyle:(unsigned char)arg2 withServiceSession:(id)arg3 withMessage:(id)arg4 ;
+(void)_notifyOfSendMessage:(id)arg1 withContext:(id)arg2 ;
+(id)_processMessageForSending:(id)arg1 withContext:(id)arg2 ;
+(id)_processMessageForSendingToGroupIfNeeded:(id)arg1 withContext:(id)arg2 ;
+(void)_refreshGroupPhotoTTLIfNecessary:(id)arg1 withContext:(id)arg2 ;
+(void)_handleIsMeToMeForMessage:(id)arg1 withContext:(id)arg2 ;
+(void)_handleDeliveryFailureForMessage:(id)arg1 withContext:(id)arg2 ;
+(void)_handleUpdateNotificationTimeManagerForMessage:(id)arg1 withContext:(id)arg2 ;
+(void)_notifyDidSendMessage:(id)arg1 withContext:(id)arg2 ;
+(void)_logCompletedMessage:(id)arg1 withContext:(id)arg2 ;
+(void)_deactivateServiceIfNeededForContext:(id)arg1 ;
+(void)_deliverMessage:(id)arg1 withContext:(id)arg2 withBlock:(/*^block*/id)arg3 ;
+(void)_storeMessage:(id)arg1 withContext:(id)arg2 ;
+(void)_notifyNameAndPhotoControllerOfMessage:(id)arg1 onChat:(id)arg2 ;
+(void)_updateBlackholeStatusIfNeededWithMessage:(id)arg1 withContext:(id)arg2 ;
+(void)_updateLastDeviceActivityForCloudKit;
+(id)_lastAddressedURIForChatLogMetricIfNeededOnChat:(id)arg1 withIDSAccount:(id*)arg2 withServiceSession:(id)arg3 shouldLog:(BOOL)arg4 ;
+(void)_didSendMessage:(id)arg1 withContext:(id)arg2 forceDate:(id)arg3 fromStorage:(BOOL)arg4 ;
+(void)_FTAWDLogForMessage:(id)arg1 withContext:(id)arg2 ;
+(BOOL)_shouldOverrideTypingIndicator;
+(BOOL)_shouldSendAppTypingIndicator;
+(BOOL)_handleDeviceRegistrationForMessage:(id)arg1 withContext:(id)arg2 ;
+(BOOL)_failSendingMessageIfNeeded:(id)arg1 withContext:(id)arg2 ;
+(BOOL)_handleTypingIndicatorMessage:(id)arg1 withContext:(id)arg2 ;
+(void)_handleFakeReceiptBlock:(id)arg1 withContext:(id)arg2 withMsg:(id)arg3 ;
+(void)_handleMessageSentToSelf:(id)arg1 withContext:(id)arg2 isLocal:(BOOL)arg3 ;
+(id)_setCallerIDOnMessage:(id)arg1 onChat:(id)arg2 withIDSAccount:(id*)arg3 withServiceSession:(id)arg4 ;
@end

