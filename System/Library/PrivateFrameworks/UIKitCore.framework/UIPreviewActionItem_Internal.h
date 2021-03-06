/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, UIColor, UIImage;


@protocol UIPreviewActionItem_Internal <NSObject>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) long long style; 
@property (setter=_setColor:,getter=_color,nonatomic,retain) UIColor * color; 
@property (nonatomic,retain) UIImage * image; 
@required
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(long long)style;
-(void)setStyle:(long long)arg1;
-(UIImage *)image;
-(id)_color;
-(void)setImage:(id)arg1;
-(void)_setColor:(id)arg1;
-(id)_effectiveColor;
-(id)_effectiveImage;

@end

