/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Accounts/Authentication/AppleIDSSOAuthenticationPlugin.bundle/AppleIDSSOAuthenticationPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACDAccountAuthenticationPlugin <NSObject>
@optional
-(BOOL)isPushSupportedForAccount:(id)arg1;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;
-(void)discoverPropertiesForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;
-(id)credentialForAccount:(id)arg1 client:(id)arg2;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 error:(id*)arg3;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 store:(id)arg3 error:(id*)arg4;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3;
-(void)verifyCredentialsForAccount:(id)arg1 client:(id)arg2 withHandler:(/*^block*/id)arg3;
-(id)renewalIDsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3;
-(id)renewalIDForAccount:(id)arg1;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4;

@end

