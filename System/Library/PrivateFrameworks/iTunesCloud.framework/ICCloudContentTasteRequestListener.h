/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:35 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface ICCloudContentTasteRequestListener : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSXPCConnection* _xpcConnection;

}
+(id)sharedCloudContentTasteRequestListener;
-(id)init;
-(id)_init;
-(void)setContentTaste:(long long)arg1 forMediaItem:(long long)arg2 storeIdentifier:(long long)arg3 configuration:(id)arg4 timeStamp:(id)arg5 withCompletionHandler:(/*^block*/id)arg6 ;
-(void)setContentTaste:(long long)arg1 forPlaylistGlobalID:(id)arg2 configuration:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)setContentTaste:(long long)arg1 forAlbumStoreID:(long long)arg2 configuration:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)updateContentTasteForMediaItemsAndInvalidateLocalCache:(BOOL)arg1 configuration:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setContentTaste:(long long)arg1 forMediaItem:(long long)arg2 storeIdentifier:(long long)arg3 timeStamp:(id)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(void)setContentTaste:(long long)arg1 forPlaylistGlobalID:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setContentTaste:(long long)arg1 forAlbumStoreID:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)updateContentTasteForMediaItemsAndInvalidateLocalCache:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_setupContentTasteServiceConnection;
@end

