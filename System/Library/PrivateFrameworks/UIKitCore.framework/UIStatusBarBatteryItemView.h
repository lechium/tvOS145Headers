/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarItemView.h>

@class UIView, _UILegibilityImageSet, UIImage;

@interface UIStatusBarBatteryItemView : UIStatusBarItemView {

	int _capacity;
	int _state;
	BOOL _batterySaverModeActive;
	UIView* _accessoryView;
	BOOL _cachedImageHasAccessoryImage;
	int _cachedCapacity;
	int _cachedAXHUDCapacity;
	_UILegibilityImageSet* _cachedImageSet;
	unsigned long long _cachedBatteryStyle;
	unsigned long long _cachedAXHUDStyle;
	UIImage* _cachedAXHUDImage;

}

@property (nonatomic,retain) _UILegibilityImageSet * cachedImageSet;              //@synthesize cachedImageSet=_cachedImageSet - In the implementation block
@property (assign,nonatomic) int cachedCapacity;                                  //@synthesize cachedCapacity=_cachedCapacity - In the implementation block
@property (assign,nonatomic) BOOL cachedImageHasAccessoryImage;                   //@synthesize cachedImageHasAccessoryImage=_cachedImageHasAccessoryImage - In the implementation block
@property (assign,nonatomic) unsigned long long cachedBatteryStyle;               //@synthesize cachedBatteryStyle=_cachedBatteryStyle - In the implementation block
@property (assign,nonatomic) int cachedAXHUDCapacity;                             //@synthesize cachedAXHUDCapacity=_cachedAXHUDCapacity - In the implementation block
@property (assign,nonatomic) unsigned long long cachedAXHUDStyle;                 //@synthesize cachedAXHUDStyle=_cachedAXHUDStyle - In the implementation block
@property (nonatomic,retain) UIImage * cachedAXHUDImage;                          //@synthesize cachedAXHUDImage=_cachedAXHUDImage - In the implementation block
-(id)_accessoryImage;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)accessibilityHUDRepresentation;
-(id)contentsImage;
-(void)_updateAccessoryImage;
-(BOOL)_needsAccessoryImage;
-(_UILegibilityImageSet *)cachedImageSet;
-(int)cachedCapacity;
-(BOOL)cachedImageHasAccessoryImage;
-(unsigned long long)cachedBatteryStyle;
-(CGSize)_batteryOffsetWithBackground:(id)arg1 ;
-(void)setCachedImageSet:(_UILegibilityImageSet *)arg1 ;
-(void)setCachedCapacity:(int)arg1 ;
-(void)setCachedImageHasAccessoryImage:(BOOL)arg1 ;
-(void)setCachedBatteryStyle:(unsigned long long)arg1 ;
-(id)_contentsImage;
-(double)extraRightPadding;
-(int)cachedAXHUDCapacity;
-(unsigned long long)cachedAXHUDStyle;
-(UIImage *)cachedAXHUDImage;
-(void)setCachedAXHUDImage:(UIImage *)arg1 ;
-(void)setCachedAXHUDCapacity:(int)arg1 ;
-(void)setCachedAXHUDStyle:(unsigned long long)arg1 ;
-(double)legibilityStrength;
@end
