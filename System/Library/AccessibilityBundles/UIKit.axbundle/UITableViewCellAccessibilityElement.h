/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class NSIndexPath, UITableViewCell, NSMutableArray;

@interface UITableViewCellAccessibilityElement : UIAccessibilityElement {

	NSIndexPath* _indexPath;
	UITableViewCell* _tableViewCell;
	NSMutableArray* _mockChildren;
	BOOL _usingRealTableViewCell;

}

@property (nonatomic,retain) NSIndexPath * indexPath;                                //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) UITableViewCell * tableViewCell;                        //@synthesize tableViewCell=_tableViewCell - In the implementation block
@property (nonatomic,readonly) UITableViewCell * realTableViewCell; 
@property (nonatomic,readonly) UITableViewCell * existingTableViewCell; 
@property (assign,nonatomic) BOOL usingRealTableViewCell;                            //@synthesize usingRealTableViewCell=_usingRealTableViewCell - In the implementation block
-(id)description;
-(void)dealloc;
-(NSIndexPath *)indexPath;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityValue;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(id)accessibilityLanguage;
-(BOOL)_accessibilityIsInTableCell;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityHeaderElements;
-(NSRange)accessibilityRowRange;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(CGRect)accessibilityFrame;
-(BOOL)accessibilityPerformEscape;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(id)accessibilityIdentifier;
-(id)_accessibilityTextOperations;
-(id)_accessibilityTextViewTextOperationResponder;
-(BOOL)_accessibilitySetNativeFocus;
-(unsigned long long)_accessibilityAutomationType;
-(id)accessibilityLocalizedStringKey;
-(id)accessibilityLocalizationBundleID;
-(id)accessibilityLocalizationBundlePath;
-(id)accessibilityLocalizedStringTableName;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)accessibilityRespondsToUserInteraction;
-(BOOL)_accessibilityIsSpeakThisElement;
-(BOOL)_accessibilityIsScannerGroup;
-(unsigned long long)_accessibilityScanningBehaviorTraits;
-(id)_accessibilityUserTestingChildren;
-(UITableViewCell *)realTableViewCell;
-(BOOL)_accessibilityCanPerformEscapeAction;
-(BOOL)accessibilityScrollToVisibleWithChild:(id)arg1 ;
-(BOOL)shouldGroupAccessibilityChildren;
-(BOOL)_accessibilitySupportsActivateAction;
-(BOOL)accessibilityActivate;
-(id)_privateAccessibilityCustomActions;
-(id)accessibilityCustomActions;
-(void)_accessibilityMarkElementForVisiblePointHitTest:(BOOL)arg1 ;
-(id)_accessibilityUserTestingProxyView;
-(id)_accessibilityUserTestingVisibleAncestor;
-(id)accessibilityUserInputLabels;
-(id)_accessibilityLineNumberAndColumnForPoint:(CGPoint)arg1 ;
-(NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1 ;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(BOOL)_accessibilityHasNativeFocus;
-(BOOL)_accessibilityCanBecomeNativeFocused;
-(BOOL)_accessibilityViewHierarchyHasNativeFocus;
-(BOOL)_accessibilityHasTextOperations;
-(BOOL)_accessibilityRetainsCustomRotorActionSetting;
-(BOOL)_allowCustomActionHintSpeakOverride;
-(BOOL)_accessibilityIsTableCell;
-(NSRange)_accessibilityIndexPathAsRange;
-(BOOL)_accessibilityShouldIncludeRowRangeInElementDescription;
-(long long)_accessibilityUserTestingChildrenCount;
-(CGPoint)_accessibilityMinScrubberPosition;
-(CGPoint)_accessibilityMaxScrubberPosition;
-(id)_accessibilityAbsoluteValue;
-(BOOL)_accessibilityElementServesAsHeadingLandmark;
-(BOOL)_accessibilityIsAwayAlertElement;
-(BOOL)_accessibilityBackingElementIsValid;
-(long long)_accessibilityScannerActivateBehavior;
-(id)_accessibilityEquivalenceTag;
-(id)_accessibilitySpeakThisString;
-(id)_accessibilityCustomActionGroupIdentifier;
-(BOOL)_accessibilityImplementsDefaultRowRange;
-(long long)_accessibilityCompareElement:(id)arg1 toElement:(id)arg2 ;
-(double)_accessibilityAllowedGeometryOverlap;
-(void)_accessibilityCopy;
-(void)_accessibilityCut;
-(void)_accessibilityPaste;
-(void)_accessibilitySelectAll;
-(void)_accessibilitySelect;
-(void)_accessibilityUndo;
-(void)_accessibilityRedo;
-(id)_accessibilitySemanticContextForElement:(id)arg1 ;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityElementDidBecomeFocused;
-(id)_accessibilityTableViewCellContentSubviews;
-(BOOL)accessibilityPerformMagicTap;
-(id)_accessibilityProxyView;
-(BOOL)_accessibilityUserTestingIsDefaultButton;
-(BOOL)_accessibilityUserTestingIsCancelButton;
-(BOOL)_accessibilityUserTestingIsDestructiveButton;
-(BOOL)_accessibilityUserTestingIsPreferredButton;
-(BOOL)_accessibilityIsOutsideParentBounds;
-(UITableViewCell *)tableViewCell;
-(void)unregisterAllChildren;
-(void)registerMockChild:(id)arg1 ;
-(UITableViewCell *)existingTableViewCell;
-(void)setTableViewCell:(UITableViewCell *)arg1 ;
-(void)unregisterMockChild:(id)arg1 ;
-(BOOL)usingRealTableViewCell;
-(CGRect)_accessibilityChargedLineBoundsForRange:(NSRange)arg1 ;
-(void)setUsingRealTableViewCell:(BOOL)arg1 ;
@end

