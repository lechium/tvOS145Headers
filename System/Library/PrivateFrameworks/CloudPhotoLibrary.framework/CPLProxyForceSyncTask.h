/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:27 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CPLForceSyncTask.h>

@class CPLProxyLibraryManager;

@interface CPLProxyForceSyncTask : CPLForceSyncTask {

	CPLProxyLibraryManager* _proxyLibraryManager;

}

@property (nonatomic,retain) CPLProxyLibraryManager * proxyLibraryManager;              //@synthesize proxyLibraryManager=_proxyLibraryManager - In the implementation block
-(void)setProxyLibraryManager:(CPLProxyLibraryManager *)arg1 ;
-(void)cancelTask;
-(CPLProxyLibraryManager *)proxyLibraryManager;
@end

