//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKDSystemAvailabilityWatcher-Protocol.h"

@class NSString;

@interface CKDMain : NSObject <CKDSystemAvailabilityWatcher>
{
    _Bool _upAndRunning;	// 8 = 0x8
}

+ (id)sharedMain;	// IMP=0x0000000100003520
@property(nonatomic) _Bool upAndRunning; // @synthesize upAndRunning=_upAndRunning;
- (_Bool)systemAvailabilityChanged:(unsigned long long)arg1;	// IMP=0x0000000100003bb4
- (_Bool)canRunGivenAvailabilityState:(unsigned long long)arg1;	// IMP=0x0000000100003bac
- (void)_setupDistnotedEventHandler;	// IMP=0x00000001000039fc
- (void)_setupNotifydEventHandler;	// IMP=0x0000000100003628
- (id)init;	// IMP=0x000000010000358c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

