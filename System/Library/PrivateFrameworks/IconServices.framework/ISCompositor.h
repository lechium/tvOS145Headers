/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IconServices/IconServices-Structs.h>
@class NSMutableArray;

@interface ISCompositor : NSObject {

	unsigned long long _renderingMode;
	NSMutableArray* _elements;

}

@property (retain) id<ISCompositorRecipe> recipe; 
@property (retain) NSMutableArray * elements;                     //@synthesize elements=_elements - In the implementation block
@property (readonly) BOOL canUseCoreImage; 
@property (assign) unsigned long long renderingMode;              //@synthesize renderingMode=_renderingMode - In the implementation block
+(id)iosmacAppIconRecipe;
+(id)macosIconRecipe;
+(id)iosAppIconRecipe;
+(id)watchAppIconRecipe;
+(id)messagesAppIconRecipeWithBorder:(BOOL)arg1 ;
+(id)macosDocumentRecipe;
+(id)iosmacDocumentRecipe;
+(id)iosAppBadgeDocumentRecipe;
+(id)iosGlyphBadgeDocumentRecipe;
-(id)init;
-(NSMutableArray *)elements;
-(void)reset;
-(void)addElement:(id)arg1 ;
-(void)setElements:(NSMutableArray *)arg1 ;
-(void)drawInContext:(id)arg1 ;
-(void)clearResources;
-(unsigned long long)renderingMode;
-(void)setRenderingMode:(unsigned long long)arg1 ;
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(id<ISCompositorRecipe>)recipe;
-(id)initWithRecipe:(id)arg1 ;
-(void)setRecipe:(id<ISCompositorRecipe>)arg1 ;
-(void)addResourcesFromDictionary:(id)arg1 ;
-(void)addElementWithRecipe:(id)arg1 resources:(id)arg2 ;
-(BOOL)canUseCoreImage;
-(void)setResource:(id)arg1 named:(id)arg2 ;
-(void)drawElement:(id)arg1 inContext:(id)arg2 ;
-(id)filterForLayer:(id)arg1 scale:(double)arg2 resourceProvider:(id)arg3 ;
-(void)drawLayer:(id)arg1 resourceProvider:(id)arg2 inContext:(id)arg3 ;
-(id)maskImageForLayer:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 resourceProvider:(id)arg4 ;
-(id)scaledImageFromContent:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
@end

