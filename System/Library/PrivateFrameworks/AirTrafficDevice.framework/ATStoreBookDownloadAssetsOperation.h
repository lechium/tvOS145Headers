/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AirTrafficDevice/ATStoreDownloadAssetsOperation.h>
#import <libobjc.A.dylib/BLDownloadQueueObserving.h>

@class NSString;

@interface ATStoreBookDownloadAssetsOperation : ATStoreDownloadAssetsOperation <BLDownloadQueueObserving> {

	NSString* _bookDownloadID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)cancel;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
-(void)downloadQueue:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)downloadQueue:(id)arg1 downloadStates:(id)arg2 didCompleteWithError:(id)arg3 ;
@end
