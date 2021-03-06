//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCATModernMenuItemDelegate-Protocol.h"

@class NSArray, NSString, SCATMenu, SCATModernMenuSheetCollectionViewController, SCATModernMenuViewController, SCATStaticElementProvider, UICollectionView, UICollectionViewLayout, UIViewController;

@interface SCATModernMenuSheet : NSObject <SCATModernMenuItemDelegate>
{
    NSArray *_menuItems;	// 8 = 0x8
    _Bool _shouldIncludeBackItem;	// 16 = 0x10
    SCATStaticElementProvider *_elementProvider;	// 24 = 0x18
    UIViewController *_viewController;	// 32 = 0x20
    UICollectionViewLayout *_collectionViewLayout;	// 40 = 0x28
    SCATMenu *_menu;	// 48 = 0x30
    UICollectionView *_collectionView;	// 56 = 0x38
}

+ (_Bool)isValidForElement:(id)arg1;	// IMP=0x00000001000a6718
- (void).cxx_destruct;	// IMP=0x00000001000a89ec
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool shouldIncludeBackItem; // @synthesize shouldIncludeBackItem=_shouldIncludeBackItem;
@property(retain, nonatomic) SCATMenu *menu; // @synthesize menu=_menu;
@property(retain, nonatomic) UICollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (id)_capitalizedMenuTitle:(id)arg1;	// IMP=0x00000001000a87e8
- (_Bool)shouldUpdateMenuItem:(id)arg1;	// IMP=0x00000001000a87e0
- (void)menuItemWasActivated:(id)arg1;	// IMP=0x00000001000a85b8
- (id)_scannerGroupsForMenuItems:(id)arg1;	// IMP=0x00000001000a7fec
- (id)_filteredMenuItemsForGuidedAccessIfNeeded:(id)arg1;	// IMP=0x00000001000a7f08
- (id)_fallbackImageForCustomActionMenuItem:(id)arg1 charactersInUse:(id)arg2;	// IMP=0x00000001000a7c98
- (id)menuItemsForCustomActions:(id)arg1 activateBehavior:(unsigned long long)arg2;	// IMP=0x00000001000a770c
- (void)reload;	// IMP=0x00000001000a7680
- (_Bool)isBackItemIdentifier:(id)arg1;	// IMP=0x00000001000a7668
- (unsigned long long)currentPage;	// IMP=0x00000001000a751c
- (unsigned long long)numberOfItemsInFirstPage;	// IMP=0x00000001000a7514
- (unsigned long long)numberOfPagesRequired;	// IMP=0x00000001000a7424
- (void)invalidateMenuItems;	// IMP=0x00000001000a7414
- (id)itemWithIdentifier:(id)arg1;	// IMP=0x00000001000a7280
@property(readonly, nonatomic) SCATModernMenuSheetCollectionViewController *scatCollectionViewController;
@property(readonly, retain, nonatomic) SCATStaticElementProvider *elementProvider; // @synthesize elementProvider=_elementProvider;
@property(readonly, nonatomic) SCATModernMenuViewController *menuViewController;
@property(retain, nonatomic) NSArray *menuItems;
- (Class)_menuItemClass;	// IMP=0x00000001000a6990
@property(readonly, copy) NSString *description;
- (void)_setupMenuSheet;	// IMP=0x00000001000a67f0
- (id)initWithMenu:(id)arg1;	// IMP=0x00000001000a676c
- (id)init;	// IMP=0x00000001000a6720
- (id)menuItemStruts;	// IMP=0x00000001000a9204
- (id)alternateTipElement;	// IMP=0x00000001000a91fc
- (long long)preferredTipObject;	// IMP=0x00000001000a91f4
- (_Bool)shouldIncludeTextLabels;	// IMP=0x00000001000a91a0
- (id)backTitle;	// IMP=0x00000001000a9160
- (_Bool)shouldUseBackItemAsDoneItem;	// IMP=0x00000001000a9158
- (_Bool)delegatesScannerControl;	// IMP=0x00000001000a9150
- (unsigned long long)presentationMode;	// IMP=0x00000001000a9148
- (_Bool)shouldAllowDwellSelection;	// IMP=0x00000001000a9140
- (_Bool)shouldKeepScannerAwake;	// IMP=0x00000001000a9138
- (id)makeMenuItemsIfNeeded;	// IMP=0x00000001000a9130
- (struct CGRect)rectToClear;	// IMP=0x00000001000a911c
- (_Bool)allowsExitAction;	// IMP=0x00000001000a9114
- (_Bool)allowsBackAction;	// IMP=0x00000001000a910c
- (void)viewControllerViewWillDisappear:(_Bool)arg1;	// IMP=0x00000001000a9108
- (void)viewControllerViewWillAppear:(_Bool)arg1;	// IMP=0x00000001000a9104
- (void)didChangeOrientation;	// IMP=0x00000001000a9100
- (void)willUnfocusFromContext:(id)arg1;	// IMP=0x00000001000a90fc
- (void)didFocusOnContext:(id)arg1 oldContext:(id)arg2;	// IMP=0x00000001000a8a50
- (void)willFocusOnContext:(id)arg1;	// IMP=0x00000001000a8a4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

