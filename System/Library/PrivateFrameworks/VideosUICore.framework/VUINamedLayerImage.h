/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUICore/VideosUICore-Structs.h>
#import <UIKit/UINamedLayerImage.h>

@protocol UINamedLayerImage;
@class NSString, UIImage, NSObject;

@interface VUINamedLayerImage : NSObject <UINamedLayerImage> {

	int _blendMode;
	UIImage* _decodedImage;
	NSObject*<UINamedLayerImage> _namedLayerImage;

}

@property (nonatomic,retain) NSObject*<UINamedLayerImage> namedLayerImage;                   //@synthesize namedLayerImage=_namedLayerImage - In the implementation block
@property (assign,nonatomic) int blendMode;                                                  //@synthesize blendMode=_blendMode - In the implementation block
@property (nonatomic,retain) UIImage * decodedImage;                                         //@synthesize decodedImage=_decodedImage - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) double opacity; 
@property (assign,nonatomic) BOOL fixedFrame; 
@property (nonatomic,readonly) id<UINamedLayerContentProvider> contentProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)namedLayerImageFromNamedLayerImage:(id)arg1 ;
+(id)decodedNamedLayerImageFromNamedLayerImage:(id)arg1 ;
-(NSString *)name;
-(id)init;
-(id)_init;
-(CGRect)frame;
-(double)opacity;
-(int)blendMode;
-(BOOL)fixedFrame;
-(void)setBlendMode:(int)arg1 ;
-(id)imageObj;
-(void)setNamedLayerImage:(NSObject*<UINamedLayerImage>)arg1 ;
-(void)setDecodedImage:(UIImage *)arg1 ;
-(NSObject*<UINamedLayerImage>)namedLayerImage;
-(UIImage *)decodedImage;
@end

