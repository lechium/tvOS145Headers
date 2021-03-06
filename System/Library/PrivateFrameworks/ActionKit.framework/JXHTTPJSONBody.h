/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/JXHTTPRequestBody.h>

@class NSData, NSString;

@interface JXHTTPJSONBody : NSObject <JXHTTPRequestBody> {

	NSData* _requestData;

}

@property (nonatomic,retain) NSData * requestData;                  //@synthesize requestData=_requestData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withString:(id)arg1 ;
+(id)withData:(id)arg1 ;
+(id)withJSONObject:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setRequestData:(NSData *)arg1 ;
-(NSData *)requestData;
-(id)httpInputStream;
-(id)httpContentType;
-(long long)httpContentLength;
-(void)httpOperationDidFinishLoading:(id)arg1 ;
@end

