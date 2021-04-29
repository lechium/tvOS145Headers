/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/MCAsset.h>

@class NSMutableSet, NSSet;

@interface MCAssetVideo : MCAsset {

	NSMutableSet* mSlides;

}

@property (readonly) NSSet * slides; 
-(id)init;
-(BOOL)isInUse;
-(NSSet *)slides;
-(void)demolish;
-(void)learnSlide:(id)arg1 ;
-(void)forgetSlide:(id)arg1 ;
@end
