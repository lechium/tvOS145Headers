/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXMutableSectionedLayoutEngine <PXMutableLayoutEngine>
@property (nonatomic,retain) id<PXSectionedLayoutItem> seedItem; 
@property (assign,nonatomic) CGSize seedSize; 
@required
-(void)setDataSourceSnapshot:(id)arg1 withChangeDetails:(id)arg2;
-(id<PXSectionedLayoutItem>)seedItem;
-(void)setSeedItem:(id)arg1;
-(CGSize)seedSize;
-(void)setSeedSize:(CGSize)arg1;

@end

