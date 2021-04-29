/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:04 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVIdleServices.framework/TVIdleServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSSet, NSURL;

@interface TVISAerialServiceConfiguration : NSObject {

	NSString* _mode;
	NSSet* _supportedVariants;
	NSString* _activeAssetVariant;
	double _remoteResourceRefreshInterval;
	long long _remoteAssetDownloadInterval;
	long long _resourceType;
	NSURL* _remoteResourceURL;
	NSURL* _localManifestURL;
	NSURL* _localResourceURL;
	NSURL* _localizedStringsBundleURL;
	NSURL* _localCacheBaseURL;
	NSURL* _localCacheURLForActiveAssetVariant;

}

@property (nonatomic,readonly) NSString * mode;                                         //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) NSSet * supportedVariants;                               //@synthesize supportedVariants=_supportedVariants - In the implementation block
@property (nonatomic,readonly) NSString * activeAssetVariant;                           //@synthesize activeAssetVariant=_activeAssetVariant - In the implementation block
@property (nonatomic,readonly) double remoteResourceRefreshInterval;                    //@synthesize remoteResourceRefreshInterval=_remoteResourceRefreshInterval - In the implementation block
@property (nonatomic,readonly) long long remoteAssetDownloadInterval;                   //@synthesize remoteAssetDownloadInterval=_remoteAssetDownloadInterval - In the implementation block
@property (nonatomic,readonly) long long resourceType;                                  //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,readonly) NSURL * remoteResourceURL;                               //@synthesize remoteResourceURL=_remoteResourceURL - In the implementation block
@property (nonatomic,readonly) NSURL * localManifestURL;                                //@synthesize localManifestURL=_localManifestURL - In the implementation block
@property (nonatomic,readonly) NSURL * localResourceURL;                                //@synthesize localResourceURL=_localResourceURL - In the implementation block
@property (nonatomic,readonly) NSURL * localizedStringsBundleURL;                       //@synthesize localizedStringsBundleURL=_localizedStringsBundleURL - In the implementation block
@property (nonatomic,readonly) NSURL * localCacheBaseURL;                               //@synthesize localCacheBaseURL=_localCacheBaseURL - In the implementation block
@property (nonatomic,readonly) NSURL * localCacheURLForActiveAssetVariant;              //@synthesize localCacheURLForActiveAssetVariant=_localCacheURLForActiveAssetVariant - In the implementation block
+(id)customerAssetsServiceConfiguration;
+(id)retailDemoAssetsServiceConfiguration;
-(NSString *)mode;
-(long long)resourceType;
-(NSSet *)supportedVariants;
-(NSURL *)localizedStringsBundleURL;
-(NSURL *)localCacheURLForActiveAssetVariant;
-(NSURL *)localManifestURL;
-(NSString *)activeAssetVariant;
-(id)initWithMode:(id)arg1 remoteResourceURL:(id)arg2 localCacheBaseURL:(id)arg3 ;
-(id)localCacheURLForAssetVariant:(id)arg1 ;
-(id)localBurnInMatrixFile:(long long)arg1 ;
-(double)remoteResourceRefreshInterval;
-(long long)remoteAssetDownloadInterval;
-(NSURL *)remoteResourceURL;
-(NSURL *)localResourceURL;
-(NSURL *)localCacheBaseURL;
@end

