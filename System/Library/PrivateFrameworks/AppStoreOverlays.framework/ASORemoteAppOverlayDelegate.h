/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreOverlays.framework/AppStoreOverlays
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ASORemoteAppOverlayDelegate <NSObject>
@required
-(void)remoteStoreOverlayDidFailToLoadWithError:(id)arg1;
-(void)remoteStoreOverlayWillStartPresenting:(id)arg1 executeBlock:(/*^block*/id)arg2;
-(void)remoteStoreOverlayDidFinishPresentation:(id)arg1;
-(void)remoteStoreOverlayWillStartDismissing:(id)arg1 executeBlock:(/*^block*/id)arg2;
-(void)remoteStoreOverlayDidFinishDismissal:(id)arg1;

@end

