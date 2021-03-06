/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInputViewSetPlacementUndocked.h>
#import <UIKitCore/_UIGeometryChangeObserver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIView, UIInputViewSetPlacementOnScreen, UIResponder, NSString;

@interface UIInputViewSetPlacementFloating : UIInputViewSetPlacementUndocked <_UIGeometryChangeObserver, NSSecureCoding> {

	double _floatingWidth;
	UIView* _responderToFollow;
	CGRect _responderRect;
	CGSize _lastSize;
	UIInputViewSetPlacementOnScreen* _cachedSecondaryPlacement;

}

@property (assign,nonatomic) double floatingWidth;                         //@synthesize floatingWidth=_floatingWidth - In the implementation block
@property (assign,nonatomic) UIResponder * responderToFollow;              //@synthesize responderToFollow=_responderToFollow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(CGRect)frameAtOffset:(CGPoint)arg1 keyboardSize:(CGSize)arg2 screenSize:(CGSize)arg3 ;
+(id)placementWithUndockedOffset:(CGPoint)arg1 chromeBuffer:(UIEdgeInsets)arg2 floatingWidth:(double)arg3 ;
+(id)infoWithPoint:(CGPoint)arg1 forOwner:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(BOOL)isFloating;
-(void)_geometryChanged:(const SCD_Struct_UI23*)arg1 forAncestor:(id)arg2 ;
-(double)floatingWidth;
-(id)subPlacements;
-(unsigned long long)indexForPurpose:(unsigned long long)arg1 ;
-(id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(Class)applicatorClassForKeyboard:(BOOL)arg1 ;
-(id)applicatorInfoForOwner:(id)arg1 ;
-(void)checkSizeForOwner:(id)arg1 ;
-(id)expiringPlacement;
-(CGRect)adjustBoundsForNotificationsWithOwner:(id)arg1 ;
-(id)currentResponderView;
-(void)setFloatingWidth:(double)arg1 ;
-(UIResponder *)responderToFollow;
-(void)setResponderToFollow:(UIResponder *)arg1 ;
@end

