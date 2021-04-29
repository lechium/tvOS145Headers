/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSSet;


@protocol MCAnimationPathSupport
@property (readonly) NSSet * animationPaths; 
@property (readonly) unsigned long long countOfAnimationPaths; 
@required
-(void)addAnimationPath:(id)arg1;
-(void)removeAllAnimationPaths;
-(NSSet *)animationPaths;
-(void)removeAnimationPathForKey:(id)arg1;
-(id)animationPathForKey:(id)arg1;
-(unsigned long long)countOfAnimationPaths;
-(void)initAnimationPathsWithImprints:(id)arg1;
-(void)demolishAnimationPaths;
-(id)imprintsForAnimationPaths;

@end
