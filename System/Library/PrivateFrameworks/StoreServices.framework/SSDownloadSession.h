/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class SSXPCConnection, NSObject, SSDownload, SSDownloadAsset;

@interface SSDownloadSession : NSObject {

	SSXPCConnection* _controlConnection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	long long _sessionID;
	long long _assetID;
	long long _downloadID;

}

@property (readonly) SSDownload * download; 
@property (readonly) SSDownloadAsset * downloadAsset; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)dealloc;
-(SSDownload *)download;
-(id)_initWithMessage:(id)arg1 controlConnection:(id)arg2 ;
-(id)_initSSDownloadSession;
-(id)_copySessionPropertyWithKey:(const char*)arg1 ;
-(SSDownloadAsset *)downloadAsset;
@end

