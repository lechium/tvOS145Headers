/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AirTrafficDevice/ATStoreDownloadAssetsOperation.h>

@class ICURLSession, ICAVAssetDownloadURLSession, ICURLRequest, AVURLAsset;

@interface ATStorePodcastDownloadAssetsOperation : ATStoreDownloadAssetsOperation {

	ICURLSession* _session;
	ICAVAssetDownloadURLSession* _hlsSession;
	ICURLRequest* _request;
	AVURLAsset* _hlsAsset;

}
-(void)cancel;
-(void)execute;
-(id)_urlSession;
-(void)finishWithError:(id)arg1 operationResult:(id)arg2 ;
-(id)_icavUrlSession;
-(void)_moveAssetToPurchasesDirectoryFromTmpPath:(id)arg1 downloadError:(id)arg2 isHLSAsset:(BOOL)arg3 ;
-(void)_getContentKeyForAssetWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_downloadConfigurationWithSessionIdentifier:(id)arg1 isHLS:(BOOL)arg2 ;
@end
