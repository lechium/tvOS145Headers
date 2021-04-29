/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface MPAnimationManager : NSObject {

	NSMutableDictionary* mAnimations;
	NSMutableDictionary* mAnimationSets;

}
+(id)sharedManager;
+(void)releaseSharedManager;
+(void)loadAnimationManagerWithPaths:(id)arg1 ;
-(void)dealloc;
-(id)initWithPaths:(id)arg1 ;
-(id)animationDescriptionForAnimationSetID:(id)arg1 ;
-(id)animationDescriptionForAnimationID:(id)arg1 ;
@end
