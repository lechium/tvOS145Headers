/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIStatusBarDisplayItemPlacementGroup.h>

@class NSArray, _UIStatusBarDisplayItemPlacement;

@interface _UIStatusBarDisplayItemPlacementIndicatorsGroup : _UIStatusBarDisplayItemPlacementGroup {

	NSArray* _stablePlacements;
	NSArray* _unstablePlacements;
	_UIStatusBarDisplayItemPlacement* _bluetoothInsetPaddingItem;

}

@property (nonatomic,copy,readonly) NSArray * stablePlacements;                                           //@synthesize stablePlacements=_stablePlacements - In the implementation block
@property (nonatomic,copy,readonly) NSArray * unstablePlacements;                                         //@synthesize unstablePlacements=_unstablePlacements - In the implementation block
@property (nonatomic,readonly) _UIStatusBarDisplayItemPlacement * bluetoothInsetPaddingItem;              //@synthesize bluetoothInsetPaddingItem=_bluetoothInsetPaddingItem - In the implementation block
+(id)activityItemDisplayIdentifier;
+(id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 bluetoothPaddingInset:(double)arg3 ;
-(NSArray *)stablePlacements;
-(NSArray *)unstablePlacements;
-(_UIStatusBarDisplayItemPlacement *)bluetoothInsetPaddingItem;
@end
