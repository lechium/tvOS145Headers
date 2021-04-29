/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/MCAction.h>

@class NSMutableDictionary, NSString, NSDictionary;

@interface MCAnimationTrigger : MCAction {

	NSMutableDictionary* _animationAttributes;
	NSString* _animationKey;

}

@property (copy) NSString * animationKey;                                   //@synthesize animationKey=_animationKey - In the implementation block
@property (nonatomic,copy) NSDictionary * animationAttributes;              //@synthesize animationAttributes=_animationAttributes - In the implementation block
+(id)animationTriggerForTargetPlugObjectID:(id)arg1 withAnimationKey:(id)arg2 ;
-(id)description;
-(NSString *)animationKey;
-(void)setAnimationKey:(NSString *)arg1 ;
-(void)setAnimationAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)animationAttributes;
-(void)demolish;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
@end

