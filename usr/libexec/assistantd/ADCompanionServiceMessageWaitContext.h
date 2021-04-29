//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFWatchdogTimer, NSMutableArray, NSMutableSet;

@interface ADCompanionServiceMessageWaitContext : NSObject
{
    NSMutableArray *_seenMessageIDs;	// 8 = 0x8
    NSMutableSet *_waitingOnMessageIDs;	// 16 = 0x10
    AFWatchdogTimer *_timer;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001001d064c
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) AFWatchdogTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableSet *waitingOnMessageIDs; // @synthesize waitingOnMessageIDs=_waitingOnMessageIDs;
@property(retain, nonatomic) NSMutableArray *seenMessageIDs; // @synthesize seenMessageIDs=_seenMessageIDs;

@end

