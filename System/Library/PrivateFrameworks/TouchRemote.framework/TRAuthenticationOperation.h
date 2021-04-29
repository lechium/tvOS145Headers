/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TouchRemote/TROperation.h>

@class NSSet, UIViewController;

@interface TRAuthenticationOperation : TROperation {

	BOOL _shouldIgnoreAuthFailures;
	BOOL _shouldForceInteractiveAuth;
	NSSet* _targetedServices;
	UIViewController* _presentingViewController;

}

@property (nonatomic,retain) NSSet * targetedServices;                                 //@synthesize targetedServices=_targetedServices - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreAuthFailures;                            //@synthesize shouldIgnoreAuthFailures=_shouldIgnoreAuthFailures - In the implementation block
@property (assign,nonatomic) BOOL shouldForceInteractiveAuth;                          //@synthesize shouldForceInteractiveAuth=_shouldForceInteractiveAuth - In the implementation block
@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(void)execute;
-(UIViewController *)presentingViewController;
-(void)setShouldForceInteractiveAuth:(BOOL)arg1 ;
-(BOOL)shouldForceInteractiveAuth;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setShouldIgnoreAuthFailures:(BOOL)arg1 ;
-(void)setTargetedServices:(NSSet *)arg1 ;
-(NSSet *)targetedServices;
-(BOOL)shouldIgnoreAuthFailures;
@end

