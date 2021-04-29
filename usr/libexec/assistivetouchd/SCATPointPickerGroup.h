//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXRuntime/AXElementGroup.h>

@class NSIndexPath;
@protocol SCATPointPickerGroupDelegate;

@interface SCATPointPickerGroup : AXElementGroup
{
    id <SCATPointPickerGroupDelegate> _delegate;	// 8 = 0x8
    NSIndexPath *_selectionPath;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010009c2e8
@property(readonly, nonatomic) NSIndexPath *selectionPath; // @synthesize selectionPath=_selectionPath;
@property(nonatomic) __weak id <SCATPointPickerGroupDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)scatIsValid;	// IMP=0x000000010009c29c
- (struct CGRect)scatFrame;	// IMP=0x000000010009c220
- (unsigned long long)hash;	// IMP=0x000000010009c1d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010009c0a8
- (id)initWithSelectionPath:(id)arg1 generatorDelegate:(id)arg2;	// IMP=0x000000010009bff8

@end
