//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol BatterySaverWatcherDelegate, OS_dispatch_queue;

@interface BatterySaverWatcher : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 16 = 0x10
    int _token;	// 24 = 0x18
    id <BatterySaverWatcherDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010002b544
@property(readonly) __weak id <BatterySaverWatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateStatus;	// IMP=0x000000010002b4d4
- (void)_registerNotifier;	// IMP=0x000000010002b320
- (void)_notifyDelegate;	// IMP=0x000000010002b264
- (unsigned long long)_getState;	// IMP=0x000000010002b22c
- (_Bool)batterySaverEnabled;	// IMP=0x000000010002b18c
- (void)dealloc;	// IMP=0x000000010002b144
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000010002b0c4

@end

