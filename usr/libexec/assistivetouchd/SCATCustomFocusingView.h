//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SCATCustomFocusingView : UIView
{
    long long _focusState;	// 8 = 0x8
}

+ (double)roundedRectCornerRadius;	// IMP=0x00000001000a6680
+ (double)unfocusedStateBorderThickness;	// IMP=0x00000001000a6678
+ (double)focusedGroupStateBorderThickness;	// IMP=0x00000001000a6670
+ (double)focusedStateBorderThickness;	// IMP=0x00000001000a6668
+ (id)unfocusedStateContentsColor;	// IMP=0x00000001000a665c
+ (id)focusedGroupStateContentsColor;	// IMP=0x00000001000a6650
+ (id)focusedStateContentsColor;	// IMP=0x00000001000a663c
+ (id)unfocusedStateFillColor;	// IMP=0x00000001000a6628
+ (id)focusedGroupStateFillColor;	// IMP=0x00000001000a6614
+ (id)focusedStateFillColor;	// IMP=0x00000001000a6600
+ (id)unfocusedStateColor;	// IMP=0x00000001000a65d8
+ (id)focusedGroupStateColor;	// IMP=0x00000001000a65b4
+ (id)focusedStateColor;	// IMP=0x00000001000a65a0
@property(nonatomic) long long focusState; // @synthesize focusState=_focusState;
- (_Bool)updateFocusState:(long long)arg1;	// IMP=0x00000001000a66d0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000a6688

@end
