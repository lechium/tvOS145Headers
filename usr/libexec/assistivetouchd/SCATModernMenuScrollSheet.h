//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATModernMenuSheet.h"

@class AXElement;
@protocol SCATModernMenuScrollSheetFallbackScrollAncestorDelegate;

@interface SCATModernMenuScrollSheet : SCATModernMenuSheet
{
    AXElement *_scrollableElement;	// 16 = 0x10
    id <SCATModernMenuScrollSheetFallbackScrollAncestorDelegate> _fallbackScrollAncestorDelegate;	// 24 = 0x18
}

+ (_Bool)isValidForElement:(id)arg1;	// IMP=0x0000000100082248
- (void).cxx_destruct;	// IMP=0x00000001000838d8
@property(nonatomic) __weak id <SCATModernMenuScrollSheetFallbackScrollAncestorDelegate> fallbackScrollAncestorDelegate; // @synthesize fallbackScrollAncestorDelegate=_fallbackScrollAncestorDelegate;
@property(retain, nonatomic) AXElement *scrollableElement; // @synthesize scrollableElement=_scrollableElement;
- (void)menuItemWasActivated:(id)arg1;	// IMP=0x000000010008338c
- (void)_performScrollAction:(int)arg1;	// IMP=0x000000010008300c
- (void)reload;	// IMP=0x0000000100082f50
- (long long)preferredTipObject;	// IMP=0x0000000100082f48
- (id)makeMenuItemsIfNeeded;	// IMP=0x00000001000823d0
- (id)initWithMenu:(id)arg1 scrollableElement:(id)arg2 fallbackScrollAncestorDelegate:(id)arg3;	// IMP=0x0000000100082320

@end

