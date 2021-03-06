/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSURLSession, NSString;

@interface DEInvalidateDelegate : NSObject <NSURLSessionDelegate> {

	NSURLSession* _urlSession;
	NSString* _distribution;

}

@property (nonatomic,retain) NSURLSession * urlSession;              //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,retain) NSString * distribution;                //@synthesize distribution=_distribution - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(NSURLSession *)urlSession;
-(NSString *)distribution;
-(void)setDistribution:(NSString *)arg1 ;
-(void)setUrlSession:(NSURLSession *)arg1 ;
@end

