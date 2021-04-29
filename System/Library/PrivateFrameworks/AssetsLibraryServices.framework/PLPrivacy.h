/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSObject, PLAssetsdPrivacySupportClient;

@interface PLPrivacy : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	long long _authRightFullAccess;
	long long _authRightAddOnly;
	PLAssetsdPrivacySupportClient* _privacySupportClient;
	BOOL _hasHandledLimitedLibraryReprompt;
	BOOL _limitedLibrarySupported;

}

@property (assign) BOOL hasHandledLimitedLibraryReprompt;                                                //@synthesize hasHandledLimitedLibraryReprompt=_hasHandledLimitedLibraryReprompt - In the implementation block
@property (assign,getter=isLimitedLibrarySupported,nonatomic) BOOL limitedLibrarySupported;              //@synthesize limitedLibrarySupported=_limitedLibrarySupported - In the implementation block
+(id)sharedInstance;
+(BOOL)_isLimitedLibrarySupportedInClient;
-(id)init;
-(void)_resolvePreflightStatusForScope:(long long)arg1 ;
-(void)_setAuthStatus:(long long)arg1 scope:(long long)arg2 ;
-(long long)_authStatusForScope:(long long)arg1 ;
-(void)_checkAuthStatusForPhotosAccessScope:(long long)arg1 promptIfUnknown:(BOOL)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)_isPhotosAccessAllowedWithScope:(long long)arg1 promptIfUnknown:(BOOL)arg2 synchronous:(BOOL)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)checkPhotosAccessAllowedWithScope:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(long long)checkPhotosAccessAllowedWithScope:(long long)arg1 ;
-(long long)photosAccessAllowedWithScope:(long long)arg1 ;
-(long long)photosAccessAllowedWithScope:(long long)arg1 auditToken:(SCD_Struct_PL11)arg2 clientAuthorization:(id)arg3 ;
-(void)presentAsyncPromptForLimitedLibraryPickerIfNeeded;
-(void)requestLimitedLibraryPromptForApplicationIdentifier:(id)arg1 ;
-(BOOL)hasHandledLimitedLibraryReprompt;
-(void)setHasHandledLimitedLibraryReprompt:(BOOL)arg1 ;
-(BOOL)isLimitedLibrarySupported;
-(void)setLimitedLibrarySupported:(BOOL)arg1 ;
@end

