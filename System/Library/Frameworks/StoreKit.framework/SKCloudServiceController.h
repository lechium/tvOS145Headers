/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <StoreKit/StoreKit-Structs.h>
@class ICCloudServiceStatusMonitor;

@interface SKCloudServiceController : NSObject {

	BOOL _allowsPromptingForPrivacyAcknowledgement;
	ICCloudServiceStatusMonitor* _cloudServiceStatusMonitor;
	os_unfair_lock_s _lock;

}

@property (assign,setter=_setAllowsPromptingForPrivacyAcknowledgement:,nonatomic) BOOL _allowsPromptingForPrivacyAcknowledgement; 
+(long long)authorizationStatus;
+(void)requestAuthorization:(/*^block*/id)arg1 ;
+(id)_publicErrorForPrivateError:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)_allowsPromptingForPrivacyAcknowledgement;
-(void)requestStorefrontCountryCodeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestStorefrontIdentifierWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestCapabilitiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)requestUserTokenForDeveloperToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_cloudServiceStatusMonitorWithError:(id*)arg1 ;
-(void)_handleCapabilitiesDidChangeNotification:(id)arg1 ;
-(void)_handleStorefrontCountryCodeDidChangeNotification:(id)arg1 ;
-(void)_handleStorefrontIdentifierDidChangeNotification:(id)arg1 ;
-(void)requestPersonalizationTokenForClientToken:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_setAllowsPromptingForPrivacyAcknowledgement:(BOOL)arg1 ;
@end

