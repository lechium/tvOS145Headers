/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXGAssetBadgeDecorationSource <PXGLayoutContentSource>
@optional
-(id)loadStatusForAsset:(id)arg1 atSpriteIndex:(unsigned)arg2 inLayout:(id)arg3;

@required
-(BOOL)wantsAssetBadgeDecorationsInLayout:(id)arg1;
-(BOOL)wantsInteractiveFavoriteBadgesInLayout:(id)arg1;
-(PXAssetBadgeInfo*)assetBadgeInfoForAsset:(id)arg1 atSpriteIndex:(unsigned)arg2 inLayout:(id)arg3;

@end

