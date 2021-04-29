/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAAnimation.h>

@class NSDictionary, NSString;

@interface CATransition : CAAnimation

@property (copy) NSDictionary * options; 
@property (assign) unsigned transitionFlags; 
@property (copy) NSString * type; 
@property (copy) NSString * subtype; 
@property (assign) float startProgress; 
@property (assign) float endProgress; 
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSString *)subtype;
-(id)filter;
-(void)setFilter:(id)arg1 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(float)startProgress;
-(float)endProgress;
-(void)setSubtype:(NSString *)arg1 ;
-(void)setStartProgress:(float)arg1 ;
-(void)setEndProgress:(float)arg1 ;
-(unsigned)transitionFlags;
-(void)setTransitionFlags:(unsigned)arg1 ;
@end

