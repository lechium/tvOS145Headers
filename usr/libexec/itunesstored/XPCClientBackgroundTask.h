//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion;

@interface XPCClientBackgroundTask : NSObject
{
    CDUnknownBlockType _invalidationBlock;	// 8 = 0x8
    BKSProcessAssertion *_processAssertion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000ade38
@property(readonly, nonatomic) BKSProcessAssertion *processAssertion;
@property(readonly, nonatomic) CDUnknownBlockType invalidationBlock;
- (void)dealloc;	// IMP=0x00000001000addc8
- (id)initWithProcessAssertion:(id)arg1 invalidationBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000add18

@end

