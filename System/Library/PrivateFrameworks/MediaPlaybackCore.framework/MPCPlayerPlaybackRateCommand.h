/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol MPCPlayerPlaybackRateCommand <MPCPlayerCommand>
@property (nonatomic,copy,readonly) NSArray * supportedPlaybackRates; 
@property (nonatomic,readonly) float preferredPlaybackRate; 
@required
-(id)setPlaybackRate:(float)arg1;
-(NSArray *)supportedPlaybackRates;
-(float)preferredPlaybackRate;

@end

