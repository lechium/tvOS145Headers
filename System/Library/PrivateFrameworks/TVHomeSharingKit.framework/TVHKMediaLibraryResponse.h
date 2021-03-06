/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSHTTPURLResponse, NSString;

@interface TVHKMediaLibraryResponse : NSObject <NSCopying> {

	NSData* _data;
	NSHTTPURLResponse* _HTTPResponse;

}

@property (nonatomic,retain) NSHTTPURLResponse * HTTPResponse;                 //@synthesize HTTPResponse=_HTTPResponse - In the implementation block
@property (nonatomic,readonly) unsigned long long HTTPStatusCode; 
@property (nonatomic,copy,readonly) NSString * MIMEType; 
@property (nonatomic,readonly) NSData * data;                                  //@synthesize data=_data - In the implementation block
+(id)new;
+(id)_mediaServerResponseWithURLResponse:(id)arg1 data:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSData *)data;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(NSString *)MIMEType;
-(unsigned long long)HTTPStatusCode;
-(id)_initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSHTTPURLResponse *)HTTPResponse;
-(void)setHTTPResponse:(NSHTTPURLResponse *)arg1 ;
@end

