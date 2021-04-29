//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BKTetherController : NSObject
{
    int _tetherState;	// 8 = 0x8
    unsigned int _demoCardConnection;	// 12 = 0xc
    int _lastOrientationCode;	// 16 = 0x10
    _Bool _orientationNotificationsDisabled;	// 20 = 0x14
}

+ (id)sharedInstance;	// IMP=0x000000010003af74
@property(nonatomic, getter=isOrientationNotificationDisabled) _Bool orientationNotificationDisabled; // @synthesize orientationNotificationDisabled=_orientationNotificationsDisabled;
- (void)updatePreferencesIfNeeded;	// IMP=0x000000010003adac
- (_Bool)_reverseTetheringActive;	// IMP=0x000000010003aafc
- (_Bool)_serviceExists:(struct __CFString *)arg1;	// IMP=0x000000010003a868
- (void)setDitheringEnabled:(int)arg1;	// IMP=0x000000010003a660
- (void)noteInterfaceOrientationChangedWithInterfaceOrientation:(int)arg1;	// IMP=0x000000010003a3d0
- (void)_handleDemoModeChanged;	// IMP=0x000000010003a27c
- (_Bool)usesDisplayPortTethering;	// IMP=0x000000010003a23c
- (_Bool)isTethered;	// IMP=0x000000010003a0ac
- (void)_setTetherState:(int)arg1;	// IMP=0x0000000100039fc4
- (void)_postDisplayPortNotificationCode:(int)arg1;	// IMP=0x0000000100039ecc
- (unsigned int)_demoCardConnection;	// IMP=0x0000000100039c38
- (void)dealloc;	// IMP=0x0000000100039bec
- (id)init;	// IMP=0x0000000100039afc

@end

