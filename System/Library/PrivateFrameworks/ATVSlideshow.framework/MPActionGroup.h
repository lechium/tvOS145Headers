/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MPAction.h>
#import <libobjc.A.dylib/MPActionSupport.h>

@class NSMutableArray;

@interface MPActionGroup : MPAction <MPActionSupport> {

	NSMutableArray* _actions;

}
+(id)actionGroup;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeAllActions;
-(id)actions;
-(void)setAction:(id)arg1 ;
-(void)addActions:(id)arg1 ;
-(void)addAction:(id)arg1 ;
-(void)configureTarget;
-(void)copyActions:(id)arg1 ;
-(void)insertActions:(id)arg1 atIndex:(long long)arg2 ;
-(void)configureAction:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeActionsAtIndices:(id)arg1 ;
-(void)insertAction:(id)arg1 atIndex:(long long)arg2 ;
-(unsigned long long)numberOfActions;
@end

