/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUICore/VideosUICore-Structs.h>
#import <UIKit/UINamedLayerStack.h>

@protocol UINamedLayerStack;
@class NSString, NSArray, UIImage;

@interface VUINamedLayerStack : NSObject <UINamedLayerStack> {

	id<UINamedLayerStack> _layerStack;
	UIImage* _cornerRadiusFlatImage;
	UIImage* _originalImage;
	NSArray* _replacementLayers;

}

@property (nonatomic,retain) id<UINamedLayerStack> layerStack;                  //@synthesize layerStack=_layerStack - In the implementation block
@property (nonatomic,retain) UIImage * cornerRadiusFlatImage;                   //@synthesize cornerRadiusFlatImage=_cornerRadiusFlatImage - In the implementation block
@property (nonatomic,retain) UIImage * originalImage;                           //@synthesize originalImage=_originalImage - In the implementation block
@property (nonatomic,copy) NSArray * replacementLayers;                         //@synthesize replacementLayers=_replacementLayers - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * layers; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) CGImageRef flattenedImage; 
@property (nonatomic,readonly) id radiosityImage; 
@property (nonatomic,readonly) CGSize radiosityImageScale; 
@property (nonatomic,readonly) BOOL flatImageContainsCornerRadius; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)namedLayerStackWithImage:(id)arg1 ;
+(id)decodedNamedLayerStackWithImage:(id)arg1 size:(CGSize)arg2 cornerRadius:(double)arg3 ;
-(NSString *)name;
-(id)init;
-(CGSize)size;
-(id)_init;
-(double)scale;
-(NSArray *)layers;
-(CGImageRef)flattenedImage;
-(id)radiosityImage;
-(UIImage *)originalImage;
-(void)setOriginalImage:(UIImage *)arg1 ;
-(CGSize)radiosityImageScale;
-(BOOL)flatImageContainsCornerRadius;
-(void)setLayerStack:(id<UINamedLayerStack>)arg1 ;
-(void)setCornerRadiusFlatImage:(UIImage *)arg1 ;
-(void)setReplacementLayers:(NSArray *)arg1 ;
-(id<UINamedLayerStack>)layerStack;
-(NSArray *)replacementLayers;
-(UIImage *)cornerRadiusFlatImage;
@end

