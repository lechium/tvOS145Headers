//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol RPScreenCaptureManagerProtocol;

@interface RPScreenCaptureManager : NSObject
{
    CDUnknownBlockType _screenCaptureOutputHandler;	// 8 = 0x8
    CDUnknownBlockType _didStartScreenCaptureHandler;	// 16 = 0x10
    id <RPScreenCaptureManagerProtocol> _delegate;	// 24 = 0x18
    _Bool _screenCaptureDidStart;	// 32 = 0x20
}

+ (id)newInstance;	// IMP=0x0000000100031c18
- (void).cxx_destruct;	// IMP=0x0000000100031f5c
- (void)stop;	// IMP=0x0000000100031e88
- (void)startSessionWithPID:(int)arg1 windowSize:(struct CGSize)arg2 systemRecording:(_Bool)arg3 contextIDs:(id)arg4 outputHandler:(CDUnknownBlockType)arg5 didStartHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100031d68
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100031c24

@end

