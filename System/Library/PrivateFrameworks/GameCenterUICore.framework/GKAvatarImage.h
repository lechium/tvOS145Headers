/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, UIImage;

@interface GKAvatarImage : NSObject {

	NSData* _imageData;
	UIImage* _image;

}

@property (nonatomic,retain) NSData * imageData;              //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) UIImage * image;                 //@synthesize image=_image - In the implementation block
-(NSData *)imageData;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(id)initWithData:(id)arg1 useUIImage:(BOOL)arg2 ;
-(void)prepareForUsingUIImage:(BOOL)arg1 ;
@end

