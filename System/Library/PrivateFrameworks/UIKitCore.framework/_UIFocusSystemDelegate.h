/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIFocusSystemDelegate <NSObject>
@optional
-(id)_preferredFocusEnvironmentsForFocusSystem:(id)arg1;
-(BOOL)_focusSystem:(id)arg1 prefersDeferralForFocusUpdateInContext:(id)arg2;
-(BOOL)_focusSystem:(id)arg1 shouldRestoreFocusInContext:(id)arg2;
-(void)_focusSystem:(id)arg1 didFinishUpdatingFocusInContext:(id)arg2;
-(id)_focusMapContainerForFocusSystem:(id)arg1;
-(id)_focusItemContainerForFocusSystem:(id)arg1;
-(BOOL)_shouldWaitForFocusMovementActionToEnableFocusSystem:(id)arg1;
-(BOOL)_focusSystem:(id)arg1 performFocusMovementWithInfo:(id)arg2;

@end

