//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRootWindow.h>

@protocol HNDWindowDelegateProtocol;

@interface HNDWindow : _UIRootWindow
{
    id <HNDWindowDelegateProtocol> _hitTestDelegate;	// 8 = 0x8
}

+ (_Bool)_isSecure;	// IMP=0x0000000100011030
- (void).cxx_destruct;	// IMP=0x000000010001106c
@property(nonatomic) __weak id <HNDWindowDelegateProtocol> hitTestDelegate; // @synthesize hitTestDelegate=_hitTestDelegate;
- (_Bool)_alwaysGetsContexts;	// IMP=0x0000000100011028
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100010fb4

@end

