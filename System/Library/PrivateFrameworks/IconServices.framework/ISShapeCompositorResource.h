/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISScalableCompositorResource.h>

@class ISColor, NSString;

@interface ISShapeCompositorResource : NSObject <ISScalableCompositorResource> {

	ISColor* _fillColor;
	ISColor* _lineColor;
	double _lineWidth;

}

@property (retain) ISColor * fillColor;                             //@synthesize fillColor=_fillColor - In the implementation block
@property (retain) ISColor * lineColor;                             //@synthesize lineColor=_lineColor - In the implementation block
@property (assign) double lineWidth;                                //@synthesize lineWidth=_lineWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)continuousRoundedRectShape;
+(id)circleShape;
+(double)continuousCornerRadiusForSize:(CGSize)arg1 ;
-(id)_init;
-(ISColor *)fillColor;
-(void)setFillColor:(ISColor *)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(ISColor *)lineColor;
-(void)setLineColor:(ISColor *)arg1 ;
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 ;
@end

