/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, NSString;

@interface TVGradientView : UIView

@property (copy) NSArray * colors; 
@property (copy) NSArray * locations; 
@property (assign) CGPoint startPoint; 
@property (assign) CGPoint endPoint; 
@property (copy) NSString * type; 
+(Class)layerClass;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSArray *)colors;
-(NSArray *)locations;
-(CGPoint)startPoint;
-(CGPoint)endPoint;
-(void)setColors:(NSArray *)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(id)_gradientLayer;
@end
