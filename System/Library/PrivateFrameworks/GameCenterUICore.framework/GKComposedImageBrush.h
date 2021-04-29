/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUICore/GameCenterUICore-Structs.h>
#import <GameCenterUICore/GKImageBrush.h>

@class UIImage;

@interface GKComposedImageBrush : GKImageBrush {

	UIImage* _maskImage;
	UIImage* _backgroundImage;
	UIImage* _overlayImage;
	UIEdgeInsets _maskInsets;

}

@property (nonatomic,retain) UIImage * maskImage;                    //@synthesize maskImage=_maskImage - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;              //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * overlayImage;                 //@synthesize overlayImage=_overlayImage - In the implementation block
@property (assign,nonatomic) UIEdgeInsets maskInsets;                //@synthesize maskInsets=_maskInsets - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)maskImage;
-(void)setMaskImage:(UIImage *)arg1 ;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(UIImage *)overlayImage;
-(void)setOverlayImage:(UIImage *)arg1 ;
-(double)scaleForInput:(id)arg1 ;
-(CGSize)sizeForInput:(id)arg1 ;
-(void)drawInRect:(CGRect)arg1 withContext:(CGContextRef)arg2 input:(id)arg3 ;
-(UIEdgeInsets)maskInsets;
-(void)setMaskInsets:(UIEdgeInsets)arg1 ;
@end

