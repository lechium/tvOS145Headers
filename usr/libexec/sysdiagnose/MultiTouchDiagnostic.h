//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface MultiTouchDiagnostic : NSObject
{
    _Bool _success;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_waitgroup;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100055e08
- (void)handleNotification:(id)arg1;	// IMP=0x0000000100055df8
- (_Bool)runWithTimeout:(double)arg1;	// IMP=0x0000000100055ce0

@end
