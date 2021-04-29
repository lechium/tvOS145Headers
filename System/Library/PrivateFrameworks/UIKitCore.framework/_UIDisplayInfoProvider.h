/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIDisplayInfoProviding.h>

@class FBSDisplayConfiguration, NSString;

@interface _UIDisplayInfoProvider : NSObject <_UIDisplayInfoProviding> {

	FBSDisplayConfiguration* displayConfiguration;
	unsigned long long artworkSubtype;
	double homeAffordanceOverlayAllowance;
	double systemMinimumMargin;
	UIEdgeInsets peripheryInsets;
	UIEdgeInsets safeAreaInsetsPortrait;
	UIEdgeInsets safeAreaInsetsLandscapeLeft;
	UIEdgeInsets safeAreaInsetsLandscapeRight;
	UIEdgeInsets safeAreaInsetsPortraitUpsideDown;

}

@property (nonatomic,readonly) FBSDisplayConfiguration * displayConfiguration; 
@property (nonatomic,readonly) unsigned long long artworkSubtype; 
@property (nonatomic,readonly) UIEdgeInsets peripheryInsets; 
@property (nonatomic,readonly) double systemMinimumMargin; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortrait; 
@property (nonatomic,readonly) double homeAffordanceOverlayAllowance; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeLeft; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortraitUpsideDown; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeRight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBSDisplayConfiguration *)displayConfiguration;
-(UIEdgeInsets)peripheryInsets;
-(double)systemMinimumMargin;
-(UIEdgeInsets)safeAreaInsetsPortrait;
-(double)homeAffordanceOverlayAllowance;
-(UIEdgeInsets)safeAreaInsetsLandscapeLeft;
-(UIEdgeInsets)safeAreaInsetsPortraitUpsideDown;
-(UIEdgeInsets)safeAreaInsetsLandscapeRight;
-(unsigned long long)artworkSubtype;
@end

