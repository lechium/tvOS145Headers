//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface iAP2PostAlert : NSObject
{
}

+ (void)iAP2TearDownAccessoryNotification:(struct __CFUserNotification **)arg1;	// IMP=0x00000001000764f8
+ (struct __CFString *)getStringForDeviceContext:(struct __CFString *)arg1;	// IMP=0x0000000100076410
+ (void)iAP2NotificationPostAccessoryNotification:(struct __CFString *)arg1 forMsg:(struct __CFString *)arg2 forDefaultButton:(struct __CFString *)arg3 withAlternateButton:(struct __CFString *)arg4 forNotification:(struct __CFUserNotification **)arg5 withCallback:(CDUnknownFunctionPointerType)arg6 andTimeout:(double)arg7;	// IMP=0x0000000100076104

@end
