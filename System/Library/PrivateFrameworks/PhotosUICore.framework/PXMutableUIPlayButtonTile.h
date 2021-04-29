/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class PXImageRequester;


@protocol PXMutableUIPlayButtonTile <NSObject>
@property (assign,nonatomic) CGSize playButtonSize; 
@property (assign,nonatomic) long long playButtonStyle; 
@property (nonatomic,retain) PXImageRequester * imageRequester; 
@property (assign,nonatomic) CGPoint imageViewportLocation; 
@property (assign,nonatomic) BOOL allowsBackdropStatisticsSuppression; 
@required
-(PXImageRequester *)imageRequester;
-(void)setImageRequester:(id)arg1;
-(CGSize)playButtonSize;
-(void)setPlayButtonSize:(CGSize)arg1;
-(long long)playButtonStyle;
-(void)setPlayButtonStyle:(long long)arg1;
-(CGPoint)imageViewportLocation;
-(void)setImageViewportLocation:(CGPoint)arg1;
-(BOOL)allowsBackdropStatisticsSuppression;
-(void)setAllowsBackdropStatisticsSuppression:(BOOL)arg1;

@end

