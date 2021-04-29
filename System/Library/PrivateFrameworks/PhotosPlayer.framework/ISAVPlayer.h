/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <AVFCore/AVPlayer.h>

@protocol OS_dispatch_queue;
@class ISRateCurveRequest, NSObject;

@interface ISAVPlayer : AVPlayer {

	ISRateCurveRequest* _currentRequest;
	NSObject*<OS_dispatch_queue> _initializedDispatchQueue;
	NSObject*<OS_dispatch_queue> _actualDispatchQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> actualDispatchQueue;              //@synthesize actualDispatchQueue=_actualDispatchQueue - In the implementation block
+(BOOL)isAppleInternal;
+(BOOL)isSpringBoard;
-(id)init;
-(void)dealloc;
-(id)initWithDispatchQueue:(id)arg1 ;
-(id)dispatchQueue;
-(void)setRate:(float)arg1 ;
-(NSObject*<OS_dispatch_queue>)actualDispatchQueue;
-(void)_setRate:(float)arg1 ;
-(void)playToTime:(SCD_Struct_IS0)arg1 withInitialRate:(float)arg2 overDuration:(double)arg3 progressHandler:(/*^block*/id)arg4 ;
-(void)_cancelRateCurveRequest;
@end
