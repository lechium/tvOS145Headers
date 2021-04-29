/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXUIButtonConfiguration : NSObject {

	BOOL _allowAnimatedHighlighting;
	long long _cursorEffect;
	UIEdgeInsets _hitTestOutset;

}

@property (assign,nonatomic) UIEdgeInsets hitTestOutset;                  //@synthesize hitTestOutset=_hitTestOutset - In the implementation block
@property (assign,nonatomic) BOOL allowAnimatedHighlighting;              //@synthesize allowAnimatedHighlighting=_allowAnimatedHighlighting - In the implementation block
@property (assign,nonatomic) long long cursorEffect;                      //@synthesize cursorEffect=_cursorEffect - In the implementation block
+(id)configurationWithCursorEffect:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(UIEdgeInsets)hitTestOutset;
-(void)setHitTestOutset:(UIEdgeInsets)arg1 ;
-(BOOL)allowAnimatedHighlighting;
-(void)setAllowAnimatedHighlighting:(BOOL)arg1 ;
-(long long)cursorEffect;
-(void)setCursorEffect:(long long)arg1 ;
@end

