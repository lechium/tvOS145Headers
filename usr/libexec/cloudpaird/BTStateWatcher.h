//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol OS_dispatch_source;

@interface BTStateWatcher : NSObject
{
    _Bool _triggered;	// 8 = 0x8
    _Bool _isWatchingBuddy;	// 9 = 0x9
    int _fd;	// 12 = 0xc
    NSURL *_directoryURL;	// 16 = 0x10
    NSString *_targetFilename;	// 24 = 0x18
    CDUnknownBlockType _block;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_dispatchSourceChange;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_dispatchSourceAbort;	// 48 = 0x30
}

+ (id)monitorFirstUnlockWithAction:(CDUnknownBlockType)arg1;	// IMP=0x00000001000229d4
+ (id)monitorBuddyStateWithAction:(CDUnknownBlockType)arg1;	// IMP=0x0000000100022808
+ (id)monitorURL:(id)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x00000001000226f0
- (void).cxx_destruct;	// IMP=0x00000001000231f4
@property(nonatomic) _Bool isWatchingBuddy; // @synthesize isWatchingBuddy=_isWatchingBuddy;
@property(nonatomic) _Bool triggered; // @synthesize triggered=_triggered;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dispatchSourceAbort; // @synthesize dispatchSourceAbort=_dispatchSourceAbort;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *dispatchSourceChange; // @synthesize dispatchSourceChange=_dispatchSourceChange;
@property(nonatomic) int fd; // @synthesize fd=_fd;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSString *targetFilename; // @synthesize targetFilename=_targetFilename;
@property(retain, nonatomic) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
- (void)cancel;	// IMP=0x0000000100022ff4
- (void)fileDiscovered;	// IMP=0x0000000100022ef4
- (void)directoryChanged;	// IMP=0x0000000100022b8c
- (_Bool)start;	// IMP=0x0000000100022034
- (void)dealloc;	// IMP=0x0000000100021fe8
- (id)initWithURL:(id)arg1 action:(CDUnknownBlockType)arg2;	// IMP=0x0000000100021e34

@end

