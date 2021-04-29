/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVThumbLayerController.h>

@class AVPlayer, AVPlayerItem, NSString;

@interface AVPlayerThumbLayerController : NSObject <AVThumbLayerController> {

	double _lastSeekTime;
	double _actualTimeInterval;
	BOOL _playerEnteredIFrameMode;
	BOOL _seeking;
	BOOL _seekPending;
	double _desiredTimeInterval;
	double _toleranceBefore;
	double _toleranceAfter;
	/*^block*/id _actualTimeUpdateBlock;
	AVPlayer* _player;
	AVPlayerItem* _playerItem;

}

@property (readonly) AVPlayerItem * playerItem;                       //@synthesize playerItem=_playerItem - In the implementation block
@property (getter=isSeeking) BOOL seeking;                            //@synthesize seeking=_seeking - In the implementation block
@property (getter=isSeekPending) BOOL seekPending;                    //@synthesize seekPending=_seekPending - In the implementation block
@property (assign,nonatomic) double desiredTimeInterval;              //@synthesize desiredTimeInterval=_desiredTimeInterval - In the implementation block
@property (readonly) double toleranceBefore;                          //@synthesize toleranceBefore=_toleranceBefore - In the implementation block
@property (readonly) double toleranceAfter;                           //@synthesize toleranceAfter=_toleranceAfter - In the implementation block
@property (readonly) double actualTimeInterval; 
@property (nonatomic,copy) id actualTimeUpdateBlock;                  //@synthesize actualTimeUpdateBlock=_actualTimeUpdateBlock - In the implementation block
@property (readonly) AVPlayer * player;                               //@synthesize player=_player - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(AVPlayer *)player;
-(AVPlayerItem *)playerItem;
-(void)prefetchForTime:(double)arg1 ;
-(void)prefetchForTimes:(id)arg1 ;
-(BOOL)isExact;
-(double)desiredTimeInterval;
-(void)setDesiredTimeInterval:(double)arg1 ;
-(double)toleranceBefore;
-(double)toleranceAfter;
-(double)actualTimeInterval;
-(id)actualTimeUpdateBlock;
-(void)setActualTimeUpdateBlock:(id)arg1 ;
-(void)setExactTimeInterval:(double)arg1 ;
-(id)initWithPlayerItem:(id)arg1 maximumImageSize:(CGSize)arg2 ;
-(void)playerItemVariantChanged:(id)arg1 ;
-(SCD_Struct_AV1)cmtimeDesired;
-(SCD_Struct_AV1)cmtimeToleranceBefore;
-(SCD_Struct_AV1)cmtimeToleranceAfter;
-(void)setActualTimeInterval:(double)arg1 ;
-(void)_seekToDesiredTime;
-(BOOL)isSeeking;
-(void)setSeeking:(BOOL)arg1 ;
-(BOOL)isSeekPending;
-(void)setSeekPending:(BOOL)arg1 ;
@end

