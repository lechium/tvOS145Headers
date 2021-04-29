/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSEntity.h>

@class SSURLRequestProperties, NSString, NSURLRequest, NSArray;

@interface SSDownloadAsset : SSEntity {

	long long _assetType;
	SSURLRequestProperties* _localProperties;

}

@property (readonly) long long fileSize; 
@property (readonly) NSString * downloadFileName; 
@property (readonly) NSString * downloadPath; 
@property (readonly) NSString * finalizedPath; 
@property (getter=isExternal,readonly) BOOL external; 
@property (readonly) SSURLRequestProperties * URLRequestProperties; 
@property (readonly) SSURLRequestProperties * _localProperties; 
@property (retain,readonly) NSURLRequest * URLRequest; 
@property (readonly) NSArray * sinfs; 
+(long long)_existsMessage;
+(long long)_getExternalValuesMessage;
+(long long)_getValueMessage;
+(long long)_setValuesMessage;
+(id)assetWithURL:(id)arg1 type:(long long)arg2 ;
-(void)dealloc;
-(long long)fileSize;
-(long long)bytesDownloaded;
-(id)initWithURLRequest:(id)arg1 ;
-(BOOL)isExternal;
-(long long)assetType;
-(NSURLRequest *)URLRequest;
-(long long)bytesUploaded;
-(id)copyXPCEncoding;
-(NSArray *)sinfs;
-(long long)_legacyAssetType;
-(void)_resetLocalIVars;
-(id)initWithURLRequestProperties:(id)arg1 ;
-(id)_copyURLRequestProperties;
-(long long)bytesUploadTotal;
-(SSURLRequestProperties *)URLRequestProperties;
-(SSURLRequestProperties *)_localProperties;
-(id)initWithURLRequest:(id)arg1 type:(long long)arg2 ;
-(NSString *)downloadFileName;
-(NSString *)downloadPath;
-(NSString *)finalizedPath;
@end

