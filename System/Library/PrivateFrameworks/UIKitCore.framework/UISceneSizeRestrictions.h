/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UIWindowScene;

@interface UISceneSizeRestrictions : NSObject {

	BOOL _hasAutomaticMinimumSize;
	BOOL _hasAutomaticMaximumSize;
	UIWindowScene* _scene;
	CGSize _minimumSize;
	CGSize _maximumSize;

}

@property (assign,nonatomic) CGSize minimumSize;              //@synthesize minimumSize=_minimumSize - In the implementation block
@property (assign,nonatomic) CGSize maximumSize;              //@synthesize maximumSize=_maximumSize - In the implementation block
-(void)setMaximumSize:(CGSize)arg1 ;
-(CGSize)maximumSize;
-(CGSize)minimumSize;
-(void)setMinimumSize:(CGSize)arg1 ;
-(id)_initWithScene:(id)arg1 ;
@end

