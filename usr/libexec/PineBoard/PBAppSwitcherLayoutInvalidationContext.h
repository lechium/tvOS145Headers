//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@class NSIndexPath;

@interface PBAppSwitcherLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext
{
    double _swipeUpProgress;	// 8 = 0x8
    NSIndexPath *_swipeUpItem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000a7010
@property(copy, nonatomic) NSIndexPath *swipeUpItem; // @synthesize swipeUpItem=_swipeUpItem;
@property(nonatomic) double swipeUpProgress; // @synthesize swipeUpProgress=_swipeUpProgress;

@end

