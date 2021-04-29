/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVPScrubImageLoaderDelegate <NSObject>
@required
-(void)scrubImageLoaderImagesDidBecomeAvailable:(id)arg1;
-(void)scrubImageLoaderImagesDidBecomeUnavailable:(id)arg1;
-(void)scrubImageLoader:(id)arg1 imageDidLoad:(id)arg2 requestedTime:(double)arg3 imageTime:(double)arg4;
-(BOOL)okToPreloadImages;

@end

