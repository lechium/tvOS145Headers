/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIImageAsset, NSString;

@interface _UIImageAssetMapEnvelope : NSObject {

	UIImageAsset* _imageAsset;
	NSString* _assetName;

}

@property (assign,nonatomic,__weak) UIImageAsset * imageAsset;              //@synthesize imageAsset=_imageAsset - In the implementation block
@property (nonatomic,copy) NSString * assetName;                            //@synthesize assetName=_assetName - In the implementation block
+(id)wrapAsset:(id)arg1 ;
-(id)description;
-(UIImageAsset *)imageAsset;
-(NSString *)assetName;
-(void)setAssetName:(NSString *)arg1 ;
-(void)setImageAsset:(UIImageAsset *)arg1 ;
@end
