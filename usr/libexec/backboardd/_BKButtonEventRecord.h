//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol BKHIDEventDispatcher, BKHIDEventSenderInfo;

@interface _BKButtonEventRecord : NSObject
{
    _Bool _didReceiveBeganPhase;	// 8 = 0x8
    _Bool _didReceiveEndedPhase;	// 9 = 0x9
    _Bool _didReceiveUpEvent;	// 10 = 0xa
    id <BKHIDEventSenderInfo> _senderInfo;	// 16 = 0x10
    id <BKHIDEventDispatcher> _eventDispatcher;	// 24 = 0x18
    NSSet *_destinations;	// 32 = 0x20
    double _firstDownTime;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010001512c
@property(nonatomic) _Bool didReceiveUpEvent; // @synthesize didReceiveUpEvent=_didReceiveUpEvent;
@property(nonatomic) _Bool didReceiveEndedPhase; // @synthesize didReceiveEndedPhase=_didReceiveEndedPhase;
@property(nonatomic) _Bool didReceiveBeganPhase; // @synthesize didReceiveBeganPhase=_didReceiveBeganPhase;
@property(nonatomic) double firstDownTime; // @synthesize firstDownTime=_firstDownTime;
@property(retain, nonatomic) NSSet *destinations; // @synthesize destinations=_destinations;
@property(retain, nonatomic) id <BKHIDEventDispatcher> eventDispatcher; // @synthesize eventDispatcher=_eventDispatcher;
@property(retain, nonatomic) id <BKHIDEventSenderInfo> senderInfo; // @synthesize senderInfo=_senderInfo;
- (void)applyEventPhase:(unsigned short)arg1 down:(_Bool)arg2;	// IMP=0x0000000100015078
- (id)conciseDescription;	// IMP=0x0000000100014f44
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100014e10
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100014dbc
- (id)succinctDescriptionBuilder;	// IMP=0x0000000100014da4
- (id)succinctDescription;	// IMP=0x0000000100014d50

@end

