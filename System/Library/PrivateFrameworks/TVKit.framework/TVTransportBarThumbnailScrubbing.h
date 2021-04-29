/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class TVPVideoView;


@protocol TVTransportBarThumbnailScrubbing <NSObject>
@property (nonatomic,readonly) long long scrubPreviewMode; 
@property (nonatomic,readonly) TVPVideoView * scrubVideoView; 
@required
-(TVPVideoView *)scrubVideoView;
-(void)setScrubPreviewMode:(long long)arg1 animated:(BOOL)arg2;
-(void)setScrubImage:(id)arg1;
-(void)setScrubVideoPlayer:(id)arg1;
-(long long)scrubPreviewMode;

@end

