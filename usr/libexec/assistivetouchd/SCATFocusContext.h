//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class AXElementGroup, SCATElementManager;
@protocol SCATElement;

@interface SCATFocusContext : NSObject <NSCopying>
{
    _Bool _firstInSequence;	// 8 = 0x8
    _Bool _shouldResumeFromMenuDismissal;	// 9 = 0x9
    _Bool _shouldBeTrackedByZoom;	// 10 = 0xa
    _Bool _shouldSuppressAudioOutput;	// 11 = 0xb
    _Bool _shouldDeferFocusToNativeFocusElement;	// 12 = 0xc
    _Bool _shouldPlayMenuSoundOnFocus;	// 13 = 0xd
    int _selectBehavior;	// 16 = 0x10
    id <SCATElement> _element;	// 24 = 0x18
    SCATElementManager *_elementManager;	// 32 = 0x20
    id <SCATElement> _menuElement;	// 40 = 0x28
}

+ (id)adHocFocusContext:(id)arg1;	// IMP=0x00000001000aaa24
+ (id)menuOnlyFocusContext:(id)arg1;	// IMP=0x00000001000aa9d0
+ (int)_behaviorForElement:(id)arg1 manager:(id)arg2;	// IMP=0x00000001000aa924
+ (id)focusContextWithElement:(id)arg1 elementManager:(id)arg2 selectBehavior:(int)arg3 options:(int)arg4;	// IMP=0x00000001000aa86c
+ (id)focusContextAutomatic;	// IMP=0x00000001000aa800
+ (id)focusContextSelf;	// IMP=0x00000001000aa794
- (void).cxx_destruct;	// IMP=0x00000001000ab3b0
@property(nonatomic) _Bool shouldPlayMenuSoundOnFocus; // @synthesize shouldPlayMenuSoundOnFocus=_shouldPlayMenuSoundOnFocus;
@property(nonatomic) _Bool shouldDeferFocusToNativeFocusElement; // @synthesize shouldDeferFocusToNativeFocusElement=_shouldDeferFocusToNativeFocusElement;
@property(nonatomic) _Bool shouldSuppressAudioOutput; // @synthesize shouldSuppressAudioOutput=_shouldSuppressAudioOutput;
@property(nonatomic) _Bool shouldBeTrackedByZoom; // @synthesize shouldBeTrackedByZoom=_shouldBeTrackedByZoom;
@property(retain, nonatomic) id <SCATElement> menuElement; // @synthesize menuElement=_menuElement;
@property(nonatomic) _Bool shouldResumeFromMenuDismissal; // @synthesize shouldResumeFromMenuDismissal=_shouldResumeFromMenuDismissal;
@property(nonatomic) SCATElementManager *elementManager; // @synthesize elementManager=_elementManager;
@property(nonatomic) int selectBehavior; // @synthesize selectBehavior=_selectBehavior;
@property(retain, nonatomic) id <SCATElement> element; // @synthesize element=_element;
@property(nonatomic, getter=isFirstInSequence) _Bool firstInSequence; // @synthesize firstInSequence=_firstInSequence;
- (_Bool)containsPoint:(struct CGPoint)arg1;	// IMP=0x00000001000ab2a8
@property(readonly, nonatomic) _Bool isGroup;
@property(readonly, nonatomic) AXElementGroup *parentGroup;
- (_Bool)waitsForSelectAction;	// IMP=0x00000001000ab104
- (id)_descriptionForSelectBehavior:(int)arg1;	// IMP=0x00000001000ab0a8
- (id)description;	// IMP=0x00000001000aad5c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000aabec
- (id)initWithElement:(id)arg1 elementManager:(id)arg2 selectBehavior:(int)arg3;	// IMP=0x00000001000aaaa0
- (id)elemLog;	// IMP=0x000000010002d6ac

@end

