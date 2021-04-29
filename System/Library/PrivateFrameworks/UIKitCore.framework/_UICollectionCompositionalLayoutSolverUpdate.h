/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UICollectionViewUpdateTranslating;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray, _UIDataSourceSnapshotter;

@interface _UICollectionCompositionalLayoutSolverUpdate : NSObject {

	NSArray* _updateItems;
	id<_UICollectionViewUpdateTranslating> _updateTranslator;
	_UIDataSourceSnapshotter* _finalDataSourceSnapshot;
	CGRect _visibleBounds;

}

@property (nonatomic,readonly) CGRect visibleBounds;                                                 //@synthesize visibleBounds=_visibleBounds - In the implementation block
@property (nonatomic,readonly) NSArray * updateItems;                                                //@synthesize updateItems=_updateItems - In the implementation block
@property (nonatomic,readonly) id<_UICollectionViewUpdateTranslating> updateTranslator;              //@synthesize updateTranslator=_updateTranslator - In the implementation block
@property (nonatomic,readonly) _UIDataSourceSnapshotter * finalDataSourceSnapshot;                   //@synthesize finalDataSourceSnapshot=_finalDataSourceSnapshot - In the implementation block
+(id)solverUpdateForVisibleBounds:(CGRect)arg1 updateItems:(id)arg2 updateTranslator:(id)arg3 finalDataSourceSnapshot:(id)arg4 ;
-(NSArray *)updateItems;
-(CGRect)visibleBounds;
-(_UIDataSourceSnapshotter *)finalDataSourceSnapshot;
-(id<_UICollectionViewUpdateTranslating>)updateTranslator;
-(id)initWithVisibleBounds:(CGRect)arg1 updateItems:(id)arg2 updateTranslator:(id)arg3 finalDataSourceSnapshot:(id)arg4 ;
@end

