/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class OKWidgetView;


@protocol OKDynamicItemProxiedObject <NSObject>
@property (nonatomic,readonly) OKWidgetView * parentWidgetView; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform dynamicsTransform; 
@required
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1;
-(OKWidgetView *)parentWidgetView;
-(CGAffineTransform)dynamicsTransform;
-(void)setDynamicsTransform:(CGAffineTransform)arg1;

@end

