//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface PBThermalWarningView : UIView
{
    UILabel *_text;	// 8 = 0x8
    UILabel *_subtext;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010002de18
@property(readonly, nonatomic) UILabel *subtext; // @synthesize subtext=_subtext;
@property(readonly, nonatomic) UILabel *text; // @synthesize text=_text;
- (void)layoutSubviews;	// IMP=0x000000010002db30
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010002d4bc

@end

