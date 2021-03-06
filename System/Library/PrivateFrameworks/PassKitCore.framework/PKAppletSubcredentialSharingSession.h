/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKDASession.h>

@interface PKAppletSubcredentialSharingSession : PKDASession
+(id)createSessionWithDelegate:(id)arg1 ;
-(void)setAccountAttestation:(id)arg1 forCredential:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)accountAttestionRequestForCredential:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)cancelSharingInvitationWithIdentifier:(id)arg1 ;
-(void)sendSharingInvitationWithRequest:(id)arg1 auth:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendSharingInvitation:(id)arg1 forInvitationRequest:(id)arg2 withSharedCredential:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)requestSharingInvitation:(id)arg1 from:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)acceptSharingInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

