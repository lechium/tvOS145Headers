//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATCustomFocusingView.h"

@class CALayer, SCATVisualScrollerView, UIView, UIVisualEffectView;
@protocol SCATVisualScrollerContainerViewScrollingDelegate;

@interface SCATVisualScrollerContainerView : SCATCustomFocusingView
{
    id <SCATVisualScrollerContainerViewScrollingDelegate> _delegate;	// 8 = 0x8
    SCATVisualScrollerView *_scrollUpView;	// 16 = 0x10
    SCATVisualScrollerView *_scrollDownView;	// 24 = 0x18
    SCATVisualScrollerView *_scrollLeftView;	// 32 = 0x20
    SCATVisualScrollerView *_scrollRightView;	// 40 = 0x28
    long long _axis;	// 48 = 0x30
    CALayer *_borderLayer;	// 56 = 0x38
    UIVisualEffectView *_backgroundView;	// 64 = 0x40
    UIView *_scrollerContainerView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010005be08
@property(retain, nonatomic) UIView *scrollerContainerView; // @synthesize scrollerContainerView=_scrollerContainerView;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) CALayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
@property(retain, nonatomic) SCATVisualScrollerView *scrollRightView; // @synthesize scrollRightView=_scrollRightView;
@property(retain, nonatomic) SCATVisualScrollerView *scrollLeftView; // @synthesize scrollLeftView=_scrollLeftView;
@property(retain, nonatomic) SCATVisualScrollerView *scrollDownView; // @synthesize scrollDownView=_scrollDownView;
@property(retain, nonatomic) SCATVisualScrollerView *scrollUpView; // @synthesize scrollUpView=_scrollUpView;
@property(nonatomic) __weak id <SCATVisualScrollerContainerViewScrollingDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)updateFocusState:(long long)arg1;	// IMP=0x000000010005b7d8
- (id)description;	// IMP=0x000000010005b724
- (void)layoutSubviews;	// IMP=0x000000010005b4c4
- (id)initWithAxis:(long long)arg1;	// IMP=0x000000010005a4b4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010005a4a4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010005a494

@end

