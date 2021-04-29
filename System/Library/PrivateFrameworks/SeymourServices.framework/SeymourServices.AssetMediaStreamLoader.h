/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourServices.framework/SeymourServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SeymourServices/SeymourServices-Structs.h>
#import <libobjc.A.dylib/AVAssetDownloadDelegate.h>

@interface SeymourServices.AssetMediaStreamLoader : NSObject <AVAssetDownloadDelegate> {

	 assetFileStore;
	 eventHub;
	 persistenceStore;
	 $__lazy_storage_$_session;
	 lock;
	 queue;
	 tasks;

}
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didLoadTimeRange:(SCD_Struct_Se1)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(SCD_Struct_Se1)arg5 forMediaSelection:(id)arg6 ;
-(id)init;
@end

