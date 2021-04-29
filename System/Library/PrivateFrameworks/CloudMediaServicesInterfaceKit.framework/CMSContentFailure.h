/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CMSCoding.h>

@class NSMutableArray, NSURL, NSArray, NSString;

@interface CMSContentFailure : NSObject <CMSCoding> {

	NSMutableArray* _attempts;
	NSURL* _URL;
	NSURL* _redirectedURL;

}

@property (nonatomic,copy) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSURL * redirectedURL;                    //@synthesize redirectedURL=_redirectedURL - In the implementation block
@property (nonatomic,copy,readonly) NSArray * attempts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSArray *)attempts;
-(id)cmsCoded;
-(void)retriedWithFailure:(unsigned long long)arg1 result:(id)arg2 body:(id)arg3 ;
-(id)initWithFailure:(unsigned long long)arg1 URL:(id)arg2 redirectedURL:(id)arg3 result:(id)arg4 body:(id)arg5 ;
-(NSURL *)redirectedURL;
-(void)setRedirectedURL:(NSURL *)arg1 ;
@end

