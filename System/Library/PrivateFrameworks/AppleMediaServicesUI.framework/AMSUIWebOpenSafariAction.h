/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AMSUIWebAction.h>
#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class NSURL, NSString;

@interface AMSUIWebOpenSafariAction : AMSUIWebAction <AMSUIWebActionRunnable> {

	NSURL* _URL;
	NSString* _callbackScheme;

}

@property (nonatomic,retain) NSString * callbackScheme;              //@synthesize callbackScheme=_callbackScheme - In the implementation block
@property (nonatomic,retain) NSURL * URL;                            //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resultFromURL:(id)arg1 error:(id)arg2 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(NSString *)callbackScheme;
-(void)setCallbackScheme:(NSString *)arg1 ;
@end

