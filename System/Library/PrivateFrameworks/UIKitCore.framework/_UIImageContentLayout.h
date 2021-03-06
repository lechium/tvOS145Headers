/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UIColor;

@interface _UIImageContentLayout : NSObject {

	SCD_Struct_UI68 _flags;
	id _contents;
	UIColor* _contentsMultiplyColor;
	double _contentsScaleFactor;
	double _baselineOffsetFromTop;
	double _baselineOffsetFromBottom;
	UIEdgeInsets _contentInsets;
	CGAffineTransform _contentsTransform;

}

@property (nonatomic,readonly) CGAffineTransform contentsTransform;              //@synthesize contentsTransform=_contentsTransform - In the implementation block
@property (nonatomic,readonly) double contentsScaleFactor;                       //@synthesize contentsScaleFactor=_contentsScaleFactor - In the implementation block
@property (nonatomic,readonly) id contents; 
@property (nonatomic,readonly) UIEdgeInsets contentInsets;                       //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,readonly) UIColor * contentsMultiplyColor; 
@property (nonatomic,readonly) double baselineOffsetFromTop;                     //@synthesize baselineOffsetFromTop=_baselineOffsetFromTop - In the implementation block
@property (nonatomic,readonly) double baselineOffsetFromBottom;                  //@synthesize baselineOffsetFromBottom=_baselineOffsetFromBottom - In the implementation block
+(id)layoutForSource:(id)arg1 inTarget:(id)arg2 withSize:(CGSize)arg3 ;
-(id)description;
-(id)contents;
-(UIColor *)contentsMultiplyColor;
-(CGAffineTransform)contentsTransform;
-(UIEdgeInsets)contentInsets;
-(double)baselineOffsetFromBottom;
-(BOOL)hasContents;
-(double)baselineOffsetFromTop;
-(BOOL)hasCGImageContents;
-(CGImageRef)CGImageContents;
-(id)initWithSource:(id)arg1 target:(id)arg2 withSize:(CGSize)arg3 ;
-(void)_prepareContentOfSize:(CGSize)arg1 source:(id)arg2 target:(id)arg3 ;
-(void)_materializeContentsIfNeeded;
-(BOOL)rendersContentsAtNaturalSize;
-(double)contentsScaleFactor;
@end

