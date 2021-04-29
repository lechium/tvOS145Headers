//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKPushMessage;

@interface AKPushMessageNotificationPresenter : NSObject
{
    AKPushMessage *_message;	// 8 = 0x8
    struct __CFUserNotification *_pendingNotification;	// 16 = 0x10
}

+ (void)populateNotificationOptionsWithCommonKeys:(id)arg1 makeNoise:(_Bool)arg2;	// IMP=0x0000000100052c14
+ (struct __CFUserNotification *)createUserNotificationWithTitle:(id)arg1 body:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 makeNoise:(_Bool)arg5;	// IMP=0x00000001000528c0
+ (id)createUserNotificationOptionsWithTitle:(id)arg1 body:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 makeNoise:(_Bool)arg5;	// IMP=0x00000001000526bc
+ (id)_presenterQueue;	// IMP=0x0000000100050ce8
- (void).cxx_destruct;	// IMP=0x00000001000535b0
- (void)_startChangePasswordFlowForAccount:(id)arg1;	// IMP=0x000000010005333c
- (void)_promptForChangePasswordForAccount:(id)arg1;	// IMP=0x0000000100052f30
- (unsigned long long)_notificationResultFromButtonPressed:(unsigned long long)arg1;	// IMP=0x0000000100052f18
- (void)_receiveResponseFromNotification:(struct __CFUserNotification *)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100052d44
- (void)tearDown;	// IMP=0x0000000100052a0c
- (id)_loginNotificationOptionsWithContext:(id)arg1 isSilent:(_Bool)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4;	// IMP=0x00000001000523a8
- (void)_locationNameWithLatitude:(id)arg1 longitude:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100051fd0
- (struct __CFUserNotification *)_loginAlertForAccount:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 message:(id)arg4 resolvedBody:(id)arg5;	// IMP=0x0000000100051f70
- (id)_loginAlertOptionsForAccount:(id)arg1 latitude:(id)arg2 longitude:(id)arg3 message:(id)arg4 resolvedBody:(id)arg5;	// IMP=0x0000000100051bac
- (void)_waitForNotificationResponse:(struct __CFUserNotification *)arg1 withIdentifier:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010005190c
- (void)_showCode:(id)arg1 body:(id)arg2 notificationTitle:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010005175c
- (void)presentLoginNotificationWithCode:(id)arg1 piggy:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000514a0
- (void)_handleResult:(unsigned long long)arg1 forAccount:(id)arg2;	// IMP=0x0000000100051420
- (void)presentMessageWithAccount:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100050d80
- (id)initWithMessage:(id)arg1;	// IMP=0x0000000100050c70

@end

