//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSession;

__attribute__((visibility("hidden")))
@interface ValidUpdateRequest : NSObject
{
    double _updateScheduled;	// 8 = 0x8
    NSURLSession *_backgroundSession;	// 16 = 0x10
    NSURLSession *_ephemeralSession;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100026bf4
@property(retain) NSURLSession *ephemeralSession; // @synthesize ephemeralSession=_ephemeralSession;
@property(retain) NSURLSession *backgroundSession; // @synthesize backgroundSession=_backgroundSession;
@property double updateScheduled; // @synthesize updateScheduled=_updateScheduled;
- (_Bool)updateNowFromServer:(id)arg1 version:(unsigned long long)arg2 queue:(id)arg3;	// IMP=0x0000000100026758
- (_Bool)scheduleUpdateFromServer:(id)arg1 forVersion:(unsigned long long)arg2 withQueue:(id)arg3;	// IMP=0x00000001000265ec
- (void)createSessions:(id)arg1 forServer:(id)arg2;	// IMP=0x0000000100026494
- (id)createSession:(_Bool)arg1 queue:(id)arg2 forServer:(id)arg3;	// IMP=0x000000010002631c
- (id)validUpdateConfiguration:(_Bool)arg1;	// IMP=0x0000000100026104

@end

