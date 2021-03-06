//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSystemUI/TVSUITextAlertController.h>

#import "PBUserNotificationViewController-Protocol.h"

@class NSString, PBCFUserNotification;
@protocol PBUserNotificationViewControllerDelegate;

@interface PBUserNotificationViewControllerTermsAndConditions : TVSUITextAlertController <PBUserNotificationViewController>
{
    id <PBUserNotificationViewControllerDelegate> _delegate;	// 8 = 0x8
    PBCFUserNotification *_notification;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001002149d8
@property(retain, nonatomic) PBCFUserNotification *notification; // @synthesize notification=_notification;
@property(nonatomic) __weak id <PBUserNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleHomeButton:(id)arg1;	// IMP=0x0000000100214770
- (void)_handleMenuButton;	// IMP=0x000000010021465c
- (void)viewDidLoad;	// IMP=0x00000001002139dc
- (id)initWithTitle:(id)arg1 text:(id)arg2;	// IMP=0x00000001002138d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

