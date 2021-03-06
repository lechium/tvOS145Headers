/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface BWDeferredIntermediate : NSObject <NSSecureCoding> {

	opaque_pthread_mutex_t _lock;
	opaque_pthread_cond_t _cv;
	NSString* _tag;
	NSURL* _URL;
	BOOL _prefetching;
	BOOL _dirty;

}

@property (nonatomic,readonly) NSString * tag;              //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                 //@synthesize URL=_URL - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(NSString *)tag;
-(int)flush;
-(id)archive:(int*)arg1 ;
-(int)setURL:(id)arg1 prefetchQueue:(id)arg2 ;
-(id)fetchAndRetain:(int*)arg1 ;
-(id)initWithTag:(id)arg1 URL:(id)arg2 ;
@end

