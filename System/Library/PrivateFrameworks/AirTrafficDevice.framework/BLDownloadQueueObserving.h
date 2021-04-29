/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BLDownloadQueueObserving <NSObject>
@optional
-(void)downloadQueue:(id)arg1 downloadStatesDidChange:(id)arg2;
-(void)downloadQueue:(id)arg1 downloadStates:(id)arg2 didCompleteWithError:(id)arg3;
-(void)downloadQueue:(id)arg1 purchaseAttemptForRequest:(id)arg2;
-(void)downloadQueue:(id)arg1 purchaseAttemptForID:(id)arg2 buyParams:(id)arg3 isAudioBook:(BOOL)arg4;
-(void)downloadQueueDownloadsDidChange:(id)arg1;
-(void)downloadQueue:(id)arg1 purchasedDidCompleteWithResponse:(id)arg2;
-(void)downloadQueue:(id)arg1 purchasedDidFailWithResponse:(id)arg2;

@end

