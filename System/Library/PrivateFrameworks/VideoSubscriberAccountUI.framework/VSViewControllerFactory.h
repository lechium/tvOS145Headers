/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:47 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSOperationQueue;

@interface VSViewControllerFactory : NSObject {

	NSOperationQueue* _privateQueue;

}

@property (nonatomic,retain) NSOperationQueue * privateQueue;              //@synthesize privateQueue=_privateQueue - In the implementation block
+(id)sharedFactory;
-(id)init;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(void)viewServiceRemoteViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(id)authenticationViewControllerForViewModel:(id)arg1 ;
-(id)loadingViewController;
-(id)identityProviderPickerViewControllerWithIdentityProviders:(id)arg1 ;
-(id)viewControllerToConfirmAccountDeletionForIdentityProviderDisplayName:(id)arg1 preferredStyle:(long long)arg2 confirmationHandler:(/*^block*/id)arg3 ;
-(id)viewControllerToConfirmDeveloperIdentityProviderDeletionWithConfirmationHandler:(/*^block*/id)arg1 ;
-(id)viewControllerForUnsupportedProvider:(id)arg1 withRequestingAppDisplayName:(id)arg2 storage:(id)arg3 acknowledgementHandler:(/*^block*/id)arg4 ;
-(id)viewControllerForAppsSupportedByIdentityProvider:(id)arg1 supportedApps:(id)arg2 delegate:(id)arg3 ;
-(id)viewControllerForPlaybackActivityReportingFromAppsWithBundleIDs:(id)arg1 grantingVouchers:(BOOL)arg2 appleAccount:(id)arg3 identityProvider:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

