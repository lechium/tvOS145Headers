//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITapGestureRecognizer.h>

@protocol PBTapGestureRecognizerDelegate;

@interface PBTapGestureRecognizer : UITapGestureRecognizer
{
    _Bool _recognizeOnPressDown;	// 8 = 0x8
    unsigned long long _numberOfTaps;	// 16 = 0x10
}

@property(readonly, nonatomic) unsigned long long numberOfTaps; // @synthesize numberOfTaps=_numberOfTaps;
@property(nonatomic) _Bool recognizeOnPressDown; // @synthesize recognizeOnPressDown=_recognizeOnPressDown;
- (void)reset;	// IMP=0x000000010004d5f8
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000010004d1bc

// Remaining properties
@property(nonatomic) __weak id <PBTapGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end

