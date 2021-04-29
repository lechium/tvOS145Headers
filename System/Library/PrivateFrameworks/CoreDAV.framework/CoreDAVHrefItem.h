/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVLeafItem.h>

@class NSURL;

@interface CoreDAVHrefItem : CoreDAVLeafItem {

	NSURL* _baseURL;
	int _writeStyle;

}

@property (nonatomic,retain) NSURL * baseURL;              //@synthesize baseURL=_baseURL - In the implementation block
@property (assign,nonatomic) int writeStyle;               //@synthesize writeStyle=_writeStyle - In the implementation block
-(id)description;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)baseURL;
-(void)write:(id)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(id)payloadAsFullURL;
-(void)parserSuggestsBaseURL:(id)arg1 ;
-(id)payloadAsOriginalURL;
-(id)initWithURL:(id)arg1 baseURL:(id)arg2 ;
-(int)writeStyle;
-(void)setWriteStyle:(int)arg1 ;
@end

