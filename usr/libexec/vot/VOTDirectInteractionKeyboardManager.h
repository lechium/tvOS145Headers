//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXAccessQueue, AXAccessQueueTimer, NSMutableDictionary, VOTElement;
@protocol VOTGestureKeyboardDelegate;

@interface VOTDirectInteractionKeyboardManager : NSObject
{
    AXAccessQueue *_dispatchAccessQueue;	// 8 = 0x8
    AXAccessQueueTimer *_dispatchTimer;	// 16 = 0x10
    NSMutableDictionary *_dispatchTable;	// 24 = 0x18
    _Bool _inDirectInteractionTypingMode;	// 32 = 0x20
    _Bool _inGestureMode;	// 33 = 0x21
    id <VOTGestureKeyboardDelegate> _delegate;	// 40 = 0x28
    VOTElement *_keyboardElement;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000001000e7e90
@property(nonatomic) _Bool inGestureMode; // @synthesize inGestureMode=_inGestureMode;
@property(retain, nonatomic) VOTElement *keyboardElement; // @synthesize keyboardElement=_keyboardElement;
@property(nonatomic) __weak id <VOTGestureKeyboardDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool inDirectInteractionTypingMode; // @synthesize inDirectInteractionTypingMode=_inDirectInteractionTypingMode;
- (void)_handleCommitTyping:(id)arg1;	// IMP=0x00000001000e7ddc
- (void)_handleTypingPeriod:(id)arg1;	// IMP=0x00000001000e7d38
- (void)_handleTypingEnter:(id)arg1;	// IMP=0x00000001000e7c94
- (void)_handleShift:(id)arg1;	// IMP=0x00000001000e7c30
- (void)_handleShiftLock:(id)arg1;	// IMP=0x00000001000e7bcc
- (void)_handleDelete:(id)arg1;	// IMP=0x00000001000e7b68
- (void)_handleKeyboardSelection:(id)arg1;	// IMP=0x00000001000e7aa8
- (void)_handleKeyplaneSelection:(id)arg1;	// IMP=0x00000001000e79e8
- (void)_handleSuggestionSelection:(id)arg1;	// IMP=0x00000001000e7928
- (void)_processEvent:(id)arg1;	// IMP=0x00000001000e7894
- (_Bool)processEvent:(id)arg1;	// IMP=0x00000001000e7734
@property(readonly, nonatomic) struct CGRect gestureKeyboardRegion;
- (_Bool)inGestureTypingMode;	// IMP=0x00000001000e74dc
- (void)_updateTypingMode;	// IMP=0x00000001000e7008
- (void)updateKeyboardElement;	// IMP=0x00000001000e6f98
- (void)_updateKeyboardElement;	// IMP=0x00000001000e6f64
- (void)updateTypingMode;	// IMP=0x00000001000e6ef4
- (void)screenChange:(id)arg1;	// IMP=0x00000001000e6ec0
- (void)_initializeDispatchTable;	// IMP=0x00000001000e6a20
- (void)dealloc;	// IMP=0x00000001000e69a8
- (id)init;	// IMP=0x00000001000e6860

@end

