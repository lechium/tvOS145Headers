//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class NSDictionary, UIViewController;

@interface _PBScreenSaverPresentationPrepareUITransaction : BSTransaction
{
    UIViewController *_childViewController;	// 8 = 0x8
    NSDictionary *_options;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100188610
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
- (void)_begin;	// IMP=0x00000001001881e4
- (_Bool)_canBeInterrupted;	// IMP=0x00000001001881c8

@end

