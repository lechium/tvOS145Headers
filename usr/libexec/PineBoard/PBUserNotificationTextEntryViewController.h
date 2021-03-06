//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBUserNotificationViewController-Protocol.h"
#import "TVSUITextEntryControllerDelegate-Protocol.h"
#import "TextEntryButtonViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSMutableArray, NSString, PBCFUserNotification, TVSStateMachine, UITapGestureRecognizer;
@protocol PBUserNotificationViewControllerDelegate;

@interface PBUserNotificationTextEntryViewController : UIViewController <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, TextEntryButtonViewDelegate, TVSUITextEntryControllerDelegate, PBUserNotificationViewController>
{
    PBCFUserNotification *_notification;	// 8 = 0x8
    id <PBUserNotificationViewControllerDelegate> _delegate;	// 16 = 0x10
    long long _preferredUserInterfaceStyle;	// 24 = 0x18
    UIViewController *_childViewController;	// 32 = 0x20
    UITapGestureRecognizer *_menuRecognizer;	// 40 = 0x28
    TVSStateMachine *_stateMachine;	// 48 = 0x30
    long long _currentTextField;	// 56 = 0x38
    NSMutableArray *_userValues;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100048a40
@property(retain, nonatomic) NSMutableArray *userValues; // @synthesize userValues=_userValues;
@property(nonatomic) long long currentTextField; // @synthesize currentTextField=_currentTextField;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(nonatomic) long long preferredUserInterfaceStyle; // @synthesize preferredUserInterfaceStyle=_preferredUserInterfaceStyle;
@property(nonatomic) __weak id <PBUserNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PBCFUserNotification *notification; // @synthesize notification=_notification;
- (id)_messageStringAttributes;	// IMP=0x0000000100048544
- (id)_titleStringAttributes;	// IMP=0x00000001000482dc
- (void)_handleHomeButton:(id)arg1;	// IMP=0x00000001000480b0
- (void)_menuButtonPressed:(id)arg1;	// IMP=0x0000000100047f58
- (void)textEntryControllerDidFinish:(id)arg1;	// IMP=0x0000000100047e54
- (void)buttonView:(id)arg1 didSelectButton:(id)arg2 atIndex:(long long)arg3;	// IMP=0x0000000100047d00
- (id)textField;	// IMP=0x0000000100047c0c
- (void)_showChildViewController:(id)arg1;	// IMP=0x00000001000479fc
- (id)_buttonsForTextField:(long long)arg1 defaultButtonIndex:(long long *)arg2;	// IMP=0x00000001000474f0
- (void)_showTextEntryViewControllerForTextField:(long long)arg1;	// IMP=0x0000000100046d20
- (void)_configureStateMachine;	// IMP=0x0000000100045e08
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x0000000100045d3c
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x0000000100045cc0
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0000000100045bf4
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100045b50
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100045aa0
- (void)loadView;	// IMP=0x0000000100045924
- (id)init;	// IMP=0x0000000100045764
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010004563c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

