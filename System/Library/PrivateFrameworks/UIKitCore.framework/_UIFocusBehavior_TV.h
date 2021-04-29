/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIFocusBehavior.h>

@class NSString;

@interface _UIFocusBehavior_TV : NSObject <_UIFocusBehavior>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)treatFocusableItemAsLeaf;
-(BOOL)controlCanBecomeFocused:(id)arg1 ;
-(BOOL)supportsIndirectPanningMovement;
-(BOOL)shouldEnableFocusOnSelect;
-(BOOL)searchBarTextFieldCanBecomeFocused;
-(BOOL)tabBarCanBecomeFocused;
-(BOOL)tabBarButtonCanBecomeFocused;
-(BOOL)inferCellFocusability;
-(BOOL)wantsFocusForTraitCollection:(id)arg1 ;
-(BOOL)syncsFocusAndResponder;
-(long long)focusDeferral;
-(BOOL)ignoresKeyWindowStatusWhenRestoringFocus;
-(BOOL)supportsFocusGroups;
-(long long)focusRingForContext:(id)arg1 ;
-(BOOL)shouldUseAccessibilityCompareForItemGeometry;
-(BOOL)treatFirstAndLastHeadingsAsGlobal;
-(BOOL)supportViewTransparencyAndMultipleWindows;
-(BOOL)supportsIndirectRotaryMovement;
-(BOOL)shouldConvertIndirectTapsIntoArrowKeys;
-(BOOL)supportsGameControllers;
-(BOOL)supportsArrowKeys;
-(BOOL)supportsTabKey;
-(long long)indirectMovementPriority;
-(BOOL)shouldSupressIndirectMovementOnSelect;
-(BOOL)shouldForwardKeyCode:(long long)arg1 toFocusEngineWithFirstResponder:(id)arg2 ;
-(BOOL)supportsLinearMovementDebugOverlay;
-(void)_handleRemoteTouchSurfaceTypeDidChangeNotification:(id)arg1 ;
@end

