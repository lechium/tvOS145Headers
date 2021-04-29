/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSString, NSSet;

@interface IconPictureInput : NSObject <MLFeatureProvider> {

	NSString* _UIType;
	double _x;
	double _y;
	double _w;
	double _h;

}

@property (nonatomic,retain) NSString * UIType;                   //@synthesize UIType=_UIType - In the implementation block
@property (assign,x,nonatomic) double x;                          //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) double y;                          //@synthesize y=_y - In the implementation block
@property (assign,w,nonatomic) double w;                          //@synthesize w=_w - In the implementation block
@property (assign,h,nonatomic) double h;                          //@synthesize h=_h - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(double)x;
-(void)setX:(double)arg1 ;
-(double)y;
-(void)setY:(double)arg1 ;
-(double)w;
-(void)setW:(double)arg1 ;
-(double)h;
-(void)setH:(double)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithUIType:(id)arg1 x:(double)arg2 y:(double)arg3 w:(double)arg4 h:(double)arg5 ;
-(NSString *)UIType;
-(void)setUIType:(NSString *)arg1 ;
@end

