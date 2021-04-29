//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDescriptionProviding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, PBOverlayLayoutController, PBSOverlayLayoutElementHint, PBSOverlayLayoutElementIdentifier;

@interface PBOverlayLayoutElement : NSObject <BSDescriptionProviding, NSCopying>
{
    PBSOverlayLayoutElementIdentifier *_identifier;	// 8 = 0x8
    PBOverlayLayoutController *_controller;	// 16 = 0x10
    struct CGVector _stickiness;	// 24 = 0x18
    struct CGVector _offset;	// 40 = 0x28
    struct CGRect _frame;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001001a0438
@property(nonatomic) struct CGVector offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) struct CGVector stickiness; // @synthesize stickiness=_stickiness;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) __weak PBOverlayLayoutController *controller; // @synthesize controller=_controller;
@property(readonly, copy, nonatomic) PBSOverlayLayoutElementIdentifier *identifier; // @synthesize identifier=_identifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000001001a00a4
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000001001a000c
- (id)succinctDescriptionBuilder;	// IMP=0x000000010019ff38
- (id)succinctDescription;	// IMP=0x000000010019fed0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010019fe84
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010019f7b0
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PBSOverlayLayoutElementHint *hint;
@property(readonly, nonatomic, getter=isFixed) _Bool fixed;
@property(readonly, nonatomic) struct CGRect adjustedFrame;
- (id)initWithElement:(id)arg1;	// IMP=0x000000010019f34c
- (id)initWithElement:(id)arg1 controller:(id)arg2;	// IMP=0x000000010019f1a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
