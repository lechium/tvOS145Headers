//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NEIKEv2FallbackChildSession;

@interface NEIKEv2FallbackConfigurationOperation : NSObject
{
    _Bool _exclusive;	// 8 = 0x8
    long long _requestState;	// 16 = 0x10
    NEIKEv2FallbackChildSession *_childSession;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010007efb4
@property _Bool exclusive; // @synthesize exclusive=_exclusive;
@property(retain) NEIKEv2FallbackChildSession *childSession; // @synthesize childSession=_childSession;
@property long long requestState; // @synthesize requestState=_requestState;

@end

