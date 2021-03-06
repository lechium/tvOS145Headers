//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATAuxiliaryElementManagerViewController.h"

@class NSMutableArray, SCATVisualScrollerContainerView;
@protocol SCATVisualScrollersAuxiliaryElementViewControllerDelegate;

@interface SCATVisualScrollersAuxiliaryElementViewController : SCATAuxiliaryElementManagerViewController
{
    _Bool _positionRelativeToContextElement;	// 8 = 0x8
    id <SCATVisualScrollersAuxiliaryElementViewControllerDelegate> _scrollDelegate;	// 16 = 0x10
    SCATVisualScrollerContainerView *_verticalScroller;	// 24 = 0x18
    SCATVisualScrollerContainerView *_horizontalScroller;	// 32 = 0x20
    NSMutableArray *_scrollerConstraints;	// 40 = 0x28
    CDUnknownBlockType _postTransitionUpdateBlock;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010008bdd8
@property(copy, nonatomic) CDUnknownBlockType postTransitionUpdateBlock; // @synthesize postTransitionUpdateBlock=_postTransitionUpdateBlock;
@property(retain, nonatomic) NSMutableArray *scrollerConstraints; // @synthesize scrollerConstraints=_scrollerConstraints;
@property(retain, nonatomic) SCATVisualScrollerContainerView *horizontalScroller; // @synthesize horizontalScroller=_horizontalScroller;
@property(retain, nonatomic) SCATVisualScrollerContainerView *verticalScroller; // @synthesize verticalScroller=_verticalScroller;
@property(nonatomic) _Bool positionRelativeToContextElement; // @synthesize positionRelativeToContextElement=_positionRelativeToContextElement;
@property(nonatomic) __weak id <SCATVisualScrollersAuxiliaryElementViewControllerDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
- (id)viewsRequiringStateUpdate;	// IMP=0x000000010008bae4
- (void)setTransitioningToOrFromActive:(_Bool)arg1;	// IMP=0x000000010008ba30
- (void)updateWithContextElement:(id)arg1;	// IMP=0x000000010008a848
- (void)_addConstraint:(id)arg1 priority:(float)arg2;	// IMP=0x000000010008a7d8
- (void)viewDidLoad;	// IMP=0x000000010008a680
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010008a5bc

@end

