//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface XBViewMatchingImageView : UIView
{
    _Bool _bottom;	// 8 = 0x8
    UIView *_matchingView;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100006588
@property(nonatomic) _Bool bottom; // @synthesize bottom=_bottom;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *matchingView; // @synthesize matchingView=_matchingView;
- (void)layoutSubviews;	// IMP=0x00000001000063ac
- (id)initWithMatchingView:(id)arg1 image:(id)arg2 bottom:(_Bool)arg3;	// IMP=0x000000010000624c

@end

