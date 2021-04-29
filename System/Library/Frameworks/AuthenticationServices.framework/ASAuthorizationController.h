/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding;
@class NSArray;

@interface ASAuthorizationController : NSObject {

	NSArray* _authorizationRequests;
	id<ASAuthorizationControllerDelegate> _delegate;
	id<ASAuthorizationControllerPresentationContextProviding> _presentationContextProvider;

}

@property (nonatomic,readonly) NSArray * authorizationRequests;                                                                         //@synthesize authorizationRequests=_authorizationRequests - In the implementation block
@property (assign,nonatomic,__weak) id<ASAuthorizationControllerDelegate> delegate;                                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<ASAuthorizationControllerPresentationContextProviding> presentationContextProvider;              //@synthesize presentationContextProvider=_presentationContextProvider - In the implementation block
+(id)new;
-(id)init;
-(id<ASAuthorizationControllerDelegate>)delegate;
-(void)setDelegate:(id<ASAuthorizationControllerDelegate>)arg1 ;
-(id)_authKitRequests;
-(void)_performAuthKitRequests:(id)arg1 ;
-(id)_authorizationFromAuthKitResult:(id)arg1 ;
-(id)_authKitRequestFromAppleIDRequest:(id)arg1 ;
-(id)initWithAuthorizationRequests:(id)arg1 ;
-(void)performRequests;
-(NSArray *)authorizationRequests;
-(id<ASAuthorizationControllerPresentationContextProviding>)presentationContextProvider;
-(void)setPresentationContextProvider:(id<ASAuthorizationControllerPresentationContextProviding>)arg1 ;
@end

