/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class NSURL, NSData, NSString;

@interface TVCKPushNotificationTypeOperation : NSOperation {

	NSURL* _url;
	NSData* _body;
	NSString* _debugStr;

}

@property (nonatomic,copy,readonly) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSData * body;                    //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * debugStr;              //@synthesize debugStr=_debugStr - In the implementation block
-(NSURL *)url;
-(void)main;
-(NSData *)body;
-(id)initWithURL:(id)arg1 body:(id)arg2 debugStr:(id)arg3 ;
-(NSString *)debugStr;
@end

