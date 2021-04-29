//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMSLogger, NSDictionary, NSMutableArray, NSString;

@interface CMSLoggingSession : NSObject
{
    NSMutableArray *events;	// 8 = 0x8
    _Bool _sessionEnded;	// 16 = 0x10
    NSString *_sessionType;	// 24 = 0x18
    NSDictionary *_metadata;	// 32 = 0x20
    CMSLogger *_belongedLogger;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100046608
@property __weak CMSLogger *belongedLogger; // @synthesize belongedLogger=_belongedLogger;
@property(readonly) _Bool sessionEnded; // @synthesize sessionEnded=_sessionEnded;
@property(retain) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, retain) NSString *sessionType; // @synthesize sessionType=_sessionType;
- (void)dealloc;	// IMP=0x0000000100046558
- (void)_endSession;	// IMP=0x000000010004640c
- (id)eventOccurance;	// IMP=0x0000000100046208
- (id)eventDurations;	// IMP=0x0000000100045f1c
- (void)recordEvent:(id)arg1;	// IMP=0x0000000100045ea0
- (void)recordEvent:(id)arg1 occuredAt:(id)arg2;	// IMP=0x0000000100045c64
- (id)initForType:(id)arg1 withMetadata:(id)arg2;	// IMP=0x0000000100045b9c

@end

