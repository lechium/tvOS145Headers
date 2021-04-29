/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXGDisplayAssetPixelBufferSource <NSObject>
@property (nonatomic,readonly) CVBufferRef currentPixelBuffer; 
@property (nonatomic,readonly) CGAffineTransform preferredTransform; 
@property (nonatomic,copy) id pixelBufferDidChangeHandler; 
@required
-(CGAffineTransform)preferredTransform;
-(CVBufferRef)currentPixelBuffer;
-(void)setPixelBufferDidChangeHandler:(/*^block*/id)arg1;
-(id)pixelBufferDidChangeHandler;

@end
