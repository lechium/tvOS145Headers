/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AMSUIWebAction.h>
#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class AMSAuthenticateRequest, NSString;

@interface AMSUIWebAuthenticateAction : AMSUIWebAction <AMSUIWebActionRunnable> {

	BOOL _makeCurrentAccount;
	BOOL _pauseTimeouts;
	AMSAuthenticateRequest* _request;

}

@property (assign,nonatomic) BOOL pauseTimeouts;                            //@synthesize pauseTimeouts=_pauseTimeouts - In the implementation block
@property (assign,nonatomic) BOOL makeCurrentAccount;                       //@synthesize makeCurrentAccount=_makeCurrentAccount - In the implementation block
@property (nonatomic,retain) AMSAuthenticateRequest * request;              //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSAuthenticateRequest *)request;
-(void)setRequest:(AMSAuthenticateRequest *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(BOOL)pauseTimeouts;
-(BOOL)makeCurrentAccount;
-(void)setMakeCurrentAccount:(BOOL)arg1 ;
-(void)setPauseTimeouts:(BOOL)arg1 ;
@end

