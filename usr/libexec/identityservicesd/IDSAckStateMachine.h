//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface IDSAckStateMachine : NSObject
{
    _Bool _successful;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001004070c0
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool successful; // @synthesize successful=_successful;
@property(nonatomic) long long state; // @synthesize state=_state;
- (id)init;	// IMP=0x0000000100406f14

@end

