/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVScanningDelegate <NSObject>
@optional
-(long long)playerViewController:(id)arg1 scanFromElapsedTime:(SCD_Struct_VU13)arg2 rate:(double)arg3 imageBlock:(/*^block*/id)arg4;
-(void)stopScanningPlayerViewController:(id)arg1;
-(BOOL)playerViewController:(id)arg1 shouldHandleScanningForPlayerItem:(id)arg2;

@end

