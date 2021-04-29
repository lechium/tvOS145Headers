/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _TVURLSessionDownloadTaskWrapper, NSURL, NSString;

@interface TVLayeredImageProxy : NSObject {

	_TVURLSessionDownloadTaskWrapper* _downloadTaskWrapper;
	BOOL _cancelled;
	NSURL* _url;
	long long _groupType;
	NSString* _assetKey;

}

@property (getter=isCancelled) BOOL cancelled;                        //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) long long groupType;                   //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetKey;              //@synthesize assetKey=_assetKey - In the implementation block
+(id)_loadingQueue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(void)cancel;
-(NSURL *)url;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)isLoading;
-(NSString *)assetKey;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(long long)groupType;
-(id)initWithURL:(id)arg1 groupType:(long long)arg2 ;
-(id)initWithURL:(id)arg1 groupType:(long long)arg2 assetKey:(id)arg3 ;
-(id)_assetPathWithAssetKey:(id)arg1 ;
-(BOOL)isImageAvailable;
@end

