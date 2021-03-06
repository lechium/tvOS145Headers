/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface MCSignpost : NSObject <NSCopying> {

	NSString* _process;
	unsigned long long _type;
	NSString* _feature;
	NSDate* _timestamp;

}

@property (nonatomic,copy,readonly) NSString * process;              //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * feature;              //@synthesize feature=_feature - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(NSDate *)timestamp;
-(NSString *)process;
-(NSString *)feature;
-(id)initWithProcess:(id)arg1 type:(unsigned long long)arg2 feature:(id)arg3 timestamp:(id)arg4 ;
@end

