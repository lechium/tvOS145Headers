/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEODataURLSessionTask.h>

@class NSURL;

@interface GEODataURLSessionDownloadTask : GEODataURLSessionTask {

	NSURL* _downloadedFileURL;

}
-(id)downloadedFileURL;
-(void)didFinishDownloadingToURL:(id)arg1 ;
-(id)_createBackingTaskWithRequest:(id)arg1 session:(id)arg2 ;
@end

