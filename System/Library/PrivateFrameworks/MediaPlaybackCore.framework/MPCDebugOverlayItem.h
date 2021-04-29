/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:08 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MPCDebugOverlayItemDisplay;

@interface MPCDebugOverlayItem : NSObject {

	MPCDebugOverlayItemDisplay* _shortDisplay;
	MPCDebugOverlayItemDisplay* _fullDisplay;

}

@property (nonatomic,readonly) MPCDebugOverlayItemDisplay * shortDisplay;              //@synthesize shortDisplay=_shortDisplay - In the implementation block
@property (nonatomic,readonly) MPCDebugOverlayItemDisplay * fullDisplay;               //@synthesize fullDisplay=_fullDisplay - In the implementation block
+(id)itemWithShortDisplay:(id)arg1 fullDisplay:(id)arg2 ;
+(id)itemWithShortDisplay:(id)arg1 ;
+(id)itemWithFullDisplay:(id)arg1 ;
-(id)description;
-(id)_init;
-(MPCDebugOverlayItemDisplay *)shortDisplay;
-(MPCDebugOverlayItemDisplay *)fullDisplay;
@end

