/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>

@class MPStoreDownload, NSString;

@interface _MPStoreDownloadBlockObserver : NSObject <MPStoreDownloadManagerObserver> {

	/*^block*/id _didFinishDownloadHandler;
	/*^block*/id _didFinishPurchaseHandler;
	MPStoreDownload* _download;

}

@property (nonatomic,copy) id didFinishDownloadHandler;                 //@synthesize didFinishDownloadHandler=_didFinishDownloadHandler - In the implementation block
@property (nonatomic,copy) id didFinishPurchaseHandler;                 //@synthesize didFinishPurchaseHandler=_didFinishPurchaseHandler - In the implementation block
@property (nonatomic,readonly) MPStoreDownload * download;              //@synthesize download=_download - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPStoreDownload *)download;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2 ;
-(id)initWithDownload:(id)arg1 ;
-(id)didFinishDownloadHandler;
-(void)setDidFinishDownloadHandler:(id)arg1 ;
-(id)didFinishPurchaseHandler;
-(void)setDidFinishPurchaseHandler:(id)arg1 ;
@end

