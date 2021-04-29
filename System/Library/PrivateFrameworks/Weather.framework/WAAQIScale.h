/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Weather/Weather-Structs.h>
@class WAAQIGradient, NSMutableArray;

@interface WAAQIScale : NSObject {

	WAAQIGradient* _gradient;
	NSMutableArray* _categories;
	NSRange _range;

}

@property (nonatomic,copy) NSMutableArray * categories;               //@synthesize categories=_categories - In the implementation block
@property (nonatomic,readonly) NSRange range;                         //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) WAAQIGradient * gradient;              //@synthesize gradient=_gradient - In the implementation block
+(id)scaleFromFoundationScale:(id)arg1 ;
-(NSRange)range;
-(id)initWithRange:(NSRange)arg1 ;
-(void)addCategory:(id)arg1 ;
-(NSMutableArray *)categories;
-(void)setCategories:(NSMutableArray *)arg1 ;
-(WAAQIGradient *)gradient;
@end

