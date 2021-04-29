/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIFocusRegionContainer.h>

@protocol UIFocusItemContainer;
@class NSArray, UIView, NSString;

@interface _UIFocusRegionContainerProxy : NSObject <_UIFocusRegionContainer> {

	BOOL _isFocusEnvironment;
	id<UIFocusItemContainer> _itemContainer;

}

@property (nonatomic,retain) id<UIFocusItemContainer> itemContainer;                                                          //@synthesize itemContainer=_itemContainer - In the implementation block
@property (assign,nonatomic) BOOL isFocusEnvironment;                                                                         //@synthesize isFocusEnvironment=_isFocusEnvironment - In the implementation block
@property (assign,nonatomic) BOOL areChildrenFocused; 
@property (getter=_isEligibleForFocusInteraction,nonatomic,readonly) BOOL eligibleForFocusInteraction; 
@property (getter=_isEligibleForFocusOcclusion,nonatomic,readonly) BOOL eligibleForFocusOcclusion; 
@property (getter=_preferredFocusMovementStyle,nonatomic,readonly) long long preferredFocusMovementStyle; 
@property (getter=_linearFocusMovementSequences,nonatomic,copy,readonly) NSArray * linearFocusMovementSequences; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (nonatomic,copy,readonly) NSString * focusGroupIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)setNeedsFocusUpdate;
-(NSArray *)preferredFocusEnvironments;
-(void)updateFocusIfNeeded;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(id<UIFocusItemContainer>)focusItemContainer;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2 ;
-(id)_preferredFocusRegionCoordinateSpace;
-(id)_focusEnvironment;
-(id)initWithItemContainer:(id)arg1 ;
-(id<UIFocusItemContainer>)itemContainer;
-(void)setItemContainer:(id<UIFocusItemContainer>)arg1 ;
-(BOOL)isFocusEnvironment;
-(void)setIsFocusEnvironment:(BOOL)arg1 ;
@end

