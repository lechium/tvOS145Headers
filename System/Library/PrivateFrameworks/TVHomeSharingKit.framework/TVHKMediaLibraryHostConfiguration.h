/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TVHKMediaLibraryHostConfiguration : NSObject <NSCopying> {

	NSString* _hostName;
	unsigned long long _port;

}

@property (nonatomic,copy,readonly) NSString * hostName;              //@synthesize hostName=_hostName - In the implementation block
@property (nonatomic,readonly) unsigned long long port;               //@synthesize port=_port - In the implementation block
+(id)new;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)port;
-(NSString *)hostName;
-(id)initWithHostName:(id)arg1 port:(unsigned long long)arg2 ;
@end

