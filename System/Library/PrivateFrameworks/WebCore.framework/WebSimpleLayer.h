/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface WebSimpleLayer : CALayer {

	BOOL _isRenderingInContext;

}

@property (nonatomic,readonly) BOOL isRenderingInContext;              //@synthesize isRenderingInContext=_isRenderingInContext - In the implementation block
-(void)display;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setNeedsDisplay;
-(id)actionForKey:(id)arg1 ;
-(void)renderInContext:(CGContextRef)arg1 ;
-(BOOL)isRenderingInContext;
@end
