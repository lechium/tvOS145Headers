/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol PXMutableMemoryViewModel <NSObject>
@property (nonatomic,retain) NSString * localizedDateText; 
@property (nonatomic,retain) NSString * localizedTitle; 
@property (nonatomic,retain) id<PXDisplayAsset> keyAsset; 
@property (assign,nonatomic) BOOL isHighlighted; 
@property (assign,nonatomic) long long specSet; 
@property (assign,nonatomic) long long variant; 
@property (assign,nonatomic) UIEdgeInsets layoutMargins; 
@required
-(long long)variant;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(id)arg1;
-(void)setVariant:(long long)arg1;
-(id<PXDisplayAsset>)keyAsset;
-(void)setKeyAsset:(id)arg1;
-(BOOL)isHighlighted;
-(UIEdgeInsets)layoutMargins;
-(void)setLayoutMargins:(UIEdgeInsets)arg1;
-(NSString *)localizedDateText;
-(void)setLocalizedDateText:(id)arg1;
-(void)setIsHighlighted:(BOOL)arg1;
-(long long)specSet;
-(void)setSpecSet:(long long)arg1;

@end
