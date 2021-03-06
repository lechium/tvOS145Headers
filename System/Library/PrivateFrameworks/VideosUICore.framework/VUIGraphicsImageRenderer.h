/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideosUICore/VideosUICore-Structs.h>
@interface VUIGraphicsImageRenderer : NSObject
+(id)preferredFormat;
+(id)formatWithUIImage:(id)arg1 ;
+(id)imageWithSize:(CGSize)arg1 format:(id)arg2 actions:(/*^block*/id)arg3 ;
+(id)blurRenderer:(id)arg1 renderImage:(id)arg2 targetSize:(CGSize)arg3 scaleSize:(CGSize)arg4 blurStyle:(long long)arg5 blurRadius:(double)arg6 ;
+(id)formatWithCGImage:(CGImageRef)arg1 ;
+(id)imageWithSize:(CGSize)arg1 format:(id)arg2 cgContextActions:(/*^block*/id)arg3 ;
+(id)decodedImage:(id)arg1 opaque:(BOOL)arg2 ;
+(id)blurRenderer:(id)arg1 renderImage:(id)arg2 blurStyle:(long long)arg3 targetSize:(CGSize)arg4 blurRadius:(double)arg5 ;
+(id)sharedBlurRenderer;
@end

