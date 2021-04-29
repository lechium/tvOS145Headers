//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ADSystemMuteModeObserver : NSObject
{
    int _ringerStateToken;	// 8 = 0x8
    long long _muteMode;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000001001acf84
- (void).cxx_destruct;	// IMP=0x00000001001ad470
- (void)_unregisterForRingerMuteStateNotifications;	// IMP=0x00000001001ad438
- (void)_registerForRingerMuteStateNotifications;	// IMP=0x00000001001ad2f4
- (int)_ringerStateToken;	// IMP=0x00000001001ad2b8
- (void)_updateRingerMuteState:(int)arg1;	// IMP=0x00000001001ad1ec
- (long long)muteMode;	// IMP=0x00000001001ad14c
- (void)dealloc;	// IMP=0x00000001001ad100
- (id)init;	// IMP=0x00000001001acff0

@end

