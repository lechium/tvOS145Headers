//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSString;

@interface ConnectivityHelperTask : NSObject
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSString *_taskDescription;	// 16 = 0x10
    NSMutableData *_receivedData;	// 24 = 0x18
}

@property(readonly) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)dealloc;	// IMP=0x00000001000233cc
- (id)initWithTaskDescription:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000232c8

@end

