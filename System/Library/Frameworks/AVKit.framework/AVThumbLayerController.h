/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVThumbLayerController <NSObject>
@property (assign,nonatomic) double desiredTimeInterval; 
@property (readonly) double toleranceBefore; 
@property (readonly) double toleranceAfter; 
@property (readonly) double actualTimeInterval; 
@property (nonatomic,copy) id actualTimeUpdateBlock; 
@required
-(void)prefetchForTime:(double)arg1;
-(void)prefetchForTimes:(id)arg1;
-(BOOL)isExact;
-(double)desiredTimeInterval;
-(void)setDesiredTimeInterval:(double)arg1;
-(double)toleranceBefore;
-(double)toleranceAfter;
-(double)actualTimeInterval;
-(id)actualTimeUpdateBlock;
-(void)setActualTimeUpdateBlock:(/*^block*/id)arg1;

@end

