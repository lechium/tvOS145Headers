//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, SCATCursorLayer;
@protocol SCATCursorControllerDelegate;

@interface SCATCursorController : NSObject
{
    id <SCATCursorControllerDelegate> _delegate;	// 8 = 0x8
    SCATCursorLayer *_cursorBackgroundLayer;	// 16 = 0x10
    SCATCursorLayer *_cursorForegroundLayer;	// 24 = 0x18
    CALayer *_cursorContainerLayer;	// 32 = 0x20
    SCATCursorLayer *_cursorCompositingLayer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000bc1a8
@property(retain, nonatomic) SCATCursorLayer *cursorCompositingLayer; // @synthesize cursorCompositingLayer=_cursorCompositingLayer;
@property(retain, nonatomic) CALayer *cursorContainerLayer; // @synthesize cursorContainerLayer=_cursorContainerLayer;
@property(retain, nonatomic) SCATCursorLayer *cursorForegroundLayer; // @synthesize cursorForegroundLayer=_cursorForegroundLayer;
@property(retain, nonatomic) SCATCursorLayer *cursorBackgroundLayer; // @synthesize cursorBackgroundLayer=_cursorBackgroundLayer;
@property(nonatomic) __weak id <SCATCursorControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hide:(_Bool)arg1 animate:(_Bool)arg2;	// IMP=0x00000001000bc064
- (void)updatePath:(id)arg1 frame:(struct CGRect)arg2 isSimpleRect:(_Bool)arg3 animated:(_Bool)arg4 options:(int)arg5;	// IMP=0x00000001000bbe78
- (void)updateLevel:(int)arg1 animated:(_Bool)arg2 options:(int)arg3;	// IMP=0x00000001000bbd98
- (void)updateTheme:(int)arg1 animated:(_Bool)arg2 options:(int)arg3;	// IMP=0x00000001000bbcb8
- (void)updateTheme:(int)arg1 level:(int)arg2 path:(id)arg3 frame:(struct CGRect)arg4 isSimpleRect:(_Bool)arg5 animated:(_Bool)arg6 options:(int)arg7;	// IMP=0x00000001000bbbd4
- (id)description;	// IMP=0x00000001000bbb2c
- (id)init;	// IMP=0x00000001000bb814

@end

