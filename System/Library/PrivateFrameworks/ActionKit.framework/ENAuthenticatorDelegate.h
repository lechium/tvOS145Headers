/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ENAuthenticatorDelegate <NSObject>
@required
-(id)userStoreClientForBootstrapping;
-(void)authenticatorDidAuthenticateWithCredentials:(id)arg1 authInfo:(id)arg2;
-(void)authenticatorDidFailWithError:(id)arg1;

@end

