//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSString;
@protocol NotificationProvider;

@protocol NotificationProviderDelegate
- (void)provider:(id <NotificationProvider>)arg1 didClearNotificationsForFollowUpItemsWithIdentifiers:(NSArray *)arg2 activationSource:(unsigned long long)arg3;
- (void)provider:(id <NotificationProvider>)arg1 didDismissNotificationForFollowUpItemWithIdentifier:(NSString *)arg2 activationSource:(unsigned long long)arg3;
- (void)provider:(id <NotificationProvider>)arg1 didActivateNotificationForFollowUpItemWithIdentifier:(NSString *)arg2 activationSource:(unsigned long long)arg3;
- (void)provider:(id <NotificationProvider>)arg1 didActivateNotification:(NSString *)arg2 forFollowUpItemWithIdentifier:(NSString *)arg3 activationSource:(unsigned long long)arg4;
@end

