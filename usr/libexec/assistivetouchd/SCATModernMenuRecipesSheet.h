//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATModernMenuSheet.h"

@class NSArray;

@interface SCATModernMenuRecipesSheet : SCATModernMenuSheet
{
    NSArray *_recipes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100050a34
@property(retain, nonatomic) NSArray *recipes; // @synthesize recipes=_recipes;
- (long long)preferredTipObject;	// IMP=0x0000000100050a08
- (void)menuItemWasActivated:(id)arg1;	// IMP=0x00000001000504a0
- (id)makeMenuItemsIfNeeded;	// IMP=0x000000010004ff38
- (id)initWithMenu:(id)arg1;	// IMP=0x000000010004fe8c

@end

