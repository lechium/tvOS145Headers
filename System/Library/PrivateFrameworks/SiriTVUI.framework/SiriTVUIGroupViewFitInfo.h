/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SiriTVUI/SiriTVUI-Structs.h>
@class NSMapTable;

@interface SiriTVUIGroupViewFitInfo : NSObject {

	NSMapTable* _viewsToFitSizes;
	CGSize _totalFitSize;

}

@property (nonatomic,copy) NSMapTable * viewsToFitSizes;              //@synthesize viewsToFitSizes=_viewsToFitSizes - In the implementation block
@property (assign,nonatomic) CGSize totalFitSize;                     //@synthesize totalFitSize=_totalFitSize - In the implementation block
-(CGSize)totalFitSize;
-(NSMapTable *)viewsToFitSizes;
-(void)setViewsToFitSizes:(NSMapTable *)arg1 ;
-(void)setTotalFitSize:(CGSize)arg1 ;
@end

