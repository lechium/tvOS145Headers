/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSURL;

@interface FMSongAsset : NSObject {

	double _downloadProgress;
	NSString* _assetID;
	NSString* _songUID;
	unsigned long long _assetStatus;
	NSURL* _localURL;
	long long _contentVersion;
	long long _compatibilityVersion;

}

@property (nonatomic,readonly) long long contentVersion;                    //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,readonly) long long compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (readonly) NSString * assetID;                                    //@synthesize assetID=_assetID - In the implementation block
@property (retain) NSString * songUID;                                      //@synthesize songUID=_songUID - In the implementation block
@property (readonly) unsigned long long assetStatus;                        //@synthesize assetStatus=_assetStatus - In the implementation block
@property (readonly) NSURL * localURL;                                      //@synthesize localURL=_localURL - In the implementation block
-(long long)contentVersion;
-(long long)compatibilityVersion;
-(NSURL *)localURL;
-(double)downloadProgress;
-(NSString *)assetID;
-(void)cancelDownload;
-(BOOL)updateDownloadProgress:(double)arg1 ;
-(void)requestDownload;
-(unsigned long long)assetStatus;
-(BOOL)contentUpdateAvaliable;
-(void)setSongUID:(NSString *)arg1 ;
-(NSString *)songUID;
-(void)purgeLocalCache;
-(long long)contentVersionForAssetLocation:(unsigned long long)arg1 ;
-(long long)compatibilityVersionForAssetLocation:(unsigned long long)arg1 ;
-(BOOL)isCloudBacked;
-(BOOL)localURLExists;
-(id)initWithAssetID:(id)arg1 assetStatus:(unsigned long long)arg2 localURL:(id)arg3 contentVersion:(long long)arg4 compatibilityVersion:(long long)arg5 ;
-(void)requestDownloadWithOptions:(id)arg1 ;
@end

