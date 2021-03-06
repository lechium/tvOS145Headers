/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, NSString;

@interface UIKBSplitImageView : UIView {

	BOOL _canStretchAsFullWidth;
	UIImageView* _fullView;
	UIImageView* _splitLeft;
	UIImageView* _splitRight;
	NSString* _currentFilterType;

}

@property (nonatomic,retain) NSString * filterType;              //@synthesize currentFilterType=_currentFilterType - In the implementation block
-(void)dealloc;
-(NSString *)filterType;
-(void)setFilterType:(NSString *)arg1 ;
-(void)setContentsMultiplyColor:(id)arg1 ;
-(void)clearImages;
-(void)prepareForDisplay:(BOOL)arg1 ;
-(BOOL)_shouldInheritScreenScaleAsContentScaleFactor;
-(id)initWithFrame:(CGRect)arg1 canStretchAsFullWidth:(BOOL)arg2 ;
-(void)insertSubviewAtBottom:(id)arg1 ;
-(void)setImage:(id)arg1 cachedWidth:(double)arg2 keyplane:(id)arg3 ;
-(void)setImage:(id)arg1 splitLeft:(id)arg2 splitRight:(id)arg3 keyplane:(id)arg4 ;
@end

