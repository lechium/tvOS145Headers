/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CalendarDaemon/CalendarDaemon-Structs.h>
@interface CADNotificationUtilities : NSObject
+(int)CADDatabaseGetEventNotificationItemsWithDatabase:(CalDatabase*)arg1 forSourceWithExternalIdentifier:(id)arg2 excludingDelegateSources:(BOOL)arg3 filteredByShowsNotificationsFlag:(BOOL)arg4 earliestExpirationDate:(id*)arg5 notificationTypes:(id*)arg6 rowIDs:(id*)arg7 occurrenceDates:(id*)arg8 ;
+(BOOL)storeIsReadOnlyDelegate:(const void*)arg1 ;
+(int)_gatherEventInvitationsAndRepliesWithContext:(id)arg1 ;
+(int)_gatherSharedCalendarInvitationsWithContext:(id)arg1 ;
+(int)_gatherSharedCalendarResponsesAndResourceChangesWithContext:(id)arg1 ;
+(void)_logNotificationCountsForNotificationTypes:(id)arg1 ;
+(int)_gatherSharedCalendarInviteReplyNotification:(const void*)arg1 withContext:(id)arg2 ;
+(int)_gatherSharedCalendarResourceChangeNotification:(const void*)arg1 withContext:(id)arg2 ;
+(int)_gatherSuggestionResourceChangeNotification:(const void*)arg1 withContext:(id)arg2 ;
+(BOOL)_storeIsDelegate:(const void*)arg1 ;
+(id)_stringForNotificationType:(int)arg1 ;
@end
