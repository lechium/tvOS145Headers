/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UICoordinateSpace;
@class NSMapTable, _UIFocusGroup, NSArray;

@interface _UIFocusGroupMap : NSObject {

	NSMapTable* _environmentToGroupMap;
	NSMapTable* _identifierToGroupMap;
	NSMapTable* _identifierToPrimaryItemMap;
	_UIFocusGroup* _nullGroup;
	NSMapTable* _standInItemsMap;
	NSArray* _focusGroups;
	id<UICoordinateSpace> _coordinateSpace;

}

@property (nonatomic,readonly) id<UICoordinateSpace> coordinateSpace;              //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (nonatomic,readonly) NSArray * focusGroups;                              //@synthesize focusGroups=_focusGroups - In the implementation block
@property (nonatomic,readonly) NSArray * focusItems; 
-(id)description;
-(id<UICoordinateSpace>)coordinateSpace;
-(id)visualDescription;
-(NSArray *)focusItems;
-(NSArray *)focusGroups;
-(id)initWithItems:(id)arg1 coordinateSpace:(id)arg2 ;
-(id)focusGroupForItem:(id)arg1 ;
-(id)initWithItems:(id)arg1 standInItemsMap:(id)arg2 coordinateSpace:(id)arg3 ;
-(void)_indexItems:(id)arg1 ;
-(id)_indexEnvironment:(id)arg1 ;
@end

